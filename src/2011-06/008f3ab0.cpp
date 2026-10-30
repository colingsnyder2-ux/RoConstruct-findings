// roc 2011-06 008f3ab0  unit: CXTCaptionPopupWnd  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3ab0
//
// 008f3ab0  6aff                 push -1
// 008f3ab2  68ddeca000           push 0xa0ecdd
// 008f3ab7  64a100000000         mov eax, dword ptr fs:[0]
// 008f3abd  50                   push eax
// 008f3abe  51                   push ecx
// 008f3abf  56                   push esi
// 008f3ac0  57                   push edi
// 008f3ac1  a12058c900           mov eax, dword ptr [0xc95820]
// 008f3ac6  33c4                 xor eax, esp
// 008f3ac8  50                   push eax
// 008f3ac9  8d442410             lea eax, [esp + 0x10]
// 008f3acd  64a300000000         mov dword ptr fs:[0], eax
// 008f3ad3  8bf1                 mov esi, ecx
// 008f3ad5  8974240c             mov dword ptr [esp + 0xc], esi
// 008f3ad9  e8686ef1ff           call 0x80a946
// 008f3ade  33ff                 xor edi, edi
// 008f3ae0  8d4e60               lea ecx, [esi + 0x60]
// 008f3ae3  897c2418             mov dword ptr [esp + 0x18], edi
// 008f3ae7  c706e4a7ad00         mov dword ptr [esi], 0xada7e4
// 008f3aed  e86eaef8ff           call 0x87e960
// 008f3af2  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 008f3af8  c644241801           mov byte ptr [esp + 0x18], 1
// 008f3afd  e81eaaf8ff           call 0x87e520
// 008f3b02  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 008f3b08  c644241802           mov byte ptr [esp + 0x18], 2
// 008f3b0d  e84ef60000           call 0x903160
// 008f3b12  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 008f3b18  c644241803           mov byte ptr [esp + 0x18], 3
// 008f3b1d  e83ef60000           call 0x903160
// 008f3b22  8bce                 mov ecx, esi
// 008f3b24  c644241804           mov byte ptr [esp + 0x18], 4
// 008f3b29  897e58               mov dword ptr [esi + 0x58], edi
// 008f3b2c  897e5c               mov dword ptr [esi + 0x5c], edi
// 008f3b2f  897e54               mov dword ptr [esi + 0x54], edi
// 008f3b32  e889f9ffff           call 0x8f34c0
// 008f3b37  8bc6                 mov eax, esi
// 008f3b39  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f3b3d  64890d00000000       mov dword ptr fs:[0], ecx
// 008f3b44  59                   pop ecx
// 008f3b45  5f                   pop edi
// 008f3b46  5e                   pop esi
// 008f3b47  83c410               add esp, 0x10
// 008f3b4a  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionPopupWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp