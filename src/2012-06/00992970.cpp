// roc 2012-06 00992970  unit: CXTPControlComboBoxAutoCompleteWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00992970
//
// 00992970  8b442404             mov eax, dword ptr [esp + 4]
// 00992974  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 0099297a  8910                 mov dword ptr [eax], edx
// 0099297c  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 00992982  895004               mov dword ptr [eax + 4], edx
// 00992985  8b91b8000000         mov edx, dword ptr [ecx + 0xb8]
// 0099298b  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00992991  895008               mov dword ptr [eax + 8], edx
// 00992994  89480c               mov dword ptr [eax + 0xc], ecx
// 00992997  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRowRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
