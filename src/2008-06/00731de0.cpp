// from server: 100% by auto
// roc 2008-06 00731de0  unit: CXTPControlGallery  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00731de0
//
// 00731de0  8b442404             mov eax, dword ptr [esp + 4]
// 00731de4  83f8ff               cmp eax, -1
// 00731de7  7431                 je 0x731e1a
// 00731de9  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 00731def  7f29                 jg 0x731e1a
// 00731df1  85c0                 test eax, eax
// 00731df3  7c20                 jl 0x731e15
// 00731df5  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 00731dfb  7d18                 jge 0x731e15
// 00731dfd  8b9150020000         mov edx, dword ptr [ecx + 0x250]
// 00731e03  8d0440               lea eax, [eax + eax*2]
// 00731e06  8b44c204             mov eax, dword ptr [edx + eax*8 + 4]
// 00731e0a  50                   push eax
// 00731e0b  e8b0f7ffff           call 0x7315c0
// 00731e10  33c0                 xor eax, eax
// 00731e12  c20400               ret 4
// 00731e15  e82aebf6ff           call 0x6a0944
// 00731e1a  83c8ff               or eax, 0xffffffff
// 00731e1d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetTopIndex@CXTPControlGallery@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
