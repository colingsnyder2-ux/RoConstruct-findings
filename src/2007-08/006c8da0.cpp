// roc 2007-08 006c8da0  unit: CXTPControlEditCtrl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c8da0
//
// 006c8da0  56                   push esi
// 006c8da1  8b742408             mov esi, dword ptr [esp + 8]
// 006c8da5  85f6                 test esi, esi
// 006c8da7  57                   push edi
// 006c8da8  8bf9                 mov edi, ecx
// 006c8daa  7d05                 jge 0x6c8db1
// 006c8dac  e86f71f6ff           call 0x62ff20
// 006c8db1  3b7708               cmp esi, dword ptr [edi + 8]
// 006c8db4  7c0b                 jl 0x6c8dc1
// 006c8db6  6aff                 push -1
// 006c8db8  8d4601               lea eax, [esi + 1]
// 006c8dbb  50                   push eax
// 006c8dbc  e88ffeffff           call 0x6c8c50
// 006c8dc1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c8dc5  8b08                 mov ecx, dword ptr [eax]
// 006c8dc7  c1e604               shl esi, 4
// 006c8dca  037704               add esi, dword ptr [edi + 4]
// 006c8dcd  5f                   pop edi
// 006c8dce  890e                 mov dword ptr [esi], ecx
// 006c8dd0  8b5004               mov edx, dword ptr [eax + 4]
// 006c8dd3  895604               mov dword ptr [esi + 4], edx
// 006c8dd6  8b4808               mov ecx, dword ptr [eax + 8]
// 006c8dd9  894e08               mov dword ptr [esi + 8], ecx
// 006c8ddc  8b500c               mov edx, dword ptr [eax + 0xc]
// 006c8ddf  89560c               mov dword ptr [esi + 0xc], edx
// 006c8de2  5e                   pop esi
// 006c8de3  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetAtGrow@?$CArray@UtagRECT@@AAU1@@@QAEXHAAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBarAnimation.cpp
