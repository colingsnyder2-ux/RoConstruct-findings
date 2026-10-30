// roc 2007-08 00715350  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715350
//
// 00715350  56                   push esi
// 00715351  8bf1                 mov esi, ecx
// 00715353  e838bcffff           call 0x710f90
// 00715358  8b10                 mov edx, dword ptr [eax]
// 0071535a  8bc8                 mov ecx, eax
// 0071535c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0071535f  ffd0                 call eax
// 00715361  85c0                 test eax, eax
// 00715363  8b442408             mov eax, dword ptr [esp + 8]
// 00715367  7511                 jne 0x71537a
// 00715369  c70000000000         mov dword ptr [eax], 0
// 0071536f  c7400400000000       mov dword ptr [eax + 4], 0
// 00715376  5e                   pop esi
// 00715377  c20400               ret 4
// 0071537a  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00715380  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 00715386  8908                 mov dword ptr [eax], ecx
// 00715388  895004               mov dword ptr [eax + 4], edx
// 0071538b  5e                   pop esi
// 0071538c  c20400               ret 4
// copied from an identical function in another client (function ?GetImagePoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp