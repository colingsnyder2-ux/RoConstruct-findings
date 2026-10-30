// roc 2009-12 00841390  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841390
//
// 00841390  51                   push ecx
// 00841391  53                   push ebx
// 00841392  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 00841398  57                   push edi
// 00841399  6a00                 push 0
// 0084139b  6a00                 push 0
// 0084139d  8bf9                 mov edi, ecx
// 0084139f  8b87a8000000         mov eax, dword ptr [edi + 0xa8]
// 008413a5  6884010000           push 0x184
// 008413aa  50                   push eax
// 008413ab  ffd3                 call ebx
// 008413ad  8b8f04010000         mov ecx, dword ptr [edi + 0x104]
// 008413b3  6a00                 push 0
// 008413b5  6a00                 push 0
// 008413b7  6888010000           push 0x188
// 008413bc  51                   push ecx
// 008413bd  ffd3                 call ebx
// 008413bf  83f8ff               cmp eax, -1
// 008413c2  7471                 je 0x841435
// 008413c4  8b9704010000         mov edx, dword ptr [edi + 0x104]
// 008413ca  6a00                 push 0
// 008413cc  50                   push eax
// 008413cd  6899010000           push 0x199
// 008413d2  52                   push edx
// 008413d3  ffd3                 call ebx
// 008413d5  50                   push eax
// 008413d6  8bcf                 mov ecx, edi
// 008413d8  e803fbffff           call 0x840ee0
// 008413dd  89442408             mov dword ptr [esp + 8], eax
// 008413e1  85c0                 test eax, eax
// 008413e3  7450                 je 0x841435
// 008413e5  8b4004               mov eax, dword ptr [eax + 4]
// 008413e8  56                   push esi
// 008413e9  33f6                 xor esi, esi
// 008413eb  39702c               cmp dword ptr [eax + 0x2c], esi
// 008413ee  7e44                 jle 0x841434
// 008413f0  55                   push ebp
// 008413f1  85f6                 test esi, esi
// 008413f3  7c0d                 jl 0x841402
// 008413f5  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 008413f8  7d08                 jge 0x841402
// 008413fa  8b4028               mov eax, dword ptr [eax + 0x28]
// 008413fd  8b2cb0               mov ebp, dword ptr [eax + esi*4]
// 00841400  eb02                 jmp 0x841404
// 00841402  33ed                 xor ebp, ebp
// 00841404  8b8fa8000000         mov ecx, dword ptr [edi + 0xa8]
// 0084140a  6a00                 push 0
// 0084140c  6a00                 push 0
// 0084140e  688b010000           push 0x18b
// 00841413  51                   push ecx
// 00841414  ffd3                 call ebx
// 00841416  8b97a8000000         mov edx, dword ptr [edi + 0xa8]
// 0084141c  55                   push ebp
// 0084141d  50                   push eax
// 0084141e  6881010000           push 0x181
// 00841423  52                   push edx
// 00841424  ffd3                 call ebx
// 00841426  8b442410             mov eax, dword ptr [esp + 0x10]
// 0084142a  8b4004               mov eax, dword ptr [eax + 4]
// 0084142d  46                   inc esi
// 0084142e  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 00841431  7cbe                 jl 0x8413f1
// 00841433  5d                   pop ebp
// 00841434  5e                   pop esi
// 00841435  5f                   pop edi
// 00841436  5b                   pop ebx
// 00841437  59                   pop ecx
// 00841438  c3                   ret 
// copied from an identical function in another client (function ?OnCategoriesSelectionChanged@CXTPCustomizeCommandsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp