// roc 2007-03 00624c00  unit: seg_00620000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624c00
//
// 00624c00  8b442404             mov eax, dword ptr [esp + 4]
// 00624c04  83ec3c               sub esp, 0x3c
// 00624c07  56                   push esi
// 00624c08  6a00                 push 0
// 00624c0a  6880000000           push 0x80
// 00624c0f  6a03                 push 3
// 00624c11  6a00                 push 0
// 00624c13  6a00                 push 0
// 00624c15  6800000080           push 0x80000000
// 00624c1a  50                   push eax
// 00624c1b  ff15f4d17700         call dword ptr [0x77d1f4]
// 00624c21  8bf0                 mov esi, eax
// 00624c23  83feff               cmp esi, -1
// 00624c26  7507                 jne 0x624c2f
// 00624c28  33c0                 xor eax, eax
// 00624c2a  5e                   pop esi
// 00624c2b  83c43c               add esp, 0x3c
// 00624c2e  c3                   ret 
// 00624c2f  57                   push edi
// 00624c30  8b3ddcd27700         mov edi, dword ptr [0x77d2dc]
// 00624c36  6a00                 push 0
// 00624c38  8d4c240c             lea ecx, [esp + 0xc]
// 00624c3c  51                   push ecx
// 00624c3d  6a0e                 push 0xe
// 00624c3f  8d542418             lea edx, [esp + 0x18]
// 00624c43  52                   push edx
// 00624c44  56                   push esi
// 00624c45  ffd7                 call edi
// 00624c47  85c0                 test eax, eax
// 00624c49  743f                 je 0x624c8a
// 00624c4b  837c24080e           cmp dword ptr [esp + 8], 0xe
// 00624c50  7538                 jne 0x624c8a
// 00624c52  6a00                 push 0
// 00624c54  8d44240c             lea eax, [esp + 0xc]
// 00624c58  50                   push eax
// 00624c59  6a28                 push 0x28
// 00624c5b  8d4c2428             lea ecx, [esp + 0x28]
// 00624c5f  51                   push ecx
// 00624c60  56                   push esi
// 00624c61  ffd7                 call edi
// 00624c63  85c0                 test eax, eax
// 00624c65  7423                 je 0x624c8a
// 00624c67  837c240828           cmp dword ptr [esp + 8], 0x28
// 00624c6c  751c                 jne 0x624c8a
// 00624c6e  33d2                 xor edx, edx
// 00624c70  66837c242a20         cmp word ptr [esp + 0x2a], 0x20
// 00624c76  56                   push esi
// 00624c77  0f94c2               sete dl
// 00624c7a  8bfa                 mov edi, edx
// 00624c7c  ff15fcd17700         call dword ptr [0x77d1fc]
// 00624c82  8bc7                 mov eax, edi
// 00624c84  5f                   pop edi
// 00624c85  5e                   pop esi
// 00624c86  83c43c               add esp, 0x3c
// 00624c89  c3                   ret 
// 00624c8a  56                   push esi
// 00624c8b  ff15fcd17700         call dword ptr [0x77d1fc]
// 00624c91  5f                   pop edi
// 00624c92  33c0                 xor eax, eax
// 00624c94  5e                   pop esi
// 00624c95  83c43c               add esp, 0x3c
// 00624c98  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsAlphaBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
