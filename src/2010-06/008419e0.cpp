// roc 2010-06 008419e0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008419e0
//
// 008419e0  83ec14               sub esp, 0x14
// 008419e3  57                   push edi
// 008419e4  33ff                 xor edi, edi
// 008419e6  397924               cmp dword ptr [ecx + 0x24], edi
// 008419e9  894c2404             mov dword ptr [esp + 4], ecx
// 008419ed  0f8e8e000000         jle 0x841a81
// 008419f3  55                   push ebp
// 008419f4  53                   push ebx
// 008419f5  8d691c               lea ebp, [ecx + 0x1c]
// 008419f8  56                   push esi
// 008419f9  8da42400000000       lea esp, [esp]
// 00841a00  85ff                 test edi, edi
// 00841a02  0f8c80000000         jl 0x841a88
// 00841a08  3b7d08               cmp edi, dword ptr [ebp + 8]
// 00841a0b  7d7b                 jge 0x841a88
// 00841a0d  8b4504               mov eax, dword ptr [ebp + 4]
// 00841a10  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00841a13  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00841a17  51                   push ecx
// 00841a18  8d5e10               lea ebx, [esi + 0x10]
// 00841a1b  53                   push ebx
// 00841a1c  8d54241c             lea edx, [esp + 0x1c]
// 00841a20  52                   push edx
// 00841a21  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 00841a27  85c0                 test eax, eax
// 00841a29  7449                 je 0x841a74
// 00841a2b  53                   push ebx
// 00841a2c  8d442418             lea eax, [esp + 0x18]
// 00841a30  50                   push eax
// 00841a31  ff1518ba9e00         call dword ptr [0x9eba18]
// 00841a37  85c0                 test eax, eax
// 00841a39  7421                 je 0x841a5c
// 00841a3b  6a01                 push 1
// 00841a3d  57                   push edi
// 00841a3e  8bcd                 mov ecx, ebp
// 00841a40  e8fb6ff7ff           call 0x7b8a40
// 00841a45  85f6                 test esi, esi
// 00841a47  7410                 je 0x841a59
// 00841a49  8bce                 mov ecx, esi
// 00841a4b  e8f0fdffff           call 0x841840
// 00841a50  56                   push esi
// 00841a51  e8445ff6ff           call 0x7a799a
// 00841a56  83c404               add esp, 4
// 00841a59  4f                   dec edi
// 00841a5a  eb18                 jmp 0x841a74
// 00841a5c  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00841a61  7411                 je 0x841a74
// 00841a63  8b542428             mov edx, dword ptr [esp + 0x28]
// 00841a67  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00841a6a  8d4e24               lea ecx, [esi + 0x24]
// 00841a6d  52                   push edx
// 00841a6e  50                   push eax
// 00841a6f  e8fc7afcff           call 0x809570
// 00841a74  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00841a78  47                   inc edi
// 00841a79  3b7924               cmp edi, dword ptr [ecx + 0x24]
// 00841a7c  7c82                 jl 0x841a00
// 00841a7e  5e                   pop esi
// 00841a7f  5b                   pop ebx
// 00841a80  5d                   pop ebp
// 00841a81  5f                   pop edi
// 00841a82  83c414               add esp, 0x14
// 00841a85  c20800               ret 8
// 00841a88  e8bf61f6ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveIntersections@CXTPCommandBarAnimation@@IAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp