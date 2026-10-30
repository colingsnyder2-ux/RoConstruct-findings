// roc 2009-06 0071ac10  unit: ActiveDocView  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071ac10
//
// 0071ac10  8b442404             mov eax, dword ptr [esp + 4]
// 0071ac14  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 0071ac1a  8910                 mov dword ptr [eax], edx
// 0071ac1c  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0071ac22  895004               mov dword ptr [eax + 4], edx
// 0071ac25  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 0071ac2b  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0071ac31  895008               mov dword ptr [eax + 8], edx
// 0071ac34  89480c               mov dword ptr [eax + 0xc], ecx
// 0071ac37  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
