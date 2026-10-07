// roc 2008-06 00718f30  unit: CXTCaption  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718f30
//
// 00718f30  56                   push esi
// 00718f31  8bf1                 mov esi, ecx
// 00718f33  e8307df8ff           call 0x6a0c68
// 00718f38  83becc00000000       cmp dword ptr [esi + 0xcc], 0
// 00718f3f  7413                 je 0x718f54
// 00718f41  8b4620               mov eax, dword ptr [esi + 0x20]
// 00718f44  6805010000           push 0x105
// 00718f49  6a00                 push 0
// 00718f4b  6a00                 push 0
// 00718f4d  50                   push eax
// 00718f4e  ff15742c8000         call dword ptr [0x802c74]
// 00718f54  5e                   pop esi
// 00718f55  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTCaption.cpp (function ?OnSize@CXTCaption@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaption.cpp
