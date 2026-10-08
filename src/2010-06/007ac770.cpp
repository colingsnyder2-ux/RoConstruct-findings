// roc 2010-06 007ac770  unit: CXTPControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ac770
//
// 007ac770  83ec10               sub esp, 0x10
// 007ac773  56                   push esi
// 007ac774  8bf1                 mov esi, ecx
// 007ac776  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007ac77c  85c9                 test ecx, ecx
// 007ac77e  7509                 jne 0x7ac789
// 007ac780  33c0                 xor eax, eax
// 007ac782  5e                   pop esi
// 007ac783  83c410               add esp, 0x10
// 007ac786  c20400               ret 4
// 007ac789  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ac78d  8d442404             lea eax, [esp + 4]
// 007ac791  50                   push eax
// 007ac792  52                   push edx
// 007ac793  e8c8ea0000           call 0x7bb260
// 007ac798  50                   push eax
// 007ac799  8bce                 mov ecx, esi
// 007ac79b  e880e1ffff           call 0x7aa920
// 007ac7a0  5e                   pop esi
// 007ac7a1  83c410               add esp, 0x10
// 007ac7a4  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
