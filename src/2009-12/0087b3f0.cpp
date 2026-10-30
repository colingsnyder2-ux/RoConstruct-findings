// roc 2009-12 0087b3f0  unit: CXTPControlGallery  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b3f0
//
// 0087b3f0  8b442404             mov eax, dword ptr [esp + 4]
// 0087b3f4  83f8ff               cmp eax, -1
// 0087b3f7  7431                 je 0x87b42a
// 0087b3f9  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 0087b3ff  7f29                 jg 0x87b42a
// 0087b401  85c0                 test eax, eax
// 0087b403  7c20                 jl 0x87b425
// 0087b405  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 0087b40b  7d18                 jge 0x87b425
// 0087b40d  8b9150020000         mov edx, dword ptr [ecx + 0x250]
// 0087b413  8d0440               lea eax, [eax + eax*2]
// 0087b416  8b44c204             mov eax, dword ptr [edx + eax*8 + 4]
// 0087b41a  50                   push eax
// 0087b41b  e8b0f7ffff           call 0x87abd0
// 0087b420  33c0                 xor eax, eax
// 0087b422  c20400               ret 4
// 0087b425  e8e286f7ff           call 0x7f3b0c
// 0087b42a  83c8ff               or eax, 0xffffffff
// 0087b42d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetTopIndex@CXTPControlGallery@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
