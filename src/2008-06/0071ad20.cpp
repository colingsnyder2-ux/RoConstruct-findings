// from server: 100% by auto
// roc 2008-06 0071ad20  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071ad20
//
// 0071ad20  53                   push ebx
// 0071ad21  56                   push esi
// 0071ad22  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071ad26  8bd9                 mov ebx, ecx
// 0071ad28  85f6                 test esi, esi
// 0071ad2a  7d05                 jge 0x71ad31
// 0071ad2c  e8135cf8ff           call 0x6a0944
// 0071ad31  3b7308               cmp esi, dword ptr [ebx + 8]
// 0071ad34  7c0b                 jl 0x71ad41
// 0071ad36  6aff                 push -1
// 0071ad38  8d4601               lea eax, [esi + 1]
// 0071ad3b  50                   push eax
// 0071ad3c  e84ffdffff           call 0x71aa90
// 0071ad41  57                   push edi
// 0071ad42  8d3c76               lea edi, [esi + esi*2]
// 0071ad45  8b742414             mov esi, dword ptr [esp + 0x14]
// 0071ad49  c1e704               shl edi, 4
// 0071ad4c  037b04               add edi, dword ptr [ebx + 4]
// 0071ad4f  b90c000000           mov ecx, 0xc
// 0071ad54  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0071ad56  5f                   pop edi
// 0071ad57  5e                   pop esi
// 0071ad58  5b                   pop ebx
// 0071ad59  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?SetAtGrow@?$CArray@UDOCK_INFO@CXTPDockBar@@AAU12@@@QAEXHAAUDOCK_INFO@CXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
