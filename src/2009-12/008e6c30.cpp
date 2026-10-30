// roc 2009-12 008e6c30  unit: CXTCaptionPopupWnd  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6c30
//
// 008e6c30  6aff                 push -1
// 008e6c32  685d629600           push 0x96625d
// 008e6c37  64a100000000         mov eax, dword ptr fs:[0]
// 008e6c3d  50                   push eax
// 008e6c3e  51                   push ecx
// 008e6c3f  56                   push esi
// 008e6c40  57                   push edi
// 008e6c41  a10052b600           mov eax, dword ptr [0xb65200]
// 008e6c46  33c4                 xor eax, esp
// 008e6c48  50                   push eax
// 008e6c49  8d442410             lea eax, [esp + 0x10]
// 008e6c4d  64a300000000         mov dword ptr fs:[0], eax
// 008e6c53  8bf1                 mov esi, ecx
// 008e6c55  8974240c             mov dword ptr [esp + 0xc], esi
// 008e6c59  e8ead4f0ff           call 0x7f4148
// 008e6c5e  33ff                 xor edi, edi
// 008e6c60  8d4e60               lea ecx, [esi + 0x60]
// 008e6c63  897c2418             mov dword ptr [esp + 0x18], edi
// 008e6c67  c706c4c9a000         mov dword ptr [esi], 0xa0c9c4
// 008e6c6d  e8fe58f8ff           call 0x86c570
// 008e6c72  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 008e6c78  c644241801           mov byte ptr [esp + 0x18], 1
// 008e6c7d  e8ce54f8ff           call 0x86c150
// 008e6c82  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 008e6c88  c644241802           mov byte ptr [esp + 0x18], 2
// 008e6c8d  e8aeec0000           call 0x8f5940
// 008e6c92  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 008e6c98  c644241803           mov byte ptr [esp + 0x18], 3
// 008e6c9d  e89eec0000           call 0x8f5940
// 008e6ca2  8bce                 mov ecx, esi
// 008e6ca4  c644241804           mov byte ptr [esp + 0x18], 4
// 008e6ca9  897e58               mov dword ptr [esi + 0x58], edi
// 008e6cac  897e5c               mov dword ptr [esi + 0x5c], edi
// 008e6caf  897e54               mov dword ptr [esi + 0x54], edi
// 008e6cb2  e889f9ffff           call 0x8e6640
// 008e6cb7  8bc6                 mov eax, esi
// 008e6cb9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e6cbd  64890d00000000       mov dword ptr fs:[0], ecx
// 008e6cc4  59                   pop ecx
// 008e6cc5  5f                   pop edi
// 008e6cc6  5e                   pop esi
// 008e6cc7  83c410               add esp, 0x10
// 008e6cca  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionPopupWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp