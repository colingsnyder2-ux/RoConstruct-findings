// roc 2009-06 007b09a0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b09a0
//
// 007b09a0  8b542404             mov edx, dword ptr [esp + 4]
// 007b09a4  56                   push esi
// 007b09a5  8bf1                 mov esi, ecx
// 007b09a7  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 007b09ad  744e                 je 0x7b09fd
// 007b09af  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 007b09b5  89969c000000         mov dword ptr [esi + 0x9c], edx
// 007b09bb  85c0                 test eax, eax
// 007b09bd  7435                 je 0x7b09f4
// 007b09bf  83782000             cmp dword ptr [eax + 0x20], 0
// 007b09c3  742f                 je 0x7b09f4
// 007b09c5  83faff               cmp edx, -1
// 007b09c8  7511                 jne 0x7b09db
// 007b09ca  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007b09d0  85c9                 test ecx, ecx
// 007b09d2  7407                 je 0x7b09db
// 007b09d4  e8c7f4f6ff           call 0x71fea0
// 007b09d9  eb02                 jmp 0x7b09dd
// 007b09db  8bc2                 mov eax, edx
// 007b09dd  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 007b09e3  50                   push eax
// 007b09e4  e8cd86f6ff           call 0x7190b6
// 007b09e9  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 007b09ef  e80cfbffff           call 0x7b0500
// 007b09f4  6a01                 push 1
// 007b09f6  8bce                 mov ecx, esi
// 007b09f8  e8b3f5f6ff           call 0x71ffb0
// 007b09fd  5e                   pop esi
// 007b09fe  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetEnabled@CXTPControlEdit@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
