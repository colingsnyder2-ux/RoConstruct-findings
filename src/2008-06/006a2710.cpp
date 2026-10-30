// from server: 100% by auto
// roc 2008-06 006a2710  unit: ActiveDocView  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2710
//
// 006a2710  8b442404             mov eax, dword ptr [esp + 4]
// 006a2714  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 006a271a  8910                 mov dword ptr [eax], edx
// 006a271c  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 006a2722  895004               mov dword ptr [eax + 4], edx
// 006a2725  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 006a272b  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 006a2731  895008               mov dword ptr [eax + 8], edx
// 006a2734  89480c               mov dword ptr [eax + 0xc], ecx
// 006a2737  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
