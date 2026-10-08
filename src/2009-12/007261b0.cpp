// roc 2009-12 007261b0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007261b0
//
// 007261b0  8b442404             mov eax, dword ptr [esp + 4]
// 007261b4  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 007261ba  c20400               ret 4
// library ogre-1.6.4/OgrePass.cpp (function ?setAlphaRejectFunction@Pass@Ogre@@QAEXW4CompareFunction@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgrePass.cpp
