// roc 2009-12 008e5de0  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5de0
//
// 008e5de0  56                   push esi
// 008e5de1  8bf1                 mov esi, ecx
// 008e5de3  e888baffff           call 0x8e1870
// 008e5de8  8b10                 mov edx, dword ptr [eax]
// 008e5dea  8bc8                 mov ecx, eax
// 008e5dec  8b4218               mov eax, dword ptr [edx + 0x18]
// 008e5def  ffd0                 call eax
// 008e5df1  85c0                 test eax, eax
// 008e5df3  8b442408             mov eax, dword ptr [esp + 8]
// 008e5df7  7511                 jne 0x8e5e0a
// 008e5df9  c70000000000         mov dword ptr [eax], 0
// 008e5dff  c7400400000000       mov dword ptr [eax + 4], 0
// 008e5e06  5e                   pop esi
// 008e5e07  c20400               ret 4
// 008e5e0a  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008e5e10  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008e5e16  8908                 mov dword ptr [eax], ecx
// 008e5e18  895004               mov dword ptr [eax + 4], edx
// 008e5e1b  5e                   pop esi
// 008e5e1c  c20400               ret 4
// copied from an identical function in another client (function ?GetImageSize@CXTButton@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp