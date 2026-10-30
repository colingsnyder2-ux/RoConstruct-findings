// roc 2009-12 007f5bb0  unit: ActiveDocView  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5bb0
//
// 007f5bb0  8b442404             mov eax, dword ptr [esp + 4]
// 007f5bb4  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 007f5bba  8910                 mov dword ptr [eax], edx
// 007f5bbc  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 007f5bc2  895004               mov dword ptr [eax + 4], edx
// 007f5bc5  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 007f5bcb  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 007f5bd1  895008               mov dword ptr [eax + 8], edx
// 007f5bd4  89480c               mov dword ptr [eax + 0xc], ecx
// 007f5bd7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
