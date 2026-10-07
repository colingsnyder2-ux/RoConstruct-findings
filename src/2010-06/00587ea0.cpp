// roc 2010-06 00587ea0  unit: seg_00580000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00587ea0
//
// 00587ea0  837c240800           cmp dword ptr [esp + 8], 0
// 00587ea5  56                   push esi
// 00587ea6  57                   push edi
// 00587ea7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00587eab  8bb744010000         mov esi, dword ptr [edi + 0x144]
// 00587eb1  7413                 je 0x587ec6
// 00587eb3  8b07                 mov eax, dword ptr [edi]
// 00587eb5  c7401404000000       mov dword ptr [eax + 0x14], 4
// 00587ebc  8b0f                 mov ecx, dword ptr [edi]
// 00587ebe  8b11                 mov edx, dword ptr [ecx]
// 00587ec0  57                   push edi
// 00587ec1  ffd2                 call edx
// 00587ec3  83c404               add esp, 4
// 00587ec6  8b4720               mov eax, dword ptr [edi + 0x20]
// 00587ec9  894630               mov dword ptr [esi + 0x30], eax
// 00587ecc  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00587ed3  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00587eda  8b8fdc000000         mov ecx, dword ptr [edi + 0xdc]
// 00587ee0  03c9                 add ecx, ecx
// 00587ee2  5f                   pop edi
// 00587ee3  894e3c               mov dword ptr [esi + 0x3c], ecx
// 00587ee6  5e                   pop esi
// 00587ee7  c3                   ret 
// library jpeg-6b/jcprepct.c (function _start_pass_prep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
