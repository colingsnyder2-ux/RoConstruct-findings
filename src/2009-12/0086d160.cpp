// roc 2009-12 0086d160  unit: CSelectionCaption  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d160
//
// 0086d160  83ec10               sub esp, 0x10
// 0086d163  56                   push esi
// 0086d164  8bf1                 mov esi, ecx
// 0086d166  e8c56cf8ff           call 0x7f3e30
// 0086d16b  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0086d171  50                   push eax
// 0086d172  ff1584cc9800         call dword ptr [0x98cc84]
// 0086d178  85c0                 test eax, eax
// 0086d17a  7433                 je 0x86d1af
// 0086d17c  8b16                 mov edx, dword ptr [esi]
// 0086d17e  8b927c010000         mov edx, dword ptr [edx + 0x17c]
// 0086d184  57                   push edi
// 0086d185  8d442408             lea eax, [esp + 8]
// 0086d189  50                   push eax
// 0086d18a  8bce                 mov ecx, esi
// 0086d18c  ffd2                 call edx
// 0086d18e  8b4804               mov ecx, dword ptr [eax + 4]
// 0086d191  8b780c               mov edi, dword ptr [eax + 0xc]
// 0086d194  8b10                 mov edx, dword ptr [eax]
// 0086d196  8b4008               mov eax, dword ptr [eax + 8]
// 0086d199  6a01                 push 1
// 0086d19b  2bf9                 sub edi, ecx
// 0086d19d  57                   push edi
// 0086d19e  2bc2                 sub eax, edx
// 0086d1a0  50                   push eax
// 0086d1a1  51                   push ecx
// 0086d1a2  52                   push edx
// 0086d1a3  8d8edc000000         lea ecx, [esi + 0xdc]
// 0086d1a9  e8846af8ff           call 0x7f3c32
// 0086d1ae  5f                   pop edi
// 0086d1af  5e                   pop esi
// 0086d1b0  83c410               add esp, 0x10
// 0086d1b3  c20400               ret 4
// copied from an identical function in another client (function ?OnWindowPosChanged@CXTCaption@@IAEXPAUtagWINDOWPOS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp