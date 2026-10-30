// roc 2011-06 008d2920  unit: CXTPControlCustom  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2920
//
// 008d2920  56                   push esi
// 008d2921  8bf1                 mov esi, ecx
// 008d2923  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d2927  3b8e9c000000         cmp ecx, dword ptr [esi + 0x9c]
// 008d292d  7421                 je 0x8d2950
// 008d292f  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 008d2935  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 008d293b  85c0                 test eax, eax
// 008d293d  7408                 je 0x8d2947
// 008d293f  51                   push ecx
// 008d2940  50                   push eax
// 008d2941  ff15b019a400         call dword ptr [0xa419b0]
// 008d2947  6a01                 push 1
// 008d2949  8bce                 mov ecx, esi
// 008d294b  e840a4f3ff           call 0x80cd90
// 008d2950  5e                   pop esi
// 008d2951  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetEnabled@CXTPControlCustom@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
