// roc 2011-06 0081f410  unit: CXTPCommandBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f410
//
// 0081f410  8b442404             mov eax, dword ptr [esp + 4]
// 0081f414  83ec3c               sub esp, 0x3c
// 0081f417  56                   push esi
// 0081f418  6a00                 push 0
// 0081f41a  6880000000           push 0x80
// 0081f41f  6a03                 push 3
// 0081f421  6a00                 push 0
// 0081f423  6a00                 push 0
// 0081f425  6800000080           push 0x80000000
// 0081f42a  50                   push eax
// 0081f42b  ff15c801a400         call dword ptr [0xa401c8]
// 0081f431  8bf0                 mov esi, eax
// 0081f433  83feff               cmp esi, -1
// 0081f436  7507                 jne 0x81f43f
// 0081f438  33c0                 xor eax, eax
// 0081f43a  5e                   pop esi
// 0081f43b  83c43c               add esp, 0x3c
// 0081f43e  c3                   ret 
// 0081f43f  57                   push edi
// 0081f440  8b3d5402a400         mov edi, dword ptr [0xa40254]
// 0081f446  6a00                 push 0
// 0081f448  8d4c240c             lea ecx, [esp + 0xc]
// 0081f44c  51                   push ecx
// 0081f44d  6a0e                 push 0xe
// 0081f44f  8d542418             lea edx, [esp + 0x18]
// 0081f453  52                   push edx
// 0081f454  56                   push esi
// 0081f455  ffd7                 call edi
// 0081f457  85c0                 test eax, eax
// 0081f459  743f                 je 0x81f49a
// 0081f45b  837c24080e           cmp dword ptr [esp + 8], 0xe
// 0081f460  7538                 jne 0x81f49a
// 0081f462  6a00                 push 0
// 0081f464  8d44240c             lea eax, [esp + 0xc]
// 0081f468  50                   push eax
// 0081f469  6a28                 push 0x28
// 0081f46b  8d4c2428             lea ecx, [esp + 0x28]
// 0081f46f  51                   push ecx
// 0081f470  56                   push esi
// 0081f471  ffd7                 call edi
// 0081f473  85c0                 test eax, eax
// 0081f475  7423                 je 0x81f49a
// 0081f477  837c240828           cmp dword ptr [esp + 8], 0x28
// 0081f47c  751c                 jne 0x81f49a
// 0081f47e  33d2                 xor edx, edx
// 0081f480  66837c242a20         cmp word ptr [esp + 0x2a], 0x20
// 0081f486  56                   push esi
// 0081f487  0f94c2               sete dl
// 0081f48a  8bfa                 mov edi, edx
// 0081f48c  ff157c03a400         call dword ptr [0xa4037c]
// 0081f492  8bc7                 mov eax, edi
// 0081f494  5f                   pop edi
// 0081f495  5e                   pop esi
// 0081f496  83c43c               add esp, 0x3c
// 0081f499  c3                   ret 
// 0081f49a  56                   push esi
// 0081f49b  ff157c03a400         call dword ptr [0xa4037c]
// 0081f4a1  5f                   pop edi
// 0081f4a2  33c0                 xor eax, eax
// 0081f4a4  5e                   pop esi
// 0081f4a5  83c43c               add esp, 0x3c
// 0081f4a8  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsAlphaBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
