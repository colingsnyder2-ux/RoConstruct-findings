// roc 2008-06 00772830  unit: CXTPControlCustom  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772830
//
// 00772830  56                   push esi
// 00772831  8bf1                 mov esi, ecx
// 00772833  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00772837  3b8e9c000000         cmp ecx, dword ptr [esi + 0x9c]
// 0077283d  7421                 je 0x772860
// 0077283f  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00772845  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 0077284b  85c0                 test eax, eax
// 0077284d  7408                 je 0x772857
// 0077284f  51                   push ecx
// 00772850  50                   push eax
// 00772851  ff15302e8000         call dword ptr [0x802e30]
// 00772857  6a01                 push 1
// 00772859  8bce                 mov ecx, esi
// 0077285b  e87090f3ff           call 0x6ab8d0
// 00772860  5e                   pop esi
// 00772861  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetEnabled@CXTPControlCustom@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
