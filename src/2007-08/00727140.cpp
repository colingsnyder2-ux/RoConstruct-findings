// roc 2007-08 00727140  unit: boost::thread_resource_error  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00727140
//
// 00727140  8b01                 mov eax, dword ptr [ecx]
// 00727142  50                   push eax
// 00727143  e81a8bf0ff           call 0x62fc62
// 00727148  59                   pop ecx
// 00727149  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1?$_Container_base_aux_alloc_real@V?$allocator@VToken@G3D@@@std@@@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
