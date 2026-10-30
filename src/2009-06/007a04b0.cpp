// roc 2009-06 007a04b0  unit: CXTPControlGallery  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a04b0
//
// 007a04b0  8b442404             mov eax, dword ptr [esp + 4]
// 007a04b4  83f8ff               cmp eax, -1
// 007a04b7  7431                 je 0x7a04ea
// 007a04b9  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 007a04bf  7f29                 jg 0x7a04ea
// 007a04c1  85c0                 test eax, eax
// 007a04c3  7c20                 jl 0x7a04e5
// 007a04c5  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 007a04cb  7d18                 jge 0x7a04e5
// 007a04cd  8b9150020000         mov edx, dword ptr [ecx + 0x250]
// 007a04d3  8d0440               lea eax, [eax + eax*2]
// 007a04d6  8b44c204             mov eax, dword ptr [edx + eax*8 + 4]
// 007a04da  50                   push eax
// 007a04db  e8b0f7ffff           call 0x79fc90
// 007a04e0  33c0                 xor eax, eax
// 007a04e2  c20400               ret 4
// 007a04e5  e8fa87f7ff           call 0x718ce4
// 007a04ea  83c8ff               or eax, 0xffffffff
// 007a04ed  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetTopIndex@CXTPControlGallery@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
