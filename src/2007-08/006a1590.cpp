// from server: 100% by auto
// roc 2007-08 006a1590  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a1590
//
// 006a1590  53                   push ebx
// 006a1591  56                   push esi
// 006a1592  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a1596  85f6                 test esi, esi
// 006a1598  8bd9                 mov ebx, ecx
// 006a159a  7d05                 jge 0x6a15a1
// 006a159c  e87fe9f8ff           call 0x62ff20
// 006a15a1  3b7308               cmp esi, dword ptr [ebx + 8]
// 006a15a4  7c0b                 jl 0x6a15b1
// 006a15a6  6aff                 push -1
// 006a15a8  8d4601               lea eax, [esi + 1]
// 006a15ab  50                   push eax
// 006a15ac  e84ffdffff           call 0x6a1300
// 006a15b1  57                   push edi
// 006a15b2  8d3c76               lea edi, [esi + esi*2]
// 006a15b5  8b742414             mov esi, dword ptr [esp + 0x14]
// 006a15b9  c1e704               shl edi, 4
// 006a15bc  037b04               add edi, dword ptr [ebx + 4]
// 006a15bf  b90c000000           mov ecx, 0xc
// 006a15c4  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006a15c6  5f                   pop edi
// 006a15c7  5e                   pop esi
// 006a15c8  5b                   pop ebx
// 006a15c9  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ?SetAtGrow@?$CArray@UDOCK_INFO@CXTPDockBar@@AAU12@@@QAEXHAAUDOCK_INFO@CXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
