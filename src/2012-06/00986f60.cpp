// roc 2012-06 00986f60  unit: CXTPControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00986f60
//
// 00986f60  83ec10               sub esp, 0x10
// 00986f63  56                   push esi
// 00986f64  8bf1                 mov esi, ecx
// 00986f66  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00986f6c  85c9                 test ecx, ecx
// 00986f6e  7509                 jne 0x986f79
// 00986f70  33c0                 xor eax, eax
// 00986f72  5e                   pop esi
// 00986f73  83c410               add esp, 0x10
// 00986f76  c20400               ret 4
// 00986f79  8b542418             mov edx, dword ptr [esp + 0x18]
// 00986f7d  8d442404             lea eax, [esp + 4]
// 00986f81  50                   push eax
// 00986f82  52                   push edx
// 00986f83  e818ea0000           call 0x9959a0
// 00986f88  50                   push eax
// 00986f89  8bce                 mov ecx, esi
// 00986f8b  e820e2ffff           call 0x9851b0
// 00986f90  5e                   pop esi
// 00986f91  83c410               add esp, 0x10
// 00986f94  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
