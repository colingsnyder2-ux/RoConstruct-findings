// roc 2007-03 00694ef0  unit: seg_00690000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00694ef0
//
// 00694ef0  53                   push ebx
// 00694ef1  56                   push esi
// 00694ef2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00694ef6  85f6                 test esi, esi
// 00694ef8  8bd9                 mov ebx, ecx
// 00694efa  7d05                 jge 0x694f01
// 00694efc  e8ad94f8ff           call 0x61e3ae
// 00694f01  3b7308               cmp esi, dword ptr [ebx + 8]
// 00694f04  7c0b                 jl 0x694f11
// 00694f06  6aff                 push -1
// 00694f08  8d4601               lea eax, [esi + 1]
// 00694f0b  50                   push eax
// 00694f0c  e84ffdffff           call 0x694c60
// 00694f11  57                   push edi
// 00694f12  8d3c76               lea edi, [esi + esi*2]
// 00694f15  8b742414             mov esi, dword ptr [esp + 0x14]
// 00694f19  c1e704               shl edi, 4
// 00694f1c  037b04               add edi, dword ptr [ebx + 4]
// 00694f1f  b90c000000           mov ecx, 0xc
// 00694f24  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00694f26  5f                   pop edi
// 00694f27  5e                   pop esi
// 00694f28  5b                   pop ebx
// 00694f29  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ?SetAtGrow@?$CArray@UDOCK_INFO@CXTPDockBar@@AAU12@@@QAEXHAAUDOCK_INFO@CXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
