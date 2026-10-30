// roc 2009-12 00725820  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725820
//
// 00725820  8b442404             mov eax, dword ptr [esp + 4]
// 00725824  89818c000000         mov dword ptr [ecx + 0x8c], eax
// 0072582a  c20400               ret 4
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?setGeometryProgramNumOutputVertices@RenderSystemCapabilities@Ogre@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
