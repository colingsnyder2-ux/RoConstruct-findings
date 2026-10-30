// roc 2009-06 0080b370  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b370
//
// 0080b370  56                   push esi
// 0080b371  8bf1                 mov esi, ecx
// 0080b373  e8f85df8ff           call 0x791170
// 0080b378  8b10                 mov edx, dword ptr [eax]
// 0080b37a  8bc8                 mov ecx, eax
// 0080b37c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0080b37f  ffd0                 call eax
// 0080b381  85c0                 test eax, eax
// 0080b383  8b442408             mov eax, dword ptr [esp + 8]
// 0080b387  7511                 jne 0x80b39a
// 0080b389  c70000000000         mov dword ptr [eax], 0
// 0080b38f  c7400400000000       mov dword ptr [eax + 4], 0
// 0080b396  5e                   pop esi
// 0080b397  c20400               ret 4
// 0080b39a  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0080b3a0  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 0080b3a6  8908                 mov dword ptr [eax], ecx
// 0080b3a8  895004               mov dword ptr [eax + 4], edx
// 0080b3ab  5e                   pop esi
// 0080b3ac  c20400               ret 4
// copied from an identical function in another client (function ?GetTextPoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp