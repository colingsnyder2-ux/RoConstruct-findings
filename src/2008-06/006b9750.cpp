// from server: 100% by auto
// roc 2008-06 006b9750  unit: CXTPCommandBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9750
//
// 006b9750  8b442404             mov eax, dword ptr [esp + 4]
// 006b9754  83ec3c               sub esp, 0x3c
// 006b9757  56                   push esi
// 006b9758  6a00                 push 0
// 006b975a  6880000000           push 0x80
// 006b975f  6a03                 push 3
// 006b9761  6a00                 push 0
// 006b9763  6a00                 push 0
// 006b9765  6800000080           push 0x80000000
// 006b976a  50                   push eax
// 006b976b  ff153c228000         call dword ptr [0x80223c]
// 006b9771  8bf0                 mov esi, eax
// 006b9773  83feff               cmp esi, -1
// 006b9776  7507                 jne 0x6b977f
// 006b9778  33c0                 xor eax, eax
// 006b977a  5e                   pop esi
// 006b977b  83c43c               add esp, 0x3c
// 006b977e  c3                   ret 
// 006b977f  57                   push edi
// 006b9780  8b3df0228000         mov edi, dword ptr [0x8022f0]
// 006b9786  6a00                 push 0
// 006b9788  8d4c240c             lea ecx, [esp + 0xc]
// 006b978c  51                   push ecx
// 006b978d  6a0e                 push 0xe
// 006b978f  8d542418             lea edx, [esp + 0x18]
// 006b9793  52                   push edx
// 006b9794  56                   push esi
// 006b9795  ffd7                 call edi
// 006b9797  85c0                 test eax, eax
// 006b9799  743f                 je 0x6b97da
// 006b979b  837c24080e           cmp dword ptr [esp + 8], 0xe
// 006b97a0  7538                 jne 0x6b97da
// 006b97a2  6a00                 push 0
// 006b97a4  8d44240c             lea eax, [esp + 0xc]
// 006b97a8  50                   push eax
// 006b97a9  6a28                 push 0x28
// 006b97ab  8d4c2428             lea ecx, [esp + 0x28]
// 006b97af  51                   push ecx
// 006b97b0  56                   push esi
// 006b97b1  ffd7                 call edi
// 006b97b3  85c0                 test eax, eax
// 006b97b5  7423                 je 0x6b97da
// 006b97b7  837c240828           cmp dword ptr [esp + 8], 0x28
// 006b97bc  751c                 jne 0x6b97da
// 006b97be  33d2                 xor edx, edx
// 006b97c0  66837c242a20         cmp word ptr [esp + 0x2a], 0x20
// 006b97c6  56                   push esi
// 006b97c7  0f94c2               sete dl
// 006b97ca  8bfa                 mov edi, edx
// 006b97cc  ff1534228000         call dword ptr [0x802234]
// 006b97d2  8bc7                 mov eax, edi
// 006b97d4  5f                   pop edi
// 006b97d5  5e                   pop esi
// 006b97d6  83c43c               add esp, 0x3c
// 006b97d9  c3                   ret 
// 006b97da  56                   push esi
// 006b97db  ff1534228000         call dword ptr [0x802234]
// 006b97e1  5f                   pop edi
// 006b97e2  33c0                 xor eax, eax
// 006b97e4  5e                   pop esi
// 006b97e5  83c43c               add esp, 0x3c
// 006b97e8  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsAlphaBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
