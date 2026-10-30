// roc 2009-06 007eaf50  unit: CXTPControlCustom  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eaf50
//
// 007eaf50  56                   push esi
// 007eaf51  8bf1                 mov esi, ecx
// 007eaf53  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007eaf57  3b8e9c000000         cmp ecx, dword ptr [esi + 0x9c]
// 007eaf5d  7421                 je 0x7eaf80
// 007eaf5f  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 007eaf65  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 007eaf6b  85c0                 test eax, eax
// 007eaf6d  7408                 je 0x7eaf77
// 007eaf6f  51                   push ecx
// 007eaf70  50                   push eax
// 007eaf71  ff15a0ee8900         call dword ptr [0x89eea0]
// 007eaf77  6a01                 push 1
// 007eaf79  8bce                 mov ecx, esi
// 007eaf7b  e83050f3ff           call 0x71ffb0
// 007eaf80  5e                   pop esi
// 007eaf81  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetEnabled@CXTPControlCustom@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
