// roc 2007-03 00718c90  unit: seg_00710000  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00718c90
//
// 00718c90  83ec10               sub esp, 0x10
// 00718c93  55                   push ebp
// 00718c94  56                   push esi
// 00718c95  57                   push edi
// 00718c96  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00718c9a  8bf1                 mov esi, ecx
// 00718c9c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00718c9f  57                   push edi
// 00718ca0  50                   push eax
// 00718ca1  ff153ced7700         call dword ptr [0x77ed3c]
// 00718ca7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00718caa  8b2d50ee7700         mov ebp, dword ptr [0x77ee50]
// 00718cb0  6a00                 push 0
// 00718cb2  6a00                 push 0
// 00718cb4  680b130000           push 0x130b
// 00718cb9  51                   push ecx
// 00718cba  ffd5                 call ebp
// 00718cbc  8d54240c             lea edx, [esp + 0xc]
// 00718cc0  52                   push edx
// 00718cc1  50                   push eax
// 00718cc2  8b4620               mov eax, dword ptr [esi + 0x20]
// 00718cc5  680a130000           push 0x130a
// 00718cca  50                   push eax
// 00718ccb  ffd5                 call ebp
// 00718ccd  8bce                 mov ecx, esi
// 00718ccf  e8f01e0200           call 0x73abc4
// 00718cd4  2582000000           and eax, 0x82
// 00718cd9  3d82000000           cmp eax, 0x82
// 00718cde  7511                 jne 0x718cf1
// 00718ce0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00718ce4  890f                 mov dword ptr [edi], ecx
// 00718ce6  8bc7                 mov eax, edi
// 00718ce8  5f                   pop edi
// 00718ce9  5e                   pop esi
// 00718cea  5d                   pop ebp
// 00718ceb  83c410               add esp, 0x10
// 00718cee  c20400               ret 4
// 00718cf1  3d80000000           cmp eax, 0x80
// 00718cf6  7512                 jne 0x718d0a
// 00718cf8  8b542414             mov edx, dword ptr [esp + 0x14]
// 00718cfc  895708               mov dword ptr [edi + 8], edx
// 00718cff  8bc7                 mov eax, edi
// 00718d01  5f                   pop edi
// 00718d02  5e                   pop esi
// 00718d03  5d                   pop ebp
// 00718d04  83c410               add esp, 0x10
// 00718d07  c20400               ret 4
// 00718d0a  83f802               cmp eax, 2
// 00718d0d  7512                 jne 0x718d21
// 00718d0f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00718d13  894704               mov dword ptr [edi + 4], eax
// 00718d16  8bc7                 mov eax, edi
// 00718d18  5f                   pop edi
// 00718d19  5e                   pop esi
// 00718d1a  5d                   pop ebp
// 00718d1b  83c410               add esp, 0x10
// 00718d1e  c20400               ret 4
// 00718d21  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00718d24  53                   push ebx
// 00718d25  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00718d29  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 00718d2d  6a00                 push 0
// 00718d2f  6a00                 push 0
// 00718d31  682c130000           push 0x132c
// 00718d36  51                   push ecx
// 00718d37  ffd5                 call ebp
// 00718d39  8bce                 mov ecx, esi
// 00718d3b  8be8                 mov ebp, eax
// 00718d3d  e87eb2fdff           call 0x6f3fc0
// 00718d42  8b5704               mov edx, dword ptr [edi + 4]
// 00718d45  03d3                 add edx, ebx
// 00718d47  0fafd5               imul edx, ebp
// 00718d4a  039040010000         add edx, dword ptr [eax + 0x140]
// 00718d50  5b                   pop ebx
// 00718d51  89570c               mov dword ptr [edi + 0xc], edx
// 00718d54  8bc7                 mov eax, edi
// 00718d56  5f                   pop edi
// 00718d57  5e                   pop esi
// 00718d58  5d                   pop ebp
// 00718d59  83c410               add esp, 0x10
// 00718d5c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectTab.cpp (function ?GetHeaderRect@CXTPSkinObjectTab@@IAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectTab.cpp
