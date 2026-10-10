// roc 2008-06 00744ee0  unit: VCRect::?$CArray  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00744ee0
//
// 00744ee0  8b442404             mov eax, dword ptr [esp + 4]
// 00744ee4  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00744ee7  8b11                 mov edx, dword ptr [ecx]
// 00744ee9  8b442408             mov eax, dword ptr [esp + 8]
// 00744eed  8b523c               mov edx, dword ptr [edx + 0x3c]
// 00744ef0  56                   push esi
// 00744ef1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00744ef5  56                   push esi
// 00744ef6  50                   push eax
// 00744ef7  ffd2                 call edx
// 00744ef9  3bc6                 cmp eax, esi
// 00744efb  5e                   pop esi
// 00744efc  740b                 je 0x744f09
// 00744efe  6a00                 push 0
// 00744f00  6aff                 push -1
// 00744f02  6a0e                 push 0xe
// 00744f04  e88f790700           call 0x7bc898
// 00744f09  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ?png_read_data@@YAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
