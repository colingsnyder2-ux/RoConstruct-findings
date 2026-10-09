// roc 2007-03 007189b0  unit: seg_00710000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007189b0
//
// 007189b0  83ec10               sub esp, 0x10
// 007189b3  53                   push ebx
// 007189b4  8bd9                 mov ebx, ecx
// 007189b6  8b4358               mov eax, dword ptr [ebx + 0x58]
// 007189b9  f6404001             test byte ptr [eax + 0x40], 1
// 007189bd  56                   push esi
// 007189be  57                   push edi
// 007189bf  0f8489000000         je 0x718a4e
// 007189c5  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007189c8  6a00                 push 0
// 007189ca  6a00                 push 0
// 007189cc  6829020000           push 0x229
// 007189d1  51                   push ecx
// 007189d2  ff1550ee7700         call dword ptr [0x77ee50]
// 007189d8  8bf8                 mov edi, eax
// 007189da  85ff                 test edi, edi
// 007189dc  7470                 je 0x718a4e
// 007189de  6af0                 push -0x10
// 007189e0  57                   push edi
// 007189e1  ff1504ed7700         call dword ptr [0x77ed04]
// 007189e7  a900000001           test eax, 0x1000000
// 007189ec  7460                 je 0x718a4e
// 007189ee  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 007189f1  57                   push edi
// 007189f2  e899bffdff           call 0x6f4990
// 007189f7  8bf0                 mov esi, eax
// 007189f9  85f6                 test esi, esi
// 007189fb  7451                 je 0x718a4e
// 007189fd  8bce                 mov ecx, esi
// 007189ff  e8dcb6fdff           call 0x6f40e0
// 00718a04  85c0                 test eax, eax
// 00718a06  7446                 je 0x718a4e
// 00718a08  8d54240c             lea edx, [esp + 0xc]
// 00718a0c  52                   push edx
// 00718a0d  8bce                 mov ecx, esi
// 00718a0f  e81cebfdff           call 0x6f7530
// 00718a14  8b742414             mov esi, dword ptr [esp + 0x14]
// 00718a18  8b542424             mov edx, dword ptr [esp + 0x24]
// 00718a1c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00718a20  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00718a24  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00718a28  03d6                 add edx, esi
// 00718a2a  8b742428             mov esi, dword ptr [esp + 0x28]
// 00718a2e  6a01                 push 1
// 00718a30  f7d9                 neg ecx
// 00718a32  03f3                 add esi, ebx
// 00718a34  f7d8                 neg eax
// 00718a36  2bf1                 sub esi, ecx
// 00718a38  56                   push esi
// 00718a39  2bd0                 sub edx, eax
// 00718a3b  52                   push edx
// 00718a3c  51                   push ecx
// 00718a3d  50                   push eax
// 00718a3e  57                   push edi
// 00718a3f  ff15dced7700         call dword ptr [0x77eddc]
// 00718a45  5f                   pop edi
// 00718a46  5e                   pop esi
// 00718a47  5b                   pop ebx
// 00718a48  83c410               add esp, 0x10
// 00718a4b  c20c00               ret 0xc
// 00718a4e  8bcb                 mov ecx, ebx
// 00718a50  e87d5cf0ff           call 0x61e6d2
// 00718a55  5f                   pop edi
// 00718a56  5e                   pop esi
// 00718a57  5b                   pop ebx
// 00718a58  83c410               add esp, 0x10
// 00718a5b  c20c00               ret 0xc
// library xtp-11.2.2/Source\SkinFramework\XTPSkinObjectMDI.cpp (function ?OnSize@CXTPSkinObjectMDIClient@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinObjectMDI.cpp
