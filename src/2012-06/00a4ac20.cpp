// roc 2012-06 00a4ac20  unit: CXTPControlCustom  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ac20
//
// 00a4ac20  56                   push esi
// 00a4ac21  8bf1                 mov esi, ecx
// 00a4ac23  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a4ac27  3b8e9c000000         cmp ecx, dword ptr [esi + 0x9c]
// 00a4ac2d  7421                 je 0xa4ac50
// 00a4ac2f  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00a4ac35  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 00a4ac3b  85c0                 test eax, eax
// 00a4ac3d  7408                 je 0xa4ac47
// 00a4ac3f  51                   push ecx
// 00a4ac40  50                   push eax
// 00a4ac41  ff15f03bb200         call dword ptr [0xb23bf0]
// 00a4ac47  6a01                 push 1
// 00a4ac49  8bce                 mov ecx, esi
// 00a4ac4b  e8e0a3f3ff           call 0x985030
// 00a4ac50  5e                   pop esi
// 00a4ac51  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetEnabled@CXTPControlCustom@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
