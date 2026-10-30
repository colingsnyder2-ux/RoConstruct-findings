// roc 2007-08 00715fb0  unit: CXTCaptionPopupWnd  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715fb0
//
// 00715fb0  6aff                 push -1
// 00715fb2  68a8ac7600           push 0x76aca8
// 00715fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00715fbd  50                   push eax
// 00715fbe  83ec68               sub esp, 0x68
// 00715fc1  a188518b00           mov eax, dword ptr [0x8b5188]
// 00715fc6  33c4                 xor eax, esp
// 00715fc8  89442464             mov dword ptr [esp + 0x64], eax
// 00715fcc  56                   push esi
// 00715fcd  57                   push edi
// 00715fce  a188518b00           mov eax, dword ptr [0x8b5188]
// 00715fd3  33c4                 xor eax, esp
// 00715fd5  50                   push eax
// 00715fd6  8d442474             lea eax, [esp + 0x74]
// 00715fda  64a300000000         mov dword ptr fs:[0], eax
// 00715fe0  8bf1                 mov esi, ecx
// 00715fe2  56                   push esi
// 00715fe3  8d4c2420             lea ecx, [esp + 0x20]
// 00715fe7  e8a4a4f1ff           call 0x630490
// 00715fec  56                   push esi
// 00715fed  8d4c2410             lea ecx, [esp + 0x10]
// 00715ff1  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00715ffc  e8ff9ff6ff           call 0x680000
// 00716001  6aff                 push -1
// 00716003  6aff                 push -1
// 00716005  8d442414             lea eax, [esp + 0x14]
// 00716009  50                   push eax
// 0071600a  ff1590ed7700         call dword ptr [0x77ed90]
// 00716010  e85b2ff5ff           call 0x668f70
// 00716015  6a14                 push 0x14
// 00716017  8bc8                 mov ecx, eax
// 00716019  e85227f5ff           call 0x668770
// 0071601e  8bf8                 mov edi, eax
// 00716020  e84b2ff5ff           call 0x668f70
// 00716025  6a10                 push 0x10
// 00716027  8bc8                 mov ecx, eax
// 00716029  e84227f5ff           call 0x668770
// 0071602e  57                   push edi
// 0071602f  50                   push eax
// 00716030  8d4c2414             lea ecx, [esp + 0x14]
// 00716034  51                   push ecx
// 00716035  8d4c2428             lea ecx, [esp + 0x28]
// 00716039  e86ca8f1ff           call 0x6308aa
// 0071603e  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00716044  6a01                 push 1
// 00716046  6a00                 push 0
// 00716048  52                   push edx
// 00716049  ff15dcec7700         call dword ptr [0x77ecdc]
// 0071604f  8d4c241c             lea ecx, [esp + 0x1c]
// 00716053  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 0071605b  e82aa4f1ff           call 0x63048a
// 00716060  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00716064  64890d00000000       mov dword ptr fs:[0], ecx
// 0071606b  59                   pop ecx
// 0071606c  5f                   pop edi
// 0071606d  5e                   pop esi
// 0071606e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00716072  33cc                 xor ecx, esp
// 00716074  e8a5a9f1ff           call 0x630a1e
// 00716079  83c474               add esp, 0x74
// 0071607c  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp