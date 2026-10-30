// roc 2007-08 00715390  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715390
//
// 00715390  56                   push esi
// 00715391  8bf1                 mov esi, ecx
// 00715393  e8f8bbffff           call 0x710f90
// 00715398  8b10                 mov edx, dword ptr [eax]
// 0071539a  8bc8                 mov ecx, eax
// 0071539c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0071539f  ffd0                 call eax
// 007153a1  85c0                 test eax, eax
// 007153a3  8b442408             mov eax, dword ptr [esp + 8]
// 007153a7  7511                 jne 0x7153ba
// 007153a9  c70000000000         mov dword ptr [eax], 0
// 007153af  c7400400000000       mov dword ptr [eax + 4], 0
// 007153b6  5e                   pop esi
// 007153b7  c20400               ret 4
// 007153ba  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 007153c0  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 007153c6  8908                 mov dword ptr [eax], ecx
// 007153c8  895004               mov dword ptr [eax + 4], edx
// 007153cb  5e                   pop esi
// 007153cc  c20400               ret 4
// copied from an identical function in another client (function ?GetTextPoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp