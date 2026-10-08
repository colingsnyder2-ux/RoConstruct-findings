// roc 2011-06 0081a720  unit: CXTPControlComboBoxAutoCompleteWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081a720
//
// 0081a720  8b442404             mov eax, dword ptr [esp + 4]
// 0081a724  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 0081a72a  8910                 mov dword ptr [eax], edx
// 0081a72c  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 0081a732  895004               mov dword ptr [eax + 4], edx
// 0081a735  8b91b8000000         mov edx, dword ptr [ecx + 0xb8]
// 0081a73b  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 0081a741  895008               mov dword ptr [eax + 8], edx
// 0081a744  89480c               mov dword ptr [eax + 0xc], ecx
// 0081a747  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRowRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
