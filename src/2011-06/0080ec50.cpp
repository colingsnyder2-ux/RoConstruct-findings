// roc 2011-06 0080ec50  unit: CXTPControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080ec50
//
// 0080ec50  83ec10               sub esp, 0x10
// 0080ec53  56                   push esi
// 0080ec54  8bf1                 mov esi, ecx
// 0080ec56  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0080ec5c  85c9                 test ecx, ecx
// 0080ec5e  7509                 jne 0x80ec69
// 0080ec60  33c0                 xor eax, eax
// 0080ec62  5e                   pop esi
// 0080ec63  83c410               add esp, 0x10
// 0080ec66  c20400               ret 4
// 0080ec69  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080ec6d  8d442404             lea eax, [esp + 4]
// 0080ec71  50                   push eax
// 0080ec72  52                   push edx
// 0080ec73  e858ea0000           call 0x81d6d0
// 0080ec78  50                   push eax
// 0080ec79  8bce                 mov ecx, esi
// 0080ec7b  e890e2ffff           call 0x80cf10
// 0080ec80  5e                   pop esi
// 0080ec81  83c410               add esp, 0x10
// 0080ec84  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
