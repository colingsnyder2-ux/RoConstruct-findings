// roc 2007-03 0071ea10  unit: seg_00710000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071ea10
//
// 0071ea10  83ec2c               sub esp, 0x2c
// 0071ea13  53                   push ebx
// 0071ea14  55                   push ebp
// 0071ea15  56                   push esi
// 0071ea16  57                   push edi
// 0071ea17  8bf9                 mov edi, ecx
// 0071ea19  8b7720               mov esi, dword ptr [edi + 0x20]
// 0071ea1c  56                   push esi
// 0071ea1d  8d4c2420             lea ecx, [esp + 0x20]
// 0071ea21  e87acdf4ff           call 0x66b7a0
// 0071ea26  8bcf                 mov ecx, edi
// 0071ea28  e89355fdff           call 0x6f3fc0
// 0071ea2d  8ba83c010000         mov ebp, dword ptr [eax + 0x13c]
// 0071ea33  8bcf                 mov ecx, edi
// 0071ea35  e88655fdff           call 0x6f3fc0
// 0071ea3a  85f6                 test esi, esi
// 0071ea3c  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 0071ea42  89442410             mov dword ptr [esp + 0x10], eax
// 0071ea46  7443                 je 0x71ea8b
// 0071ea48  8b3d04ed7700         mov edi, dword ptr [0x77ed04]
// 0071ea4e  8b1dc8ec7700         mov ebx, dword ptr [0x77ecc8]
// 0071ea54  6af0                 push -0x10
// 0071ea56  56                   push esi
// 0071ea57  ffd7                 call edi
// 0071ea59  250000c000           and eax, 0xc00000
// 0071ea5e  3d0000c000           cmp eax, 0xc00000
// 0071ea63  7430                 je 0x71ea95
// 0071ea65  6af0                 push -0x10
// 0071ea67  56                   push esi
// 0071ea68  ffd7                 call edi
// 0071ea6a  a900000040           test eax, 0x40000000
// 0071ea6f  741a                 je 0x71ea8b
// 0071ea71  6af0                 push -0x10
// 0071ea73  56                   push esi
// 0071ea74  ffd7                 call edi
// 0071ea76  250000c000           and eax, 0xc00000
// 0071ea7b  3d0000c000           cmp eax, 0xc00000
// 0071ea80  7409                 je 0x71ea8b
// 0071ea82  56                   push esi
// 0071ea83  ffd3                 call ebx
// 0071ea85  8bf0                 mov esi, eax
// 0071ea87  85f6                 test esi, esi
// 0071ea89  75c9                 jne 0x71ea54
// 0071ea8b  5f                   pop edi
// 0071ea8c  5e                   pop esi
// 0071ea8d  5d                   pop ebp
// 0071ea8e  33c0                 xor eax, eax
// 0071ea90  5b                   pop ebx
// 0071ea91  83c42c               add esp, 0x2c
// 0071ea94  c3                   ret 
// 0071ea95  56                   push esi
// 0071ea96  8d4c2430             lea ecx, [esp + 0x30]
// 0071ea9a  e891cdf4ff           call 0x66b830
// 0071ea9f  8b4808               mov ecx, dword ptr [eax + 8]
// 0071eaa2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0071eaa6  8b500c               mov edx, dword ptr [eax + 0xc]
// 0071eaa9  8d442414             lea eax, [esp + 0x14]
// 0071eaad  50                   push eax
// 0071eaae  56                   push esi
// 0071eaaf  89542420             mov dword ptr [esp + 0x20], edx
// 0071eab3  ff1540ed7700         call dword ptr [0x77ed40]
// 0071eab9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071eabd  03cd                 add ecx, ebp
// 0071eabf  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0071eac3  7cc6                 jl 0x71ea8b
// 0071eac5  8b542428             mov edx, dword ptr [esp + 0x28]
// 0071eac9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071eacd  03d0                 add edx, eax
// 0071eacf  3b542418             cmp edx, dword ptr [esp + 0x18]
// 0071ead3  7cb6                 jl 0x71ea8b
// 0071ead5  5f                   pop edi
// 0071ead6  33c0                 xor eax, eax
// 0071ead8  85f6                 test esi, esi
// 0071eada  5e                   pop esi
// 0071eadb  5d                   pop ebp
// 0071eadc  0f95c0               setne al
// 0071eadf  5b                   pop ebx
// 0071eae0  83c42c               add esp, 0x2c
// 0071eae3  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectFrame.cpp (function ?IsFrameScrollBars@CXTPSkinObjectFrame@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectFrame.cpp
