// roc 2007-03 007072e0  unit: seg_00700000  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007072e0
//
// 007072e0  6aff                 push -1
// 007072e2  686db57600           push 0x76b56d
// 007072e7  64a100000000         mov eax, dword ptr fs:[0]
// 007072ed  50                   push eax
// 007072ee  51                   push ecx
// 007072ef  56                   push esi
// 007072f0  57                   push edi
// 007072f1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 007072f6  33c4                 xor eax, esp
// 007072f8  50                   push eax
// 007072f9  8d442410             lea eax, [esp + 0x10]
// 007072fd  64a300000000         mov dword ptr fs:[0], eax
// 00707303  8bf1                 mov esi, ecx
// 00707305  8974240c             mov dword ptr [esp + 0xc], esi
// 00707309  e86077f1ff           call 0x61ea6e
// 0070730e  33ff                 xor edi, edi
// 00707310  8d4e60               lea ecx, [esi + 0x60]
// 00707313  897c2418             mov dword ptr [esp + 0x18], edi
// 00707317  c70694dc7d00         mov dword ptr [esi], 0x7ddc94
// 0070731d  e86e43f8ff           call 0x68b690
// 00707322  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00707328  c644241801           mov byte ptr [esp + 0x18], 1
// 0070732d  e8de3ff8ff           call 0x68b310
// 00707332  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 00707338  c644241802           mov byte ptr [esp + 0x18], 2
// 0070733d  e8dec20100           call 0x723620
// 00707342  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 00707348  c644241803           mov byte ptr [esp + 0x18], 3
// 0070734d  e8cec20100           call 0x723620
// 00707352  8bce                 mov ecx, esi
// 00707354  c644241804           mov byte ptr [esp + 0x18], 4
// 00707359  897e58               mov dword ptr [esi + 0x58], edi
// 0070735c  897e5c               mov dword ptr [esi + 0x5c], edi
// 0070735f  897e54               mov dword ptr [esi + 0x54], edi
// 00707362  e889f9ffff           call 0x706cf0
// 00707367  8bc6                 mov eax, esi
// 00707369  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070736d  64890d00000000       mov dword ptr fs:[0], ecx
// 00707374  59                   pop ecx
// 00707375  5f                   pop edi
// 00707376  5e                   pop esi
// 00707377  83c410               add esp, 0x10
// 0070737a  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionPopupWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp