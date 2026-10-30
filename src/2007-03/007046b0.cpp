// roc 2007-03 007046b0  unit: seg_00700000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007046b0
//
// 007046b0  6aff                 push -1
// 007046b2  68f3b17600           push 0x76b1f3
// 007046b7  64a100000000         mov eax, dword ptr fs:[0]
// 007046bd  50                   push eax
// 007046be  51                   push ecx
// 007046bf  56                   push esi
// 007046c0  57                   push edi
// 007046c1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 007046c6  33c4                 xor eax, esp
// 007046c8  50                   push eax
// 007046c9  8d442410             lea eax, [esp + 0x10]
// 007046cd  64a300000000         mov dword ptr fs:[0], eax
// 007046d3  8bf1                 mov esi, ecx
// 007046d5  8974240c             mov dword ptr [esp + 0xc], esi
// 007046d9  837e2800             cmp dword ptr [esi + 0x28], 0
// 007046dd  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007046e5  7425                 je 0x70470c
// 007046e7  8d7e1c               lea edi, [esi + 0x1c]
// 007046ea  8d9b00000000         lea ebx, [ebx]
// 007046f0  8bcf                 mov ecx, edi
// 007046f2  e859d0fdff           call 0x6e1750
// 007046f7  85c0                 test eax, eax
// 007046f9  740b                 je 0x704706
// 007046fb  8b10                 mov edx, dword ptr [eax]
// 007046fd  8bc8                 mov ecx, eax
// 007046ff  8b4204               mov eax, dword ptr [edx + 4]
// 00704702  6a01                 push 1
// 00704704  ffd0                 call eax
// 00704706  837e2800             cmp dword ptr [esi + 0x28], 0
// 0070470a  75e4                 jne 0x7046f0
// 0070470c  8d4e1c               lea ecx, [esi + 0x1c]
// 0070470f  c644241800           mov byte ptr [esp + 0x18], 0
// 00704714  e8f7feffff           call 0x704610
// 00704719  8bce                 mov ecx, esi
// 0070471b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00704723  e8e8feffff           call 0x704610
// 00704728  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070472c  64890d00000000       mov dword ptr fs:[0], ecx
// 00704733  59                   pop ecx
// 00704734  5f                   pop edi
// 00704735  5e                   pop esi
// 00704736  83c410               add esp, 0x10
// 00704739  c3                   ret 
// copied from an identical function in another client (function ??1CXTShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp