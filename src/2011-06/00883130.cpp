// roc 2011-06 00883130  unit: CXTPControlGallery  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00883130
//
// 00883130  56                   push esi
// 00883131  8bf1                 mov esi, ecx
// 00883133  e8f836f9ff           call 0x816830
// 00883138  c70684fdac00         mov dword ptr [esi], 0xacfd84
// 0088313e  c7465474fdac00       mov dword ptr [esi + 0x54], 0xacfd74
// 00883145  c7465c14fdac00       mov dword ptr [esi + 0x5c], 0xacfd14
// 0088314c  8bc6                 mov eax, esi
// 0088314e  5e                   pop esi
// 0088314f  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ??0CXTPControlFontComboBoxList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
