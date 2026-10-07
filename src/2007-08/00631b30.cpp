// roc 2007-08 00631b30  unit: _com_error  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631b30
//
// 00631b30  8b442404             mov eax, dword ptr [esp + 4]
// 00631b34  8b91c0000000         mov edx, dword ptr [ecx + 0xc0]
// 00631b3a  8910                 mov dword ptr [eax], edx
// 00631b3c  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00631b42  895004               mov dword ptr [eax + 4], edx
// 00631b45  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 00631b4b  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 00631b51  895008               mov dword ptr [eax + 8], edx
// 00631b54  89480c               mov dword ptr [eax + 0xc], ecx
// 00631b57  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?GetRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
