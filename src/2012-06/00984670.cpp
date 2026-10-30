// roc 2012-06 00984670  unit: boost::exception  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984670
//
// 00984670  8b442404             mov eax, dword ptr [esp + 4]
// 00984674  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 0098467a  8910                 mov dword ptr [eax], edx
// 0098467c  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00984682  895004               mov dword ptr [eax + 4], edx
// 00984685  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 0098468b  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 00984691  895008               mov dword ptr [eax + 8], edx
// 00984694  89480c               mov dword ptr [eax + 0xc], ecx
// 00984697  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
