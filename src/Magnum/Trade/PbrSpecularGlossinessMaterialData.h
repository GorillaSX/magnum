#ifndef Magnum_Trade_PbrSpecularGlossinessMaterialData_h
#define Magnum_Trade_PbrSpecularGlossinessMaterialData_h
/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019,
                2020 Vladimír Vondruš <mosra@centrum.cz>

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

/** @file
 * @brief Class @ref Magnum::Trade::PbrSpecularGlossinessMaterialData
 * @m_since_latest
 */

#include "Magnum/Trade/MaterialData.h"

namespace Magnum { namespace Trade {

/**
@brief PBR specular/glossiness material data
@m_since_latest

@see @ref PbrMetallicRoughnessMaterialData
*/
class MAGNUM_TRADE_EXPORT PbrSpecularGlossinessMaterialData: public MaterialData {
    public:
        /**
         * @brief Construction is not allowed
         *
         * This class is meant to be used only for convenience attribute access
         * with a cast from @ref MaterialData, never constructed directly.
         */
        PbrSpecularGlossinessMaterialData() = delete;

        /**
         * @brief Whether the material has texture transformation
         *
         * Returns @cpp true @ce if any of the
         * @ref MaterialAttribute::BaseColorTextureMatrix,
         * @ref MaterialAttribute::MetallicRoughnessTextureMatrix,
         * @ref MaterialAttribute::NormalTextureMatrix,
         * @ref MaterialAttribute::OcclusionTextureMatrix,
         * @ref MaterialAttribute::EmissiveTextureMatrix or
         * @ref MaterialAttribute::TextureMatrix attributes is present,
         * @cpp false @ce otherwise.
         */
        bool hasTextureTransformation() const;

        /**
         * @brief Whether the material uses extra texture coordinate sets
         *
         * Returns @cpp true @ce if any of the
         * @ref MaterialAttribute::BaseColorCoordinateSet,
         * @ref MaterialAttribute::MetallicRoughnessCoordinateSet,
         * @ref MaterialAttribute::NormalCoordinateSet,
         * @ref MaterialAttribute::OcclusionCoordinateSet,
         * @ref MaterialAttribute::EmissiveCoordinateSet or
         * @ref MaterialAttribute::CoordinateSet attributes is present and has
         * a non-zero value, @cpp false @ce otherwise.
         */
        bool hasTextureCoordinateSets() const;

        /**
         * @brief Base color
         *
         * Convenience access to the @ref MaterialAttribute::BaseColor
         * attribute. If not present, the default is @cpp 0xffffffff_rgbaf @ce.
         *
         * If the material has @ref MaterialAttribute::BaseColorTexture, the
         * color and texture is meant to be multiplied together.
         */
        Color4 diffuseColor() const;

        /**
         * @brief Base color texture ID
         *
         * Available only if @ref MaterialAttribute::BaseColorTexture is
         * present. Meant to be multiplied with @ref baseColor().
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt diffuseTexture() const;

        /**
         * @brief Base color texture coordinate transformation matrix
         *
         * Convenience access to the @ref MaterialAttribute::BaseColorTextureMatrix
         * / @ref MaterialAttribute::TextureMatrix attributes. If neither is
         * present, the default is an identity matrix. Available only if the
         * material has @ref MaterialAttribute::BaseColorTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        Matrix3 diffuseTextureMatrix() const;

        /**
         * @brief Base color texture coordinate set
         *
         * Convenience access to the @ref MaterialAttribute::BaseColorCoordinateSet
         * / @ref MaterialAttribute::CoordinateSet attributes. If neither is
         * present, the default is @cpp 0 @ce. Available only if the material
         * has @ref MaterialAttribute::BaseColorTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt diffuseCoordinateSet() const;

        /**
         * @brief Specular color
         *
         * Convenience access to the @ref MaterialAttribute::SpecularColor
         * attribute. If not present, the default is @cpp 0xffffff_rgbf @ce.
         *
         * If the material has @ref MaterialAttribute::SpecularGlossinessTexture,
         * the color and texture is meant to be multiplied together.
         */
        Color3 specularColor() const;

        /**
         * @brief Glossiness factor
         *
         * Convenience access to the @ref MaterialAttribute::Glossiness
         * attribute. If not present, the default is @cpp 1.0f @ce.
         *
         * If the material has @ref MaterialAttribute::SpecularGlossinessTexture,
         * the factor and texture is meant to be multiplied together.
         */
        Float glossiness() const;

        /**
         * @brief Specular/glossiness texture ID
         *
         * Available only if @ref MaterialAttribute::SpecularGlossinessTexture
         * is present. Meant to be multiplied with @ref specularColor() and
         * @ref glossiness().
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt specularGlossinessTexture() const;

        /**
         * @brief Base color texture coordinate transformation matrix
         *
         * Convenience access to the @ref MaterialAttribute::SpecularGlossinessTextureMatrix
         * / @ref MaterialAttribute::TextureMatrix attributes. If neither is
         * present, the default is an identity matrix. Available only if the
         * material has @ref MaterialAttribute::SpecularGlossinessTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        Matrix3 specularGlossinessTextureMatrix() const;

        /**
         * @brief Base color texture coordinate set
         *
         * Convenience access to the @ref MaterialAttribute::SpecularGlossinessCoordinateSet
         * / @ref MaterialAttribute::CoordinateSet attributes. If neither is
         * present, the default is @cpp 0 @ce. Available only if the material
         * has @ref MaterialAttribute::SpecularGlossinessTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt specularGlossinessCoordinateSet() const;

        /**
         * @brief Normal texture ID
         *
         * Available only if @ref MaterialAttribute::NormalTexture is present.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt normalTexture() const;

        /**
         * @brief Normal texture coordinate transformation matrix
         *
         * Convenience access to the @ref MaterialAttribute::NormalTextureMatrix
         * / @ref MaterialAttribute::TextureMatrix attributes. If neither is
         * present, the default is an identity matrix. Available only if the
         * material has @ref MaterialAttribute::NormalTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        Matrix3 normalTextureMatrix() const;

        /**
         * @brief Normal texture coordinate set
         *
         * Convenience access to the @ref MaterialAttribute::NormalCoordinateSet
         * / @ref MaterialAttribute::CoordinateSet attributes. If neither is
         * present, the default is @cpp 0 @ce. Available only if the material
         * has @ref MaterialAttribute::NormalTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt normalCoordinateSet() const;

        /**
         * @brief Occlusion texture ID
         *
         * Available only if @ref MaterialAttribute::OcclusionTexture is present.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt occlusionTexture() const;

        /**
         * @brief Occlusion texture coordinate transformation matrix
         *
         * Convenience access to the @ref MaterialAttribute::OcclusionTextureMatrix
         * / @ref MaterialAttribute::TextureMatrix attributes. If neither is
         * present, the default is an identity matrix. Available only if the
         * material has @ref MaterialAttribute::OcclusionTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        Matrix3 occlusionTextureMatrix() const;

        /**
         * @brief Occlusion texture coordinate set
         *
         * Convenience access to the @ref MaterialAttribute::OcclusionCoordinateSet
         * / @ref MaterialAttribute::CoordinateSet attributes. If neither is
         * present, the default is @cpp 0 @ce. Available only if the material
         * has @ref MaterialAttribute::OcclusionTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt occlusionCoordinateSet() const;

        /**
         * @brief Emissive color
         *
         * Convenience access to the @ref MaterialAttribute::EmissiveColor
         * attribute. If not present, the default is @cpp 0x000000_rgbf @ce
         * (i.e, no emission).
         *
         * If the material has @ref MaterialAttribute::EmissiveTexture, the
         * color and texture is meant to be multiplied together.
         */
        Color3 emissiveColor() const;

        /**
         * @brief Emissive texture ID
         *
         * Available only if @ref MaterialAttribute::EmissiveTexture is present.
         * Meant to be multiplied with @ref emissiveColor().
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt emissiveTexture() const;

        /**
         * @brief Emissive texture coordinate transformation matrix
         *
         * Convenience access to the @ref MaterialAttribute::EmissiveTextureMatrix
         * / @ref MaterialAttribute::TextureMatrix attributes. If neither is
         * present, the default is an identity matrix. Available only if the
         * material has @ref MaterialAttribute::EmissiveTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        Matrix3 emissiveTextureMatrix() const;

        /**
         * @brief Emissive texture coordinate set
         *
         * Convenience access to the @ref MaterialAttribute::EmissiveCoordinateSet
         * / @ref MaterialAttribute::CoordinateSet attributes. If neither is
         * present, the default is @cpp 0 @ce. Available only if the material
         * has @ref MaterialAttribute::EmissiveTexture.
         * @see @ref hasAttribute(), @ref AbstractImporter::texture()
         */
        UnsignedInt emissiveCoordinateSet() const;

        /**
         * @brief Common texture coordinate transformation matrix for all textures
         *
         * Convenience access to the @ref MaterialAttribute::TextureMatrix
         * attribute. If not present, the default is an identity matrix. Note
         * that the material may also define per-texture transformation using
         * the @ref MaterialAttribute::BaseColorTextureMatrix,
         * @ref MaterialAttribute::SpecularGlossinessTextureMatrix,
         * @ref MaterialAttribute::NormalTextureMatrix,
         * @ref MaterialAttribute::OcclusionTextureMatrix and
         * @ref MaterialAttribute::EmissiveTextureMatrix attributes, which then
         * take precedence over the common one.
         * @see @ref hasAttribute(), @ref baseColorCoordinateSet(),
         *      @ref metallicRoughnessCoordinateSet(),
         *      @ref normalCoordinateSet(), @ref occlusionCoordinateSet(),
         *      @ref emissiveCoordinateSet()
         */
        Matrix3 textureMatrix() const;

        /**
         * @brief Common texture coordinate set index for all textures
         *
         * Convenience access to the @ref MaterialAttribute::CoordinateSet
         * attribute. If not present, the default is @cpp 0 @ce. Note that the
         * material may also define per-texture coordinate set using the
         * @ref MaterialAttribute::BaseColorCoordinateSet,
         * @ref MaterialAttribute::SpecularGlossinessCoordinateSet,
         * @ref MaterialAttribute::NormalCoordinateSet,
         * @ref MaterialAttribute::OcclusionCoordinateSet and
         * @ref MaterialAttribute::EmissiveCoordinateSet attributes, which then
         * take precedence over the common one.
         * @see @ref hasAttribute(), @ref baseColorCoordinateSet(),
         *      @ref metallicRoughnessCoordinateSet(),
         *      @ref normalCoordinateSet(), @ref occlusionCoordinateSet(),
         *      @ref emissiveCoordinateSet()
         */
        UnsignedInt coordinateSet() const;
};

}}

#endif
