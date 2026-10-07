// roc 2008-06 0071d6a0  unit: PAUHWND__::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071d6a0
//
// 0071d6a0  837c240400           cmp dword ptr [esp + 4], 0
// 0071d6a5  56                   push esi
// 0071d6a6  8bf1                 mov esi, ecx
// 0071d6a8  7423                 je 0x71d6cd
// 0071d6aa  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0071d6ae  7532                 jne 0x71d6e2
// 0071d6b0  ff1598218000         call dword ptr [0x802198]
// 0071d6b6  50                   push eax
// 0071d6b7  6a00                 push 0
// 0071d6b9  6830d57100           push 0x71d530
// 0071d6be  6a07                 push 7
// 0071d6c0  ff15d82b8000         call dword ptr [0x802bd8]
// 0071d6c6  89461c               mov dword ptr [esi + 0x1c], eax
// 0071d6c9  5e                   pop esi
// 0071d6ca  c20400               ret 4
// 0071d6cd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0071d6d0  85c0                 test eax, eax
// 0071d6d2  740e                 je 0x71d6e2
// 0071d6d4  50                   push eax
// 0071d6d5  ff15582c8000         call dword ptr [0x802c58]
// 0071d6db  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0071d6e2  5e                   pop esi
// 0071d6e3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?SetupHook@CXTPMouseManager@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
