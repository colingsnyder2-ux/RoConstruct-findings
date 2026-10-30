// roc 2007-03 007192d0  unit: seg_00710000  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007192d0
//
// 007192d0  83ec40               sub esp, 0x40
// 007192d3  53                   push ebx
// 007192d4  55                   push ebp
// 007192d5  56                   push esi
// 007192d6  8bf1                 mov esi, ecx
// 007192d8  57                   push edi
// 007192d9  56                   push esi
// 007192da  8d4c2434             lea ecx, [esp + 0x34]
// 007192de  e87d25f5ff           call 0x66b860
// 007192e3  8b4620               mov eax, dword ptr [esi + 0x20]
// 007192e6  8b2d50ee7700         mov ebp, dword ptr [0x77ee50]
// 007192ec  6a00                 push 0
// 007192ee  6a00                 push 0
// 007192f0  680b130000           push 0x130b
// 007192f5  50                   push eax
// 007192f6  ffd5                 call ebp
// 007192f8  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 007192fc  8b5620               mov edx, dword ptr [esi + 0x20]
// 007192ff  8d4c2410             lea ecx, [esp + 0x10]
// 00719303  51                   push ecx
// 00719304  57                   push edi
// 00719305  680a130000           push 0x130a
// 0071930a  52                   push edx
// 0071930b  8bd8                 mov ebx, eax
// 0071930d  ffd5                 call ebp
// 0071930f  8d442430             lea eax, [esp + 0x30]
// 00719313  50                   push eax
// 00719314  8d4c2414             lea ecx, [esp + 0x14]
// 00719318  51                   push ecx
// 00719319  8d542448             lea edx, [esp + 0x48]
// 0071931d  52                   push edx
// 0071931e  ff153cef7700         call dword ptr [0x77ef3c]
// 00719324  85c0                 test eax, eax
// 00719326  0f84f0000000         je 0x71941c
// 0071932c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00719330  8b542418             mov edx, dword ptr [esp + 0x18]
// 00719334  8b442410             mov eax, dword ptr [esp + 0x10]
// 00719338  894c2424             mov dword ptr [esp + 0x24], ecx
// 0071933c  33c9                 xor ecx, ecx
// 0071933e  3bfb                 cmp edi, ebx
// 00719340  6a00                 push 0
// 00719342  0f94c1               sete cl
// 00719345  6a00                 push 0
// 00719347  89542430             mov dword ptr [esp + 0x30], edx
// 0071934b  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071934e  89442428             mov dword ptr [esp + 0x28], eax
// 00719352  8b442424             mov eax, dword ptr [esp + 0x24]
// 00719356  6804130000           push 0x1304
// 0071935b  52                   push edx
// 0071935c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00719360  8bd9                 mov ebx, ecx
// 00719362  ffd5                 call ebp
// 00719364  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00719368  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071936c  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00719370  53                   push ebx
// 00719371  50                   push eax
// 00719372  57                   push edi
// 00719373  83ec10               sub esp, 0x10
// 00719376  8bc4                 mov eax, esp
// 00719378  8908                 mov dword ptr [eax], ecx
// 0071937a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0071937e  895004               mov dword ptr [eax + 4], edx
// 00719381  8b542438             mov edx, dword ptr [esp + 0x38]
// 00719385  894808               mov dword ptr [eax + 8], ecx
// 00719388  55                   push ebp
// 00719389  8bce                 mov ecx, esi
// 0071938b  89500c               mov dword ptr [eax + 0xc], edx
// 0071938e  e89dfaffff           call 0x718e30
// 00719393  57                   push edi
// 00719394  8d442414             lea eax, [esp + 0x14]
// 00719398  50                   push eax
// 00719399  55                   push ebp
// 0071939a  8bce                 mov ecx, esi
// 0071939c  e86ffbffff           call 0x718f10
// 007193a1  53                   push ebx
// 007193a2  57                   push edi
// 007193a3  57                   push edi
// 007193a4  8d4c241c             lea ecx, [esp + 0x1c]
// 007193a8  51                   push ecx
// 007193a9  55                   push ebp
// 007193aa  8bce                 mov ecx, esi
// 007193ac  e8effcffff           call 0x7190a0
// 007193b1  85db                 test ebx, ebx
// 007193b3  7467                 je 0x71941c
// 007193b5  8b7e20               mov edi, dword ptr [esi + 0x20]
// 007193b8  ff154cee7700         call dword ptr [0x77ee4c]
// 007193be  3bc7                 cmp eax, edi
// 007193c0  755a                 jne 0x71941c
// 007193c2  6a00                 push 0
// 007193c4  6a00                 push 0
// 007193c6  6829010000           push 0x129
// 007193cb  57                   push edi
// 007193cc  ff1550ee7700         call dword ptr [0x77ee50]
// 007193d2  a801                 test al, 1
// 007193d4  7546                 jne 0x71941c
// 007193d6  8bce                 mov ecx, esi
// 007193d8  e8e3abfdff           call 0x6f3fc0
// 007193dd  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 007193e3  99                   cdq 
// 007193e4  2bc2                 sub eax, edx
// 007193e6  8bf8                 mov edi, eax
// 007193e8  8bce                 mov ecx, esi
// 007193ea  d1ff                 sar edi, 1
// 007193ec  e8cfabfdff           call 0x6f3fc0
// 007193f1  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 007193f7  99                   cdq 
// 007193f8  2bc2                 sub eax, edx
// 007193fa  d1f8                 sar eax, 1
// 007193fc  f7df                 neg edi
// 007193fe  57                   push edi
// 007193ff  f7d8                 neg eax
// 00719401  50                   push eax
// 00719402  8d542428             lea edx, [esp + 0x28]
// 00719406  52                   push edx
// 00719407  ff159ced7700         call dword ptr [0x77ed9c]
// 0071940d  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00719410  8d442420             lea eax, [esp + 0x20]
// 00719414  50                   push eax
// 00719415  51                   push ecx
// 00719416  ff1534ef7700         call dword ptr [0x77ef34]
// 0071941c  5f                   pop edi
// 0071941d  5e                   pop esi
// 0071941e  5d                   pop ebp
// 0071941f  5b                   pop ebx
// 00719420  83c440               add esp, 0x40
// 00719423  c20800               ret 8
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectTab.cpp (function ?DrawTab@CXTPSkinObjectTab@@IAEXPAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectTab.cpp
