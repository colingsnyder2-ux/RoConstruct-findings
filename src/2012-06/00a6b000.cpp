// roc 2012-06 00a6b000  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b000
//
// 00a6b000  56                   push esi
// 00a6b001  8bf1                 mov esi, ecx
// 00a6b003  e898baffff           call 0xa66aa0
// 00a6b008  8b10                 mov edx, dword ptr [eax]
// 00a6b00a  8bc8                 mov ecx, eax
// 00a6b00c  8b4218               mov eax, dword ptr [edx + 0x18]
// 00a6b00f  ffd0                 call eax
// 00a6b011  85c0                 test eax, eax
// 00a6b013  8b442408             mov eax, dword ptr [esp + 8]
// 00a6b017  7511                 jne 0xa6b02a
// 00a6b019  c70000000000         mov dword ptr [eax], 0
// 00a6b01f  c7400400000000       mov dword ptr [eax + 4], 0
// 00a6b026  5e                   pop esi
// 00a6b027  c20400               ret 4
// 00a6b02a  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00a6b030  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 00a6b036  8908                 mov dword ptr [eax], ecx
// 00a6b038  895004               mov dword ptr [eax + 4], edx
// 00a6b03b  5e                   pop esi
// 00a6b03c  c20400               ret 4
// copied from an identical function in another client (function ?GetImagePoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp