// roc 2012-06 00a1abf0  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1abf0
//
// 00a1abf0  53                   push ebx
// 00a1abf1  56                   push esi
// 00a1abf2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00a1abf6  8bd9                 mov ebx, ecx
// 00a1abf8  85f6                 test esi, esi
// 00a1abfa  7d05                 jge 0xa1ac01
// 00a1abfc  e8bf77f6ff           call 0x9823c0
// 00a1ac01  3b7308               cmp esi, dword ptr [ebx + 8]
// 00a1ac04  7c0b                 jl 0xa1ac11
// 00a1ac06  6aff                 push -1
// 00a1ac08  8d4601               lea eax, [esi + 1]
// 00a1ac0b  50                   push eax
// 00a1ac0c  e84ffdffff           call 0xa1a960
// 00a1ac11  57                   push edi
// 00a1ac12  8d3c76               lea edi, [esi + esi*2]
// 00a1ac15  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a1ac19  c1e704               shl edi, 4
// 00a1ac1c  037b04               add edi, dword ptr [ebx + 4]
// 00a1ac1f  b90c000000           mov ecx, 0xc
// 00a1ac24  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00a1ac26  5f                   pop edi
// 00a1ac27  5e                   pop esi
// 00a1ac28  5b                   pop ebx
// 00a1ac29  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ?SetAtGrow@?$CArray@UDOCK_INFO@CXTPDockBar@@AAU12@@@QAEXHAAUDOCK_INFO@CXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
