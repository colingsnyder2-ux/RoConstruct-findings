// roc 2012-06 00a16f80  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16f80
//
// 00a16f80  83ec14               sub esp, 0x14
// 00a16f83  57                   push edi
// 00a16f84  33ff                 xor edi, edi
// 00a16f86  397924               cmp dword ptr [ecx + 0x24], edi
// 00a16f89  894c2404             mov dword ptr [esp + 4], ecx
// 00a16f8d  0f8e8e000000         jle 0xa17021
// 00a16f93  55                   push ebp
// 00a16f94  53                   push ebx
// 00a16f95  8d691c               lea ebp, [ecx + 0x1c]
// 00a16f98  56                   push esi
// 00a16f99  8da42400000000       lea esp, [esp]
// 00a16fa0  85ff                 test edi, edi
// 00a16fa2  0f8c80000000         jl 0xa17028
// 00a16fa8  3b7d08               cmp edi, dword ptr [ebp + 8]
// 00a16fab  7d7b                 jge 0xa17028
// 00a16fad  8b4504               mov eax, dword ptr [ebp + 4]
// 00a16fb0  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00a16fb3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a16fb7  51                   push ecx
// 00a16fb8  8d5e10               lea ebx, [esi + 0x10]
// 00a16fbb  53                   push ebx
// 00a16fbc  8d54241c             lea edx, [esp + 0x1c]
// 00a16fc0  52                   push edx
// 00a16fc1  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a16fc7  85c0                 test eax, eax
// 00a16fc9  7449                 je 0xa17014
// 00a16fcb  53                   push ebx
// 00a16fcc  8d442418             lea eax, [esp + 0x18]
// 00a16fd0  50                   push eax
// 00a16fd1  ff15e03cb200         call dword ptr [0xb23ce0]
// 00a16fd7  85c0                 test eax, eax
// 00a16fd9  7421                 je 0xa16ffc
// 00a16fdb  6a01                 push 1
// 00a16fdd  57                   push edi
// 00a16fde  8bcd                 mov ecx, ebp
// 00a16fe0  e88bc1f7ff           call 0x993170
// 00a16fe5  85f6                 test esi, esi
// 00a16fe7  7410                 je 0xa16ff9
// 00a16fe9  8bce                 mov ecx, esi
// 00a16feb  e8f0fdffff           call 0xa16de0
// 00a16ff0  56                   push esi
// 00a16ff1  e81eb1f6ff           call 0x982114
// 00a16ff6  83c404               add esp, 4
// 00a16ff9  4f                   dec edi
// 00a16ffa  eb18                 jmp 0xa17014
// 00a16ffc  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00a17001  7411                 je 0xa17014
// 00a17003  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a17007  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a1700a  8d4e24               lea ecx, [esi + 0x24]
// 00a1700d  52                   push edx
// 00a1700e  50                   push eax
// 00a1700f  e83c5efcff           call 0x9dce50
// 00a17014  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a17018  47                   inc edi
// 00a17019  3b7924               cmp edi, dword ptr [ecx + 0x24]
// 00a1701c  7c82                 jl 0xa16fa0
// 00a1701e  5e                   pop esi
// 00a1701f  5b                   pop ebx
// 00a17020  5d                   pop ebp
// 00a17021  5f                   pop edi
// 00a17022  83c414               add esp, 0x14
// 00a17025  c20800               ret 8
// 00a17028  e893b3f6ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveIntersections@CXTPCommandBarAnimation@@IAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp