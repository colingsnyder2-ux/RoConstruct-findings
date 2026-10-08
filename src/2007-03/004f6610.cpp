// roc 2007-03 004f6610  unit: seg_004f0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6610
//
// 004f6610  51                   push ecx
// 004f6611  56                   push esi
// 004f6612  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f6616  51                   push ecx
// 004f6617  8bce                 mov ecx, esi
// 004f6619  c744240800000000     mov dword ptr [esp + 8], 0
// 004f6621  ff157ce77700         call dword ptr [0x77e77c]
// 004f6627  8bc6                 mov eax, esi
// 004f6629  5e                   pop esi
// 004f662a  59                   pop ecx
// 004f662b  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GImage_png.cpp (function ?getFilename@BinaryOutput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage_png.cpp
