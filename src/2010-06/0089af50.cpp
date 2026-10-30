// roc 2010-06 0089af50  unit: CXTCaptionPopupWnd  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089af50
//
// 0089af50  6aff                 push -1
// 0089af52  68edc19b00           push 0x9bc1ed
// 0089af57  64a100000000         mov eax, dword ptr fs:[0]
// 0089af5d  50                   push eax
// 0089af5e  51                   push ecx
// 0089af5f  56                   push esi
// 0089af60  57                   push edi
// 0089af61  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089af66  33c4                 xor eax, esp
// 0089af68  50                   push eax
// 0089af69  8d442410             lea eax, [esp + 0x10]
// 0089af6d  64a300000000         mov dword ptr fs:[0], eax
// 0089af73  8bf1                 mov esi, ecx
// 0089af75  8974240c             mov dword ptr [esp + 0xc], esi
// 0089af79  e80ad3f0ff           call 0x7a8288
// 0089af7e  33ff                 xor edi, edi
// 0089af80  8d4e60               lea ecx, [esi + 0x60]
// 0089af83  897c2418             mov dword ptr [esp + 0x18], edi
// 0089af87  c706bc0ca700         mov dword ptr [esi], 0xa70cbc
// 0089af8d  e8ae62f8ff           call 0x821240
// 0089af92  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 0089af98  c644241801           mov byte ptr [esp + 0x18], 1
// 0089af9d  e86e5ef8ff           call 0x820e10
// 0089afa2  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 0089afa8  c644241802           mov byte ptr [esp + 0x18], 2
// 0089afad  e8eeea0000           call 0x8a9aa0
// 0089afb2  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 0089afb8  c644241803           mov byte ptr [esp + 0x18], 3
// 0089afbd  e8deea0000           call 0x8a9aa0
// 0089afc2  8bce                 mov ecx, esi
// 0089afc4  c644241804           mov byte ptr [esp + 0x18], 4
// 0089afc9  897e58               mov dword ptr [esi + 0x58], edi
// 0089afcc  897e5c               mov dword ptr [esi + 0x5c], edi
// 0089afcf  897e54               mov dword ptr [esi + 0x54], edi
// 0089afd2  e889f9ffff           call 0x89a960
// 0089afd7  8bc6                 mov eax, esi
// 0089afd9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089afdd  64890d00000000       mov dword ptr fs:[0], ecx
// 0089afe4  59                   pop ecx
// 0089afe5  5f                   pop edi
// 0089afe6  5e                   pop esi
// 0089afe7  83c410               add esp, 0x10
// 0089afea  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionPopupWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp