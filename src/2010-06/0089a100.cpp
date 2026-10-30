// roc 2010-06 0089a100  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a100
//
// 0089a100  56                   push esi
// 0089a101  8bf1                 mov esi, ecx
// 0089a103  e8586df8ff           call 0x820e60
// 0089a108  8b10                 mov edx, dword ptr [eax]
// 0089a10a  8bc8                 mov ecx, eax
// 0089a10c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0089a10f  ffd0                 call eax
// 0089a111  85c0                 test eax, eax
// 0089a113  8b442408             mov eax, dword ptr [esp + 8]
// 0089a117  7511                 jne 0x89a12a
// 0089a119  c70000000000         mov dword ptr [eax], 0
// 0089a11f  c7400400000000       mov dword ptr [eax + 4], 0
// 0089a126  5e                   pop esi
// 0089a127  c20400               ret 4
// 0089a12a  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0089a130  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 0089a136  8908                 mov dword ptr [eax], ecx
// 0089a138  895004               mov dword ptr [eax + 4], edx
// 0089a13b  5e                   pop esi
// 0089a13c  c20400               ret 4
// copied from an identical function in another client (function ?GetImageSize@CXTButton@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp