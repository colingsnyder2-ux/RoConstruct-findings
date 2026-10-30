// roc 2007-08 00715310  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715310
//
// 00715310  56                   push esi
// 00715311  8bf1                 mov esi, ecx
// 00715313  e878bcffff           call 0x710f90
// 00715318  8b10                 mov edx, dword ptr [eax]
// 0071531a  8bc8                 mov ecx, eax
// 0071531c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0071531f  ffd0                 call eax
// 00715321  85c0                 test eax, eax
// 00715323  8b442408             mov eax, dword ptr [esp + 8]
// 00715327  7511                 jne 0x71533a
// 00715329  c70000000000         mov dword ptr [eax], 0
// 0071532f  c7400400000000       mov dword ptr [eax + 4], 0
// 00715336  5e                   pop esi
// 00715337  c20400               ret 4
// 0071533a  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00715340  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00715346  8908                 mov dword ptr [eax], ecx
// 00715348  895004               mov dword ptr [eax + 4], edx
// 0071534b  5e                   pop esi
// 0071534c  c20400               ret 4
// copied from an identical function in another client (function ?GetImageSize@CXTButton@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp