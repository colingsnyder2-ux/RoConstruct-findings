// roc 2012-06 009fdcb0  unit: CXTPControlGallery  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fdcb0
//
// 009fdcb0  8b442404             mov eax, dword ptr [esp + 4]
// 009fdcb4  83f8ff               cmp eax, -1
// 009fdcb7  7431                 je 0x9fdcea
// 009fdcb9  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 009fdcbf  7f29                 jg 0x9fdcea
// 009fdcc1  85c0                 test eax, eax
// 009fdcc3  7c20                 jl 0x9fdce5
// 009fdcc5  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 009fdccb  7d18                 jge 0x9fdce5
// 009fdccd  8b9150020000         mov edx, dword ptr [ecx + 0x250]
// 009fdcd3  8d0440               lea eax, [eax + eax*2]
// 009fdcd6  8b44c204             mov eax, dword ptr [edx + eax*8 + 4]
// 009fdcda  50                   push eax
// 009fdcdb  e8b0f7ffff           call 0x9fd490
// 009fdce0  33c0                 xor eax, eax
// 009fdce2  c20400               ret 4
// 009fdce5  e8d646f8ff           call 0x9823c0
// 009fdcea  83c8ff               or eax, 0xffffffff
// 009fdced  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetTopIndex@CXTPControlGallery@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
