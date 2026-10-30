// roc 2011-06 00403c30  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00403c30
//
// 00403c30  56                   push esi
// 00403c31  57                   push edi
// 00403c32  8b3dd419a400         mov edi, dword ptr [0xa419d4]
// 00403c38  8bf1                 mov esi, ecx
// 00403c3a  8d9b00000000         lea ebx, [ebx]
// 00403c40  8b06                 mov eax, dword ptr [esi]
// 00403c42  0fbe08               movsx ecx, byte ptr [eax]
// 00403c45  83c1f7               add ecx, -9
// 00403c48  83f917               cmp ecx, 0x17
// 00403c4b  7715                 ja 0x403c62
// 00403c4d  0fb689703c4000       movzx ecx, byte ptr [ecx + 0x403c70]
// 00403c54  ff248d683c4000       jmp dword ptr [ecx*4 + 0x403c68]
// 00403c5b  50                   push eax
// 00403c5c  ffd7                 call edi
// 00403c5e  8906                 mov dword ptr [esi], eax
// 00403c60  ebde                 jmp 0x403c40
// 00403c62  5f                   pop edi
// 00403c63  5e                   pop esi
// 00403c64  c3                   ret 
// 00403c65  8d4900               lea ecx, [ecx]
// 00403c68  5b                   pop ebx
// 00403c69  3c40                 cmp al, 0x40
// 00403c6b  00623c               add byte ptr [edx + 0x3c], ah
// 00403c6e  40                   inc eax
// 00403c6f  0000                 add byte ptr [eax], al
// 00403c71  0001                 add byte ptr [ecx], al
// 00403c73  0100                 add dword ptr [eax], eax
// 00403c75  0101                 add dword ptr [ecx], eax
// 00403c77  0101                 add dword ptr [ecx], eax
// 00403c79  0101                 add dword ptr [ecx], eax
// 00403c7b  0101                 add dword ptr [ecx], eax
// 00403c7d  0101                 add dword ptr [ecx], eax
// 00403c7f  0101                 add dword ptr [ecx], eax
// 00403c81  0101                 add dword ptr [ecx], eax
// 00403c83  0101                 add dword ptr [ecx], eax
// 00403c85  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?SkipWhiteSpace@CRegParser@ATL@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp