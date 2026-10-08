// roc 2007-03 00501440  unit: seg_00500000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501440
//
// 00501440  807c240400           cmp byte ptr [esp + 4], 0
// 00501445  7424                 je 0x50146b
// 00501447  0fb64803             movzx ecx, byte ptr [eax + 3]
// 0050144b  0fb65002             movzx edx, byte ptr [eax + 2]
// 0050144f  884c2404             mov byte ptr [esp + 4], cl
// 00501453  0fb64801             movzx ecx, byte ptr [eax + 1]
// 00501457  88542405             mov byte ptr [esp + 5], dl
// 0050145b  0fb610               movzx edx, byte ptr [eax]
// 0050145e  884c2406             mov byte ptr [esp + 6], cl
// 00501462  88542407             mov byte ptr [esp + 7], dl
// 00501466  8b442404             mov eax, dword ptr [esp + 4]
// 0050146a  c3                   ret 
// 0050146b  8b00                 mov eax, dword ptr [eax]
// 0050146d  c3                   ret 
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readUInt32@G3D@@YAIPBE_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
