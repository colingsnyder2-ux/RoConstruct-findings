// roc 2011-06 00816e60  unit: CXTPControlComboBoxList  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816e60
//
// 00816e60  56                   push esi
// 00816e61  8bf1                 mov esi, ecx
// 00816e63  e8de3affff           call 0x80a946
// 00816e68  33c0                 xor eax, eax
// 00816e6a  894654               mov dword ptr [esi + 0x54], eax
// 00816e6d  894658               mov dword ptr [esi + 0x58], eax
// 00816e70  89465c               mov dword ptr [esi + 0x5c], eax
// 00816e73  c706cc24ac00         mov dword ptr [esi], 0xac24cc
// 00816e79  8bc6                 mov eax, esi
// 00816e7b  5e                   pop esi
// 00816e7c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ??0CXTPCommandBarEditCtrl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
