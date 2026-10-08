// roc 2007-03 004f6510  unit: seg_004f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6510
//
// 004f6510  8b5134               mov edx, dword ptr [ecx + 0x34]
// 004f6513  8b442404             mov eax, dword ptr [esp + 4]
// 004f6517  2bc2                 sub eax, edx
// 004f6519  894144               mov dword ptr [ecx + 0x44], eax
// 004f651c  7805                 js 0x4f6523
// 004f651e  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 004f6521  7e0a                 jle 0x4f652d
// 004f6523  6a00                 push 0
// 004f6525  03c2                 add eax, edx
// 004f6527  50                   push eax
// 004f6528  e843ae0000           call 0x501370
// 004f652d  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?setPosition@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
