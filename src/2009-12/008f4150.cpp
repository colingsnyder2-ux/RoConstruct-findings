// roc 2009-12 008f4150  unit: CXTCaptionButtonTheme  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4150
//
// 008f4150  56                   push esi
// 008f4151  8bf1                 mov esi, ecx
// 008f4153  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f4157  85c9                 test ecx, ecx
// 008f4159  7442                 je 0x8f419d
// 008f415b  8b01                 mov eax, dword ptr [ecx]
// 008f415d  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008f4163  ffd2                 call edx
// 008f4165  a900100000           test eax, 0x1000
// 008f416a  7431                 je 0x8f419d
// 008f416c  83c674               add esi, 0x74
// 008f416f  8bce                 mov ecx, esi
// 008f4171  e82a7cf7ff           call 0x86bda0
// 008f4176  85c0                 test eax, eax
// 008f4178  750d                 jne 0x8f4187
// 008f417a  6820299f00           push 0x9f2920
// 008f417f  50                   push eax
// 008f4180  8bce                 mov ecx, esi
// 008f4182  e8797bf7ff           call 0x86bd00
// 008f4187  8bce                 mov ecx, esi
// 008f4189  e8227cf7ff           call 0x86bdb0
// 008f418e  85c0                 test eax, eax
// 008f4190  740b                 je 0x8f419d
// 008f4192  8bce                 mov ecx, esi
// 008f4194  e8077cf7ff           call 0x86bda0
// 008f4199  5e                   pop esi
// 008f419a  c20400               ret 4
// 008f419d  33c0                 xor eax, eax
// 008f419f  5e                   pop esi
// 008f41a0  c20400               ret 4
// copied from an identical function in another client (function ?UseWinXPThemes@CXTButtonTheme@@UAEHPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButtonTheme.cpp