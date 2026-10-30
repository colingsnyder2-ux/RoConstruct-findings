// roc 2009-12 00841080  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841080
//
// 00841080  6aff                 push -1
// 00841082  6814cf9500           push 0x95cf14
// 00841087  64a100000000         mov eax, dword ptr fs:[0]
// 0084108d  50                   push eax
// 0084108e  51                   push ecx
// 0084108f  56                   push esi
// 00841090  57                   push edi
// 00841091  a10052b600           mov eax, dword ptr [0xb65200]
// 00841096  33c4                 xor eax, esp
// 00841098  50                   push eax
// 00841099  8d442410             lea eax, [esp + 0x10]
// 0084109d  64a300000000         mov dword ptr fs:[0], eax
// 008410a3  8bf9                 mov edi, ecx
// 008410a5  8d4c240c             lea ecx, [esp + 0xc]
// 008410a9  ff1574de9800         call dword ptr [0x98de74]
// 008410af  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008410b7  e8e4d70200           call 0x86e8a0
// 008410bc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008410c0  8b10                 mov edx, dword ptr [eax]
// 008410c2  8b5208               mov edx, dword ptr [edx + 8]
// 008410c5  51                   push ecx
// 008410c6  8d4c2410             lea ecx, [esp + 0x10]
// 008410ca  51                   push ecx
// 008410cb  8bc8                 mov ecx, eax
// 008410cd  ffd2                 call edx
// 008410cf  6a08                 push 8
// 008410d1  e88a27fbff           call 0x7f3860
// 008410d6  8bf0                 mov esi, eax
// 008410d8  83c404               add esp, 4
// 008410db  89742420             mov dword ptr [esp + 0x20], esi
// 008410df  c644241801           mov byte ptr [esp + 0x18], 1
// 008410e4  85f6                 test esi, esi
// 008410e6  7423                 je 0x84110b
// 008410e8  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 008410ee  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 008410f4  50                   push eax
// 008410f5  8d4c2410             lea ecx, [esp + 0x10]
// 008410f9  ff1580de9800         call dword ptr [0x98de80]
// 008410ff  50                   push eax
// 00841100  8bce                 mov ecx, esi
// 00841102  e819f7ffff           call 0x840820
// 00841107  8bf0                 mov esi, eax
// 00841109  eb02                 jmp 0x84110d
// 0084110b  33f6                 xor esi, esi
// 0084110d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00841111  c644241800           mov byte ptr [esp + 0x18], 0
// 00841116  83f8ff               cmp eax, -1
// 00841119  7506                 jne 0x841121
// 0084111b  8b8744010000         mov eax, dword ptr [edi + 0x144]
// 00841121  6a01                 push 1
// 00841123  56                   push esi
// 00841124  50                   push eax
// 00841125  8d8f3c010000         lea ecx, [edi + 0x13c]
// 0084112b  e810ca0a00           call 0x8edb40
// 00841130  8b4e04               mov ecx, dword ptr [esi + 4]
// 00841133  6a00                 push 0
// 00841135  6aff                 push -1
// 00841137  6a00                 push 0
// 00841139  6a00                 push 0
// 0084113b  6a02                 push 2
// 0084113d  e81e700000           call 0x848160
// 00841142  8d4c240c             lea ecx, [esp + 0xc]
// 00841146  8bf0                 mov esi, eax
// 00841148  ff1580de9800         call dword ptr [0x98de80]
// 0084114e  50                   push eax
// 0084114f  8bce                 mov ecx, esi
// 00841151  e8da55fbff           call 0x7f6730
// 00841156  8d4c240c             lea ecx, [esp + 0xc]
// 0084115a  ff15c0de9800         call dword ptr [0x98dec0]
// 00841160  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00841164  64890d00000000       mov dword ptr fs:[0], ecx
// 0084116b  59                   pop ecx
// 0084116c  5f                   pop edi
// 0084116d  5e                   pop esi
// 0084116e  83c410               add esp, 0x10
// 00841171  c20800               ret 8
// copied from an identical function in another client (function ?InsertNewMenuCategory@CXTPCustomizeCommandsPage@@QAEXIH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp