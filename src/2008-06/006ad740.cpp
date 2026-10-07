// roc 2008-06 006ad740  unit: CXTPControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ad740
//
// 006ad740  83ec10               sub esp, 0x10
// 006ad743  56                   push esi
// 006ad744  8bf1                 mov esi, ecx
// 006ad746  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ad74c  85c9                 test ecx, ecx
// 006ad74e  7509                 jne 0x6ad759
// 006ad750  33c0                 xor eax, eax
// 006ad752  5e                   pop esi
// 006ad753  83c410               add esp, 0x10
// 006ad756  c20400               ret 4
// 006ad759  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ad75d  8d442404             lea eax, [esp + 4]
// 006ad761  50                   push eax
// 006ad762  52                   push edx
// 006ad763  e8b8a20000           call 0x6b7a20
// 006ad768  50                   push eax
// 006ad769  8bce                 mov ecx, esi
// 006ad76b  e8e0e2ffff           call 0x6aba50
// 006ad770  5e                   pop esi
// 006ad771  83c410               add esp, 0x10
// 006ad774  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
