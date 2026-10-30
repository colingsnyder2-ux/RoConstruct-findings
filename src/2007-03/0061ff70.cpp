// roc 2007-03 0061ff70  unit: seg_00610000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061ff70
//
// 0061ff70  8b442404             mov eax, dword ptr [esp + 4]
// 0061ff74  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 0061ff7a  8910                 mov dword ptr [eax], edx
// 0061ff7c  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0061ff82  895004               mov dword ptr [eax + 4], edx
// 0061ff85  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 0061ff8b  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0061ff91  895008               mov dword ptr [eax + 8], edx
// 0061ff94  89480c               mov dword ptr [eax + 0xc], ecx
// 0061ff97  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
