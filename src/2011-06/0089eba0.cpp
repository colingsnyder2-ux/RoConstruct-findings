// roc 2011-06 0089eba0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089eba0
//
// 0089eba0  83ec14               sub esp, 0x14
// 0089eba3  57                   push edi
// 0089eba4  33ff                 xor edi, edi
// 0089eba6  397924               cmp dword ptr [ecx + 0x24], edi
// 0089eba9  894c2404             mov dword ptr [esp + 4], ecx
// 0089ebad  0f8e8e000000         jle 0x89ec41
// 0089ebb3  55                   push ebp
// 0089ebb4  53                   push ebx
// 0089ebb5  8d691c               lea ebp, [ecx + 0x1c]
// 0089ebb8  56                   push esi
// 0089ebb9  8da42400000000       lea esp, [esp]
// 0089ebc0  85ff                 test edi, edi
// 0089ebc2  0f8c80000000         jl 0x89ec48
// 0089ebc8  3b7d08               cmp edi, dword ptr [ebp + 8]
// 0089ebcb  7d7b                 jge 0x89ec48
// 0089ebcd  8b4504               mov eax, dword ptr [ebp + 4]
// 0089ebd0  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0089ebd3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089ebd7  51                   push ecx
// 0089ebd8  8d5e10               lea ebx, [esi + 0x10]
// 0089ebdb  53                   push ebx
// 0089ebdc  8d54241c             lea edx, [esp + 0x1c]
// 0089ebe0  52                   push edx
// 0089ebe1  ff15fc1ba400         call dword ptr [0xa41bfc]
// 0089ebe7  85c0                 test eax, eax
// 0089ebe9  7449                 je 0x89ec34
// 0089ebeb  53                   push ebx
// 0089ebec  8d442418             lea eax, [esp + 0x18]
// 0089ebf0  50                   push eax
// 0089ebf1  ff15001ca400         call dword ptr [0xa41c00]
// 0089ebf7  85c0                 test eax, eax
// 0089ebf9  7421                 je 0x89ec1c
// 0089ebfb  6a01                 push 1
// 0089ebfd  57                   push edi
// 0089ebfe  8bcd                 mov ecx, ebp
// 0089ec00  e87bb6f8ff           call 0x82a280
// 0089ec05  85f6                 test esi, esi
// 0089ec07  7410                 je 0x89ec19
// 0089ec09  8bce                 mov ecx, esi
// 0089ec0b  e8f0fdffff           call 0x89ea00
// 0089ec10  56                   push esi
// 0089ec11  e842b4f6ff           call 0x80a058
// 0089ec16  83c404               add esp, 4
// 0089ec19  4f                   dec edi
// 0089ec1a  eb18                 jmp 0x89ec34
// 0089ec1c  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0089ec21  7411                 je 0x89ec34
// 0089ec23  8b542428             mov edx, dword ptr [esp + 0x28]
// 0089ec27  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0089ec2a  8d4e24               lea ecx, [esi + 0x24]
// 0089ec2d  52                   push edx
// 0089ec2e  50                   push eax
// 0089ec2f  e84cfaffff           call 0x89e680
// 0089ec34  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089ec38  47                   inc edi
// 0089ec39  3b7924               cmp edi, dword ptr [ecx + 0x24]
// 0089ec3c  7c82                 jl 0x89ebc0
// 0089ec3e  5e                   pop esi
// 0089ec3f  5b                   pop ebx
// 0089ec40  5d                   pop ebp
// 0089ec41  5f                   pop edi
// 0089ec42  83c414               add esp, 0x14
// 0089ec45  c20800               ret 8
// 0089ec48  e8bdb6f6ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveIntersections@CXTPCommandBarAnimation@@IAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp