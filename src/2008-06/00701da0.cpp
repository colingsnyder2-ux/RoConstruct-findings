// roc 2008-06 00701da0  unit: PAUHWND__::?$CArray  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701da0
//
// 00701da0  56                   push esi
// 00701da1  57                   push edi
// 00701da2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00701da6  8bf1                 mov esi, ecx
// 00701da8  85ff                 test edi, edi
// 00701daa  7d05                 jge 0x701db1
// 00701dac  e893ebf9ff           call 0x6a0944
// 00701db1  3b7e08               cmp edi, dword ptr [esi + 8]
// 00701db4  7c0b                 jl 0x701dc1
// 00701db6  6aff                 push -1
// 00701db8  8d4701               lea eax, [edi + 1]
// 00701dbb  50                   push eax
// 00701dbc  e80fc40000           call 0x70e1d0
// 00701dc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00701dc5  8b4e04               mov ecx, dword ptr [esi + 4]
// 00701dc8  8b02                 mov eax, dword ptr [edx]
// 00701dca  8904b9               mov dword ptr [ecx + edi*4], eax
// 00701dcd  5f                   pop edi
// 00701dce  5e                   pop esi
// 00701dcf  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?SetAtGrow@?$CArray@PAUHWND__@@AAPAU1@@@QAEXHAAPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
