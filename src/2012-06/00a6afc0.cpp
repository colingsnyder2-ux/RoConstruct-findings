// roc 2012-06 00a6afc0  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6afc0
//
// 00a6afc0  56                   push esi
// 00a6afc1  8bf1                 mov esi, ecx
// 00a6afc3  e8d8baffff           call 0xa66aa0
// 00a6afc8  8b10                 mov edx, dword ptr [eax]
// 00a6afca  8bc8                 mov ecx, eax
// 00a6afcc  8b4218               mov eax, dword ptr [edx + 0x18]
// 00a6afcf  ffd0                 call eax
// 00a6afd1  85c0                 test eax, eax
// 00a6afd3  8b442408             mov eax, dword ptr [esp + 8]
// 00a6afd7  7511                 jne 0xa6afea
// 00a6afd9  c70000000000         mov dword ptr [eax], 0
// 00a6afdf  c7400400000000       mov dword ptr [eax + 4], 0
// 00a6afe6  5e                   pop esi
// 00a6afe7  c20400               ret 4
// 00a6afea  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00a6aff0  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00a6aff6  8908                 mov dword ptr [eax], ecx
// 00a6aff8  895004               mov dword ptr [eax + 4], edx
// 00a6affb  5e                   pop esi
// 00a6affc  c20400               ret 4
// copied from an identical function in another client (function ?GetImageSize@CXTButton@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp