// roc 2012-06 00a6b040  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b040
//
// 00a6b040  56                   push esi
// 00a6b041  8bf1                 mov esi, ecx
// 00a6b043  e858baffff           call 0xa66aa0
// 00a6b048  8b10                 mov edx, dword ptr [eax]
// 00a6b04a  8bc8                 mov ecx, eax
// 00a6b04c  8b4218               mov eax, dword ptr [edx + 0x18]
// 00a6b04f  ffd0                 call eax
// 00a6b051  85c0                 test eax, eax
// 00a6b053  8b442408             mov eax, dword ptr [esp + 8]
// 00a6b057  7511                 jne 0xa6b06a
// 00a6b059  c70000000000         mov dword ptr [eax], 0
// 00a6b05f  c7400400000000       mov dword ptr [eax + 4], 0
// 00a6b066  5e                   pop esi
// 00a6b067  c20400               ret 4
// 00a6b06a  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00a6b070  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 00a6b076  8908                 mov dword ptr [eax], ecx
// 00a6b078  895004               mov dword ptr [eax + 4], edx
// 00a6b07b  5e                   pop esi
// 00a6b07c  c20400               ret 4
// copied from an identical function in another client (function ?GetTextPoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp