// roc 2007-03 00484730  unit: seg_00480000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484730
//
// 00484730  8b01                 mov eax, dword ptr [ecx]
// 00484732  85c0                 test eax, eax
// 00484734  7423                 je 0x484759
// 00484736  8b5018               mov edx, dword ptr [eax + 0x18]
// 00484739  3b5110               cmp edx, dword ptr [ecx + 0x10]
// 0048473c  751b                 jne 0x484759
// 0048473e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00484741  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 00484744  7513                 jne 0x484759
// 00484746  b801000000           mov eax, 1
// 0048474b  390578778b00         cmp dword ptr [0x8b7778], eax
// 00484751  7408                 je 0x48475b
// 00484753  83790400             cmp dword ptr [ecx + 4], 0
// 00484757  7502                 jne 0x48475b
// 00484759  33c0                 xor eax, eax
// 0048475b  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\VAR.cpp (function ?valid@VAR@G3D@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/VAR.cpp
