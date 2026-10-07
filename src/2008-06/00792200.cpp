// roc 2008-06 00792200  unit: CXTCaptionButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792200
//
// 00792200  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 00792206  85c9                 test ecx, ecx
// 00792208  7408                 je 0x792212
// 0079220a  e86193f2ff           call 0x6bb570
// 0079220f  8b00                 mov eax, dword ptr [eax]
// 00792211  c3                   ret 
// 00792212  33c0                 xor eax, eax
// 00792214  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?GetNormalIcon@CXTButton@@QAEPAUHICON__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
