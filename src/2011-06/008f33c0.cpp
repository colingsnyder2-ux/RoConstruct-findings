// roc 2011-06 008f33c0  unit: CXTCaptionButton  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f33c0
//
// 008f33c0  6aff                 push -1
// 008f33c2  683deca000           push 0xa0ec3d
// 008f33c7  64a100000000         mov eax, dword ptr fs:[0]
// 008f33cd  50                   push eax
// 008f33ce  51                   push ecx
// 008f33cf  56                   push esi
// 008f33d0  a12058c900           mov eax, dword ptr [0xc95820]
// 008f33d5  33c4                 xor eax, esp
// 008f33d7  50                   push eax
// 008f33d8  8d44240c             lea eax, [esp + 0xc]
// 008f33dc  64a300000000         mov dword ptr fs:[0], eax
// 008f33e2  8bf1                 mov esi, ecx
// 008f33e4  89742408             mov dword ptr [esp + 8], esi
// 008f33e8  c706e4a7ad00         mov dword ptr [esi], 0xada7e4
// 008f33ee  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f33f1  50                   push eax
// 008f33f2  c744241804000000     mov dword ptr [esp + 0x18], 4
// 008f33fa  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f3400  85c0                 test eax, eax
// 008f3402  7407                 je 0x8f340b
// 008f3404  8bce                 mov ecx, esi
// 008f3406  e8d16cf1ff           call 0x80a0dc
// 008f340b  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 008f3411  c644241403           mov byte ptr [esp + 0x14], 3
// 008f3416  e855fd0000           call 0x903170
// 008f341b  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 008f3421  c644241402           mov byte ptr [esp + 0x14], 2
// 008f3426  e845fd0000           call 0x903170
// 008f342b  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 008f3431  c644241401           mov byte ptr [esp + 0x14], 1
// 008f3436  e895f3ffff           call 0x8f27d0
// 008f343b  8d4e60               lea ecx, [esi + 0x60]
// 008f343e  c644241400           mov byte ptr [esp + 0x14], 0
// 008f3443  e828b1f8ff           call 0x87e570
// 008f3448  8bce                 mov ecx, esi
// 008f344a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008f3452  e8c376f1ff           call 0x80ab1a
// 008f3457  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f345b  64890d00000000       mov dword ptr fs:[0], ecx
// 008f3462  59                   pop ecx
// 008f3463  5e                   pop esi
// 008f3464  83c410               add esp, 0x10
// 008f3467  c3                   ret 
// copied from an identical function in another client (function ??1CXTCaptionPopupWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp