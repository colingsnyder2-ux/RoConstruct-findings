// roc 2008-06 0076ed40  unit: CXTPImageEditorDlg::CDlgToolBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076ed40
//
// 0076ed40  56                   push esi
// 0076ed41  8bf1                 mov esi, ecx
// 0076ed43  e84821f3ff           call 0x6a0e90
// 0076ed48  33c0                 xor eax, eax
// 0076ed4a  894654               mov dword ptr [esi + 0x54], eax
// 0076ed4d  894658               mov dword ptr [esi + 0x58], eax
// 0076ed50  c70624778600         mov dword ptr [esi], 0x867724
// 0076ed56  8bc6                 mov eax, esi
// 0076ed58  5e                   pop esi
// 0076ed59  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ??0CXTPImageEditorPicker@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
