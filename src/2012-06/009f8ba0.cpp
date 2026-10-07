// roc 2012-06 009f8ba0  unit: CXTPResourceManager  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8ba0
//
// 009f8ba0  56                   push esi
// 009f8ba1  8bf1                 mov esi, ecx
// 009f8ba3  8b4624               mov eax, dword ptr [esi + 0x24]
// 009f8ba6  57                   push edi
// 009f8ba7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009f8bab  3bc7                 cmp eax, edi
// 009f8bad  7438                 je 0x9f8be7
// 009f8baf  85c0                 test eax, eax
// 009f8bb1  741e                 je 0x9f8bd1
// 009f8bb3  50                   push eax
// 009f8bb4  ff15143bb200         call dword ptr [0xb23b14]
// 009f8bba  85c0                 test eax, eax
// 009f8bbc  7413                 je 0x9f8bd1
// 009f8bbe  8b4624               mov eax, dword ptr [esi + 0x24]
// 009f8bc1  6a00                 push 0
// 009f8bc3  6a00                 push 0
// 009f8bc5  68a3020000           push 0x2a3
// 009f8bca  50                   push eax
// 009f8bcb  ff15043cb200         call dword ptr [0xb23c04]
// 009f8bd1  68b08a9f00           push 0x9f8ab0
// 009f8bd6  6a32                 push 0x32
// 009f8bd8  68bdba0100           push 0x1babd
// 009f8bdd  57                   push edi
// 009f8bde  897e24               mov dword ptr [esi + 0x24], edi
// 009f8be1  ff15e03ab200         call dword ptr [0xb23ae0]
// 009f8be7  5f                   pop edi
// 009f8be8  5e                   pop esi
// 009f8be9  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPMouseManager.cpp (function ?TrackMouseLeave@CXTPMouseManager@@QAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMouseManager.cpp
