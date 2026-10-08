// from server: 100% by auto
// roc 2011-06 00880c30  unit: PAUHWND__::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880c30
//
// 00880c30  837c240400           cmp dword ptr [esp + 4], 0
// 00880c35  56                   push esi
// 00880c36  8bf1                 mov esi, ecx
// 00880c38  7423                 je 0x880c5d
// 00880c3a  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00880c3e  7532                 jne 0x880c72
// 00880c40  ff157003a400         call dword ptr [0xa40370]
// 00880c46  50                   push eax
// 00880c47  6a00                 push 0
// 00880c49  68c00a8800           push 0x880ac0
// 00880c4e  6a07                 push 7
// 00880c50  ff15001ba400         call dword ptr [0xa41b00]
// 00880c56  89461c               mov dword ptr [esi + 0x1c], eax
// 00880c59  5e                   pop esi
// 00880c5a  c20400               ret 4
// 00880c5d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00880c60  85c0                 test eax, eax
// 00880c62  740e                 je 0x880c72
// 00880c64  50                   push eax
// 00880c65  ff15041ba400         call dword ptr [0xa41b04]
// 00880c6b  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00880c72  5e                   pop esi
// 00880c73  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPMouseManager.cpp (function ?SetupHook@CXTPMouseManager@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMouseManager.cpp
