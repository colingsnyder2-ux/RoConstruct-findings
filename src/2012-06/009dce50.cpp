// from server: 100% by auto
// roc 2012-06 009dce50  unit: PAUHWND__::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dce50
//
// 009dce50  56                   push esi
// 009dce51  8b742408             mov esi, dword ptr [esp + 8]
// 009dce55  57                   push edi
// 009dce56  8bf9                 mov edi, ecx
// 009dce58  85f6                 test esi, esi
// 009dce5a  7d05                 jge 0x9dce61
// 009dce5c  e85f55faff           call 0x9823c0
// 009dce61  3b7708               cmp esi, dword ptr [edi + 8]
// 009dce64  7c0b                 jl 0x9dce71
// 009dce66  6aff                 push -1
// 009dce68  8d4601               lea eax, [esi + 1]
// 009dce6b  50                   push eax
// 009dce6c  e88ffeffff           call 0x9dcd00
// 009dce71  8b442410             mov eax, dword ptr [esp + 0x10]
// 009dce75  8b08                 mov ecx, dword ptr [eax]
// 009dce77  c1e604               shl esi, 4
// 009dce7a  037704               add esi, dword ptr [edi + 4]
// 009dce7d  5f                   pop edi
// 009dce7e  890e                 mov dword ptr [esi], ecx
// 009dce80  8b5004               mov edx, dword ptr [eax + 4]
// 009dce83  895604               mov dword ptr [esi + 4], edx
// 009dce86  8b4808               mov ecx, dword ptr [eax + 8]
// 009dce89  894e08               mov dword ptr [esi + 8], ecx
// 009dce8c  8b500c               mov edx, dword ptr [eax + 0xc]
// 009dce8f  89560c               mov dword ptr [esi + 0xc], edx
// 009dce92  5e                   pop esi
// 009dce93  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetAtGrow@?$CArray@UtagRECT@@AAU1@@@QAEXHAAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
