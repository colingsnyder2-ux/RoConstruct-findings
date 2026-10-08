// from server: 100% by auto
// roc 2012-06 009f9240  unit: PAUHWND__::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9240
//
// 009f9240  837c240400           cmp dword ptr [esp + 4], 0
// 009f9245  56                   push esi
// 009f9246  8bf1                 mov esi, ecx
// 009f9248  7423                 je 0x9f926d
// 009f924a  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 009f924e  7532                 jne 0x9f9282
// 009f9250  ff15a021b200         call dword ptr [0xb221a0]
// 009f9256  50                   push eax
// 009f9257  6a00                 push 0
// 009f9259  68d0909f00           push 0x9f90d0
// 009f925e  6a07                 push 7
// 009f9260  ff15f43cb200         call dword ptr [0xb23cf4]
// 009f9266  89461c               mov dword ptr [esi + 0x1c], eax
// 009f9269  5e                   pop esi
// 009f926a  c20400               ret 4
// 009f926d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 009f9270  85c0                 test eax, eax
// 009f9272  740e                 je 0x9f9282
// 009f9274  50                   push eax
// 009f9275  ff15f03cb200         call dword ptr [0xb23cf0]
// 009f927b  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 009f9282  5e                   pop esi
// 009f9283  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPMouseManager.cpp (function ?SetupHook@CXTPMouseManager@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMouseManager.cpp
