// roc 2009-06 0072d020  unit: CXTPCommandBarsOptions  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d020
//
// 0072d020  8b442404             mov eax, dword ptr [esp + 4]
// 0072d024  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 0072d02a  8910                 mov dword ptr [eax], edx
// 0072d02c  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 0072d032  895004               mov dword ptr [eax + 4], edx
// 0072d035  8b91b8000000         mov edx, dword ptr [ecx + 0xb8]
// 0072d03b  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 0072d041  895008               mov dword ptr [eax + 8], edx
// 0072d044  89480c               mov dword ptr [eax + 0xc], ecx
// 0072d047  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRowRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
