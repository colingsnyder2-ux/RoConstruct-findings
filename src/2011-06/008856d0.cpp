// roc 2011-06 008856d0  unit: CXTPControlGallery  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008856d0
//
// 008856d0  8b442404             mov eax, dword ptr [esp + 4]
// 008856d4  83f8ff               cmp eax, -1
// 008856d7  7431                 je 0x88570a
// 008856d9  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 008856df  7f29                 jg 0x88570a
// 008856e1  85c0                 test eax, eax
// 008856e3  7c20                 jl 0x885705
// 008856e5  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 008856eb  7d18                 jge 0x885705
// 008856ed  8b9150020000         mov edx, dword ptr [ecx + 0x250]
// 008856f3  8d0440               lea eax, [eax + eax*2]
// 008856f6  8b44c204             mov eax, dword ptr [edx + eax*8 + 4]
// 008856fa  50                   push eax
// 008856fb  e8b0f7ffff           call 0x884eb0
// 00885700  33c0                 xor eax, eax
// 00885702  c20400               ret 4
// 00885705  e8004cf8ff           call 0x80a30a
// 0088570a  83c8ff               or eax, 0xffffffff
// 0088570d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetTopIndex@CXTPControlGallery@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
