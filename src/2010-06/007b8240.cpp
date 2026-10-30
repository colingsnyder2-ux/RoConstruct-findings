// roc 2010-06 007b8240  unit: CXTPControlComboBoxAutoCompleteWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8240
//
// 007b8240  8b442404             mov eax, dword ptr [esp + 4]
// 007b8244  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 007b824a  8910                 mov dword ptr [eax], edx
// 007b824c  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 007b8252  895004               mov dword ptr [eax + 4], edx
// 007b8255  8b91b8000000         mov edx, dword ptr [ecx + 0xb8]
// 007b825b  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 007b8261  895008               mov dword ptr [eax + 8], edx
// 007b8264  89480c               mov dword ptr [eax + 0xc], ecx
// 007b8267  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRowRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
