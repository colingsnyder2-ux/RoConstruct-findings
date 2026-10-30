// roc 2012-06 00a6a910  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a910
//
// 00a6a910  56                   push esi
// 00a6a911  8bf1                 mov esi, ecx
// 00a6a913  8b06                 mov eax, dword ptr [esi]
// 00a6a915  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a6a91b  ffd2                 call edx
// 00a6a91d  85c0                 test eax, eax
// 00a6a91f  7411                 je 0xa6a932
// 00a6a921  8bce                 mov ecx, esi
// 00a6a923  e878c1ffff           call 0xa66aa0
// 00a6a928  8b10                 mov edx, dword ptr [eax]
// 00a6a92a  5e                   pop esi
// 00a6a92b  8bc8                 mov ecx, eax
// 00a6a92d  8b5234               mov edx, dword ptr [edx + 0x34]
// 00a6a930  ffe2                 jmp edx
// 00a6a932  5e                   pop esi
// 00a6a933  c20400               ret 4
// copied from an identical function in another client (function ?SetColorHilite@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp