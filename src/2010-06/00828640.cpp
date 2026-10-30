// roc 2010-06 00828640  unit: CXTPControlGallery  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00828640
//
// 00828640  8b442404             mov eax, dword ptr [esp + 4]
// 00828644  83f8ff               cmp eax, -1
// 00828647  7431                 je 0x82867a
// 00828649  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 0082864f  7f29                 jg 0x82867a
// 00828651  85c0                 test eax, eax
// 00828653  7c20                 jl 0x828675
// 00828655  3b8154020000         cmp eax, dword ptr [ecx + 0x254]
// 0082865b  7d18                 jge 0x828675
// 0082865d  8b9150020000         mov edx, dword ptr [ecx + 0x250]
// 00828663  8d0440               lea eax, [eax + eax*2]
// 00828666  8b44c204             mov eax, dword ptr [edx + eax*8 + 4]
// 0082866a  50                   push eax
// 0082866b  e8b0f7ffff           call 0x827e20
// 00828670  33c0                 xor eax, eax
// 00828672  c20400               ret 4
// 00828675  e8d2f5f7ff           call 0x7a7c4c
// 0082867a  83c8ff               or eax, 0xffffffff
// 0082867d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetTopIndex@CXTPControlGallery@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
