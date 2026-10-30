// roc 2007-08 00712c40  unit: PAVCXTShadowWnd::?$CList  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712c40
//
// 00712c40  6aff                 push -1
// 00712c42  6823a87600           push 0x76a823
// 00712c47  64a100000000         mov eax, dword ptr fs:[0]
// 00712c4d  50                   push eax
// 00712c4e  51                   push ecx
// 00712c4f  56                   push esi
// 00712c50  57                   push edi
// 00712c51  a188518b00           mov eax, dword ptr [0x8b5188]
// 00712c56  33c4                 xor eax, esp
// 00712c58  50                   push eax
// 00712c59  8d442410             lea eax, [esp + 0x10]
// 00712c5d  64a300000000         mov dword ptr fs:[0], eax
// 00712c63  8bf1                 mov esi, ecx
// 00712c65  8974240c             mov dword ptr [esp + 0xc], esi
// 00712c69  837e2800             cmp dword ptr [esi + 0x28], 0
// 00712c6d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00712c75  7425                 je 0x712c9c
// 00712c77  8d7e1c               lea edi, [esi + 0x1c]
// 00712c7a  8d9b00000000         lea ebx, [ebx]
// 00712c80  8bcf                 mov ecx, edi
// 00712c82  e80970ffff           call 0x709c90
// 00712c87  85c0                 test eax, eax
// 00712c89  740b                 je 0x712c96
// 00712c8b  8b10                 mov edx, dword ptr [eax]
// 00712c8d  8bc8                 mov ecx, eax
// 00712c8f  8b4204               mov eax, dword ptr [edx + 4]
// 00712c92  6a01                 push 1
// 00712c94  ffd0                 call eax
// 00712c96  837e2800             cmp dword ptr [esi + 0x28], 0
// 00712c9a  75e4                 jne 0x712c80
// 00712c9c  8d4e1c               lea ecx, [esi + 0x1c]
// 00712c9f  c644241800           mov byte ptr [esp + 0x18], 0
// 00712ca4  e8f7feffff           call 0x712ba0
// 00712ca9  8bce                 mov ecx, esi
// 00712cab  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00712cb3  e8e8feffff           call 0x712ba0
// 00712cb8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00712cbc  64890d00000000       mov dword ptr fs:[0], ecx
// 00712cc3  59                   pop ecx
// 00712cc4  5f                   pop edi
// 00712cc5  5e                   pop esi
// 00712cc6  83c410               add esp, 0x10
// 00712cc9  c3                   ret 
// copied from an identical function in another client (function ??1CXTShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp