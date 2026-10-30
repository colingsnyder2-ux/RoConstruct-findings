// from server: 100% by auto
// roc 2008-06 0071cfc0  unit: CXTPKeyboardManager  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071cfc0
//
// 0071cfc0  56                   push esi
// 0071cfc1  8bf1                 mov esi, ecx
// 0071cfc3  8b4624               mov eax, dword ptr [esi + 0x24]
// 0071cfc6  57                   push edi
// 0071cfc7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071cfcb  3bc7                 cmp eax, edi
// 0071cfcd  7438                 je 0x71d007
// 0071cfcf  85c0                 test eax, eax
// 0071cfd1  741e                 je 0x71cff1
// 0071cfd3  50                   push eax
// 0071cfd4  ff15502d8000         call dword ptr [0x802d50]
// 0071cfda  85c0                 test eax, eax
// 0071cfdc  7413                 je 0x71cff1
// 0071cfde  8b4624               mov eax, dword ptr [esi + 0x24]
// 0071cfe1  6a00                 push 0
// 0071cfe3  6a00                 push 0
// 0071cfe5  68a3020000           push 0x2a3
// 0071cfea  50                   push eax
// 0071cfeb  ff15142e8000         call dword ptr [0x802e14]
// 0071cff1  68d0ce7100           push 0x71ced0
// 0071cff6  6a32                 push 0x32
// 0071cff8  68bdba0100           push 0x1babd
// 0071cffd  57                   push edi
// 0071cffe  897e24               mov dword ptr [esi + 0x24], edi
// 0071d001  ff157c2d8000         call dword ptr [0x802d7c]
// 0071d007  5f                   pop edi
// 0071d008  5e                   pop esi
// 0071d009  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?TrackMouseLeave@CXTPMouseManager@@QAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
