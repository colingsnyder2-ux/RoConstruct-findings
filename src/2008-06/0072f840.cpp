// roc 2008-06 0072f840  unit: CXTPControlGallery  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072f840
//
// 0072f840  56                   push esi
// 0072f841  8bf1                 mov esi, ecx
// 0072f843  e85876f7ff           call 0x6a6ea0
// 0072f848  c7068c248600         mov dword ptr [esi], 0x86248c
// 0072f84e  c746547c248600       mov dword ptr [esi + 0x54], 0x86247c
// 0072f855  c7465c1c248600       mov dword ptr [esi + 0x5c], 0x86241c
// 0072f85c  8bc6                 mov eax, esi
// 0072f85e  5e                   pop esi
// 0072f85f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBoxExt.cpp (function ??0CXTPControlFontComboBoxList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBoxExt.cpp
