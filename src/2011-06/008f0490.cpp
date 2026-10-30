// roc 2011-06 008f0490  unit: PAVCXTShadowWnd::?$CList  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0490
//
// 008f0490  6aff                 push -1
// 008f0492  6803e9a000           push 0xa0e903
// 008f0497  64a100000000         mov eax, dword ptr fs:[0]
// 008f049d  50                   push eax
// 008f049e  51                   push ecx
// 008f049f  56                   push esi
// 008f04a0  57                   push edi
// 008f04a1  a12058c900           mov eax, dword ptr [0xc95820]
// 008f04a6  33c4                 xor eax, esp
// 008f04a8  50                   push eax
// 008f04a9  8d442410             lea eax, [esp + 0x10]
// 008f04ad  64a300000000         mov dword ptr fs:[0], eax
// 008f04b3  8bf1                 mov esi, ecx
// 008f04b5  8974240c             mov dword ptr [esp + 0xc], esi
// 008f04b9  837e2800             cmp dword ptr [esi + 0x28], 0
// 008f04bd  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008f04c5  7425                 je 0x8f04ec
// 008f04c7  8d7e1c               lea edi, [esi + 0x1c]
// 008f04ca  8d9b00000000         lea ebx, [ebx]
// 008f04d0  8bcf                 mov ecx, edi
// 008f04d2  e869feffff           call 0x8f0340
// 008f04d7  85c0                 test eax, eax
// 008f04d9  740b                 je 0x8f04e6
// 008f04db  8b10                 mov edx, dword ptr [eax]
// 008f04dd  8bc8                 mov ecx, eax
// 008f04df  8b4204               mov eax, dword ptr [edx + 4]
// 008f04e2  6a01                 push 1
// 008f04e4  ffd0                 call eax
// 008f04e6  837e2800             cmp dword ptr [esi + 0x28], 0
// 008f04ea  75e4                 jne 0x8f04d0
// 008f04ec  8d4e1c               lea ecx, [esi + 0x1c]
// 008f04ef  c644241800           mov byte ptr [esp + 0x18], 0
// 008f04f4  e887feffff           call 0x8f0380
// 008f04f9  8bce                 mov ecx, esi
// 008f04fb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008f0503  e878feffff           call 0x8f0380
// 008f0508  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f050c  64890d00000000       mov dword ptr fs:[0], ecx
// 008f0513  59                   pop ecx
// 008f0514  5f                   pop edi
// 008f0515  5e                   pop esi
// 008f0516  83c410               add esp, 0x10
// 008f0519  c3                   ret 
// copied from an identical function in another client (function ??1CXTShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp