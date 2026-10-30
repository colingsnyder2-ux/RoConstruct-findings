// roc 2012-06 00a6be10  unit: CXTCaptionPopupWnd  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6be10
//
// 00a6be10  6aff                 push -1
// 00a6be12  68fd88ae00           push 0xae88fd
// 00a6be17  64a100000000         mov eax, dword ptr fs:[0]
// 00a6be1d  50                   push eax
// 00a6be1e  51                   push ecx
// 00a6be1f  56                   push esi
// 00a6be20  57                   push edi
// 00a6be21  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a6be26  33c4                 xor eax, esp
// 00a6be28  50                   push eax
// 00a6be29  8d442410             lea eax, [esp + 0x10]
// 00a6be2d  64a300000000         mov dword ptr fs:[0], eax
// 00a6be33  8bf1                 mov esi, ecx
// 00a6be35  8974240c             mov dword ptr [esp + 0xc], esi
// 00a6be39  e8886bf1ff           call 0x9829c6
// 00a6be3e  33ff                 xor edi, edi
// 00a6be40  8d4e60               lea ecx, [esi + 0x60]
// 00a6be43  897c2418             mov dword ptr [esp + 0x18], edi
// 00a6be47  c7067c5ec200         mov dword ptr [esi], 0xc25e7c
// 00a6be4d  e8beb0f8ff           call 0x9f6f10
// 00a6be52  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00a6be58  c644241801           mov byte ptr [esp + 0x18], 1
// 00a6be5d  e86eacf8ff           call 0x9f6ad0
// 00a6be62  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 00a6be68  c644241802           mov byte ptr [esp + 0x18], 2
// 00a6be6d  e8eef40000           call 0xa7b360
// 00a6be72  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 00a6be78  c644241803           mov byte ptr [esp + 0x18], 3
// 00a6be7d  e8def40000           call 0xa7b360
// 00a6be82  8bce                 mov ecx, esi
// 00a6be84  c644241804           mov byte ptr [esp + 0x18], 4
// 00a6be89  897e58               mov dword ptr [esi + 0x58], edi
// 00a6be8c  897e5c               mov dword ptr [esi + 0x5c], edi
// 00a6be8f  897e54               mov dword ptr [esi + 0x54], edi
// 00a6be92  e889f9ffff           call 0xa6b820
// 00a6be97  8bc6                 mov eax, esi
// 00a6be99  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6be9d  64890d00000000       mov dword ptr fs:[0], ecx
// 00a6bea4  59                   pop ecx
// 00a6bea5  5f                   pop edi
// 00a6bea6  5e                   pop esi
// 00a6bea7  83c410               add esp, 0x10
// 00a6beaa  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionPopupWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp