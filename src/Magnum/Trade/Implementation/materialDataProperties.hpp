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

/* See Magnum/Trade/MaterialData.cpp and Magnum/Trade/Test/MaterialDataTest.cpp */
#ifdef _c
_cnt(LayerName,"$LayerName",String,Containers::StringView)
_c(AlphaMask,Float)
_ct(AlphaBlend,Bool,bool)
_ct(DoubleSided,Bool,bool)
_c(AmbientColor,Vector4)
_c(AmbientTexture,UnsignedInt)
_c(AmbientTextureMatrix,Matrix3x3)
_c(AmbientCoordinateSet,UnsignedInt)
_c(DiffuseColor,Vector4)
_c(DiffuseTexture,UnsignedInt)
_c(DiffuseTextureMatrix,Matrix3x3)
_c(DiffuseCoordinateSet,UnsignedInt)
_c(SpecularColor,Vector4)
_c(SpecularTexture,UnsignedInt)
_c(SpecularTextureMatrix,Matrix3x3)
_c(SpecularCoordinateSet,UnsignedInt)
_c(Shininess,Float)
_c(BaseColor,Vector4)
_c(BaseColorTexture,UnsignedInt)
_c(BaseColorTextureMatrix,Matrix3x3)
_c(BaseColorCoordinateSet,UnsignedInt)
_c(Metalness,Float)
_c(MetalnessTexture,UnsignedInt)
_ct(MetalnessTextureSwizzle,TextureSwizzle,MaterialTextureSwizzle)
_c(MetalnessTextureMatrix,Matrix3x3)
_c(MetalnessCoordinateSet,UnsignedInt)
_c(Roughness,Float)
_c(RoughnessTexture,UnsignedInt)
_ct(RoughnessTextureSwizzle,TextureSwizzle,MaterialTextureSwizzle)
_c(RoughnessTextureMatrix,Matrix3x3)
_c(RoughnessCoordinateSet,UnsignedInt)
_c(MetallicRoughnessTexture,UnsignedInt)
_c(MetallicRoughnessTextureMatrix,Matrix3x3)
_c(MetallicRoughnessCoordinateSet,UnsignedInt)
_c(Glossiness,Float)
_c(GlossinessTexture,UnsignedInt)
_ct(GlossinessTextureSwizzle,TextureSwizzle,MaterialTextureSwizzle)
_c(GlossinessTextureMatrix,Matrix3x3)
_c(GlossinessCoordinateSet,UnsignedInt)
_c(SpecularGlossinessTexture,UnsignedInt)
_c(SpecularGlossinessTextureMatrix,Matrix3x3)
_c(SpecularGlossinessCoordinateSet,UnsignedInt)
_c(NormalTexture,UnsignedInt)
_ct(NormalTextureSwizzle,TextureSwizzle,MaterialTextureSwizzle)
_c(NormalTextureMatrix,Matrix3x3)
_c(NormalCoordinateSet,UnsignedInt)
_c(OcclusionTexture,UnsignedInt)
_ct(OcclusionTextureSwizzle,TextureSwizzle,MaterialTextureSwizzle)
_c(OcclusionTextureMatrix,Matrix3x3)
_c(OcclusionCoordinateSet,UnsignedInt)
_c(EmissiveColor,Vector3)
_c(EmissiveTexture,UnsignedInt)
_c(EmissiveTextureMatrix,Matrix3x3)
_c(EmissiveCoordinateSet,UnsignedInt)
_c(TextureMatrix,Matrix3x3)
_c(CoordinateSet,UnsignedInt)
#endif
