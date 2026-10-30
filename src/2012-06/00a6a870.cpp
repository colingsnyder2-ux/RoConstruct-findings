// roc 2012-06 00a6a870  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a870
//
// 00a6a870  56                   push esi
// 00a6a871  8bf1                 mov esi, ecx
// 00a6a873  8b06                 mov eax, dword ptr [esi]
// 00a6a875  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a6a87b  ffd2                 call edx
// 00a6a87d  85c0                 test eax, eax
// 00a6a87f  7411                 je 0xa6a892
// 00a6a881  8bce                 mov ecx, esi
// 00a6a883  e818c2ffff           call 0xa66aa0
// 00a6a888  8b10                 mov edx, dword ptr [eax]
// 00a6a88a  5e                   pop esi
// 00a6a88b  8bc8                 mov ecx, eax
// 00a6a88d  8b5228               mov edx, dword ptr [edx + 0x28]
// 00a6a890  ffe2                 jmp edx
// 00a6a892  5e                   pop esi
// 00a6a893  c21000               ret 0x10
// copied from an identical function in another client (function ?SetAlternateColors@CXTButton@@UAEXKKKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp