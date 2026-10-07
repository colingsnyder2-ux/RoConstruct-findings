// roc 2011-06 008805b0  unit: CXTPResourceManager  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008805b0
//
// 008805b0  56                   push esi
// 008805b1  8bf1                 mov esi, ecx
// 008805b3  8b4624               mov eax, dword ptr [esi + 0x24]
// 008805b6  57                   push edi
// 008805b7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008805bb  3bc7                 cmp eax, edi
// 008805bd  7438                 je 0x8805f7
// 008805bf  85c0                 test eax, eax
// 008805c1  741e                 je 0x8805e1
// 008805c3  50                   push eax
// 008805c4  ff15ec1ba400         call dword ptr [0xa41bec]
// 008805ca  85c0                 test eax, eax
// 008805cc  7413                 je 0x8805e1
// 008805ce  8b4624               mov eax, dword ptr [esi + 0x24]
// 008805d1  6a00                 push 0
// 008805d3  6a00                 push 0
// 008805d5  68a3020000           push 0x2a3
// 008805da  50                   push eax
// 008805db  ff15c019a400         call dword ptr [0xa419c0]
// 008805e1  68c0048800           push 0x8804c0
// 008805e6  6a32                 push 0x32
// 008805e8  68bdba0100           push 0x1babd
// 008805ed  57                   push edi
// 008805ee  897e24               mov dword ptr [esi + 0x24], edi
// 008805f1  ff15741ca400         call dword ptr [0xa41c74]
// 008805f7  5f                   pop edi
// 008805f8  5e                   pop esi
// 008805f9  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPMouseManager.cpp (function ?TrackMouseLeave@CXTPMouseManager@@QAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMouseManager.cpp
