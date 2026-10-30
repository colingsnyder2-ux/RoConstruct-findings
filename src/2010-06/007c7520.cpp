// roc 2010-06 007c7520  unit: CXTPCommandBar  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c7520
//
// 007c7520  57                   push edi
// 007c7521  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007c7525  85ff                 test edi, edi
// 007c7527  7507                 jne 0x7c7530
// 007c7529  83c8ff               or eax, 0xffffffff
// 007c752c  5f                   pop edi
// 007c752d  c21000               ret 0x10
// 007c7530  8b442410             mov eax, dword ptr [esp + 0x10]
// 007c7534  53                   push ebx
// 007c7535  56                   push esi
// 007c7536  8b742410             mov esi, dword ptr [esp + 0x10]
// 007c753a  8b562c               mov edx, dword ptr [esi + 0x2c]
// 007c753d  3bc2                 cmp eax, edx
// 007c753f  7d33                 jge 0x7c7574
// 007c7541  85c0                 test eax, eax
// 007c7543  7c0c                 jl 0x7c7551
// 007c7545  3bc2                 cmp eax, edx
// 007c7547  7d08                 jge 0x7c7551
// 007c7549  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007c754c  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 007c754f  eb02                 jmp 0x7c7553
// 007c7551  33c9                 xor ecx, ecx
// 007c7553  8b9984000000         mov ebx, dword ptr [ecx + 0x84]
// 007c7559  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 007c755f  750e                 jne 0x7c756f
// 007c7561  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 007c7567  3b8ffc000000         cmp ecx, dword ptr [edi + 0xfc]
// 007c756d  7408                 je 0x7c7577
// 007c756f  40                   inc eax
// 007c7570  3bc2                 cmp eax, edx
// 007c7572  7ccd                 jl 0x7c7541
// 007c7574  83c8ff               or eax, 0xffffffff
// 007c7577  5e                   pop esi
// 007c7578  5b                   pop ebx
// 007c7579  5f                   pop edi
// 007c757a  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?_FindNearest@CXTPToolBar@@ABEHPAVCXTPControls@@PAVCXTPControl@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
