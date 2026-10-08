// from server: 100% by auto
// roc 2007-08 00481e60  unit: G3D::Win32Window  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00481e60
//
// 00481e60  8b01                 mov eax, dword ptr [ecx]
// 00481e62  50                   push eax
// 00481e63  e8bee01a00           call 0x62ff26
// 00481e68  59                   pop ecx
// 00481e69  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1?$_Container_base_aux_alloc_real@V?$allocator@VToken@G3D@@@std@@@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
