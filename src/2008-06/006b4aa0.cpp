// from server: 100% by auto
// roc 2008-06 006b4aa0  unit: CXTPPaintManager  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4aa0
//
// 006b4aa0  8b442404             mov eax, dword ptr [esp + 4]
// 006b4aa4  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 006b4aaa  8910                 mov dword ptr [eax], edx
// 006b4aac  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 006b4ab2  895004               mov dword ptr [eax + 4], edx
// 006b4ab5  8b91b8000000         mov edx, dword ptr [ecx + 0xb8]
// 006b4abb  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 006b4ac1  895008               mov dword ptr [eax + 8], edx
// 006b4ac4  89480c               mov dword ptr [eax + 0xc], ecx
// 006b4ac7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRowRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
