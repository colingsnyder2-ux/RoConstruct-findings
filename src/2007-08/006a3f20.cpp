// roc 2007-08 006a3f20  unit: PAUHWND__::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3f20
//
// 006a3f20  837c240400           cmp dword ptr [esp + 4], 0
// 006a3f25  56                   push esi
// 006a3f26  8bf1                 mov esi, ecx
// 006a3f28  7423                 je 0x6a3f4d
// 006a3f2a  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 006a3f2e  7532                 jne 0x6a3f62
// 006a3f30  ff15c4d27700         call dword ptr [0x77d2c4]
// 006a3f36  50                   push eax
// 006a3f37  6a00                 push 0
// 006a3f39  68b03d6a00           push 0x6a3db0
// 006a3f3e  6a07                 push 7
// 006a3f40  ff153cee7700         call dword ptr [0x77ee3c]
// 006a3f46  89461c               mov dword ptr [esi + 0x1c], eax
// 006a3f49  5e                   pop esi
// 006a3f4a  c20400               ret 4
// 006a3f4d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006a3f50  85c0                 test eax, eax
// 006a3f52  740e                 je 0x6a3f62
// 006a3f54  50                   push eax
// 006a3f55  ff1538ee7700         call dword ptr [0x77ee38]
// 006a3f5b  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 006a3f62  5e                   pop esi
// 006a3f63  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMouseManager.cpp (function ?SetupHook@CXTPMouseManager@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMouseManager.cpp
