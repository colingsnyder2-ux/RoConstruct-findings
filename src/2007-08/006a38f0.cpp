// roc 2007-08 006a38f0  unit: CXTPKeyboardManager  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a38f0
//
// 006a38f0  56                   push esi
// 006a38f1  8bf1                 mov esi, ecx
// 006a38f3  8b4624               mov eax, dword ptr [esi + 0x24]
// 006a38f6  57                   push edi
// 006a38f7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a38fb  3bc7                 cmp eax, edi
// 006a38fd  7438                 je 0x6a3937
// 006a38ff  85c0                 test eax, eax
// 006a3901  741e                 je 0x6a3921
// 006a3903  50                   push eax
// 006a3904  ff15bced7700         call dword ptr [0x77edbc]
// 006a390a  85c0                 test eax, eax
// 006a390c  7413                 je 0x6a3921
// 006a390e  8b4624               mov eax, dword ptr [esi + 0x24]
// 006a3911  6a00                 push 0
// 006a3913  6a00                 push 0
// 006a3915  68a3020000           push 0x2a3
// 006a391a  50                   push eax
// 006a391b  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006a3921  6800386a00           push 0x6a3800
// 006a3926  6a32                 push 0x32
// 006a3928  68bdba0100           push 0x1babd
// 006a392d  57                   push edi
// 006a392e  897e24               mov dword ptr [esi + 0x24], edi
// 006a3931  ff15eced7700         call dword ptr [0x77edec]
// 006a3937  5f                   pop edi
// 006a3938  5e                   pop esi
// 006a3939  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMouseManager.cpp (function ?TrackMouseLeave@CXTPMouseManager@@QAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMouseManager.cpp
