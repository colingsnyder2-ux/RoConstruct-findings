// roc 2010-06 007a9cf0  unit: ActiveDocView  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9cf0
//
// 007a9cf0  8b442404             mov eax, dword ptr [esp + 4]
// 007a9cf4  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 007a9cfa  8910                 mov dword ptr [eax], edx
// 007a9cfc  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 007a9d02  895004               mov dword ptr [eax + 4], edx
// 007a9d05  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 007a9d0b  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 007a9d11  895008               mov dword ptr [eax + 8], edx
// 007a9d14  89480c               mov dword ptr [eax + 0xc], ecx
// 007a9d17  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
