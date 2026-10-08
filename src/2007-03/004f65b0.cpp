// roc 2007-03 004f65b0  unit: seg_004f0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f65b0
//
// 004f65b0  8b442404             mov eax, dword ptr [esp + 4]
// 004f65b4  014144               add dword ptr [ecx + 0x44], eax
// 004f65b7  8b4144               mov eax, dword ptr [ecx + 0x44]
// 004f65ba  7805                 js 0x4f65c1
// 004f65bc  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 004f65bf  7e0d                 jle 0x4f65ce
// 004f65c1  8b5134               mov edx, dword ptr [ecx + 0x34]
// 004f65c4  6a00                 push 0
// 004f65c6  03d0                 add edx, eax
// 004f65c8  52                   push edx
// 004f65c9  e8a2ad0000           call 0x501370
// 004f65ce  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?skip@BinaryInput@G3D@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
