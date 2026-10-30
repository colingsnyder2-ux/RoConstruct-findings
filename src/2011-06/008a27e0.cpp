// from server: 100% by auto
// roc 2011-06 008a27e0  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a27e0
//
// 008a27e0  53                   push ebx
// 008a27e1  56                   push esi
// 008a27e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a27e6  8bd9                 mov ebx, ecx
// 008a27e8  85f6                 test esi, esi
// 008a27ea  7d05                 jge 0x8a27f1
// 008a27ec  e8197bf6ff           call 0x80a30a
// 008a27f1  3b7308               cmp esi, dword ptr [ebx + 8]
// 008a27f4  7c0b                 jl 0x8a2801
// 008a27f6  6aff                 push -1
// 008a27f8  8d4601               lea eax, [esi + 1]
// 008a27fb  50                   push eax
// 008a27fc  e84ffdffff           call 0x8a2550
// 008a2801  57                   push edi
// 008a2802  8d3c76               lea edi, [esi + esi*2]
// 008a2805  8b742414             mov esi, dword ptr [esp + 0x14]
// 008a2809  c1e704               shl edi, 4
// 008a280c  037b04               add edi, dword ptr [ebx + 4]
// 008a280f  b90c000000           mov ecx, 0xc
// 008a2814  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008a2816  5f                   pop edi
// 008a2817  5e                   pop esi
// 008a2818  5b                   pop ebx
// 008a2819  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?SetAtGrow@?$CArray@UDOCK_INFO@CXTPDockBar@@AAU12@@@QAEXHAAUDOCK_INFO@CXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
