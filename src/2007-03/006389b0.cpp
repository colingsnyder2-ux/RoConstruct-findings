// roc 2007-03 006389b0  unit: seg_00630000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006389b0
//
// 006389b0  8b442404             mov eax, dword ptr [esp + 4]
// 006389b4  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 006389ba  8910                 mov dword ptr [eax], edx
// 006389bc  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 006389c2  895004               mov dword ptr [eax + 4], edx
// 006389c5  8b91b8000000         mov edx, dword ptr [ecx + 0xb8]
// 006389cb  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 006389d1  895008               mov dword ptr [eax + 8], edx
// 006389d4  89480c               mov dword ptr [eax + 0xc], ecx
// 006389d7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRowRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
