// roc 2009-06 0080b2f0  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b2f0
//
// 0080b2f0  56                   push esi
// 0080b2f1  8bf1                 mov esi, ecx
// 0080b2f3  e8785ef8ff           call 0x791170
// 0080b2f8  8b10                 mov edx, dword ptr [eax]
// 0080b2fa  8bc8                 mov ecx, eax
// 0080b2fc  8b4218               mov eax, dword ptr [edx + 0x18]
// 0080b2ff  ffd0                 call eax
// 0080b301  85c0                 test eax, eax
// 0080b303  8b442408             mov eax, dword ptr [esp + 8]
// 0080b307  7511                 jne 0x80b31a
// 0080b309  c70000000000         mov dword ptr [eax], 0
// 0080b30f  c7400400000000       mov dword ptr [eax + 4], 0
// 0080b316  5e                   pop esi
// 0080b317  c20400               ret 4
// 0080b31a  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0080b320  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 0080b326  8908                 mov dword ptr [eax], ecx
// 0080b328  895004               mov dword ptr [eax + 4], edx
// 0080b32b  5e                   pop esi
// 0080b32c  c20400               ret 4
// copied from an identical function in another client (function ?GetImageSize@CXTButton@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp