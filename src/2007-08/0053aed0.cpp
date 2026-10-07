// roc 2007-08 0053aed0  unit: RBX::VScriptContext::?$FactoryProduct  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053aed0
//
// 0053aed0  8b01                 mov eax, dword ptr [ecx]
// 0053aed2  50                   push eax
// 0053aed3  e8d8fdffff           call 0x53acb0
// 0053aed8  59                   pop ecx
// 0053aed9  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1?$_Container_base_aux_alloc_real@V?$allocator@VToken@G3D@@@std@@@std@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
