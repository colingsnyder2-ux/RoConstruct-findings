// roc 2009-12 008cf050  unit: CXTPTabManagerItem  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf050
//
// 008cf050  6aff                 push -1
// 008cf052  689b4e9600           push 0x964e9b
// 008cf057  64a100000000         mov eax, dword ptr fs:[0]
// 008cf05d  50                   push eax
// 008cf05e  51                   push ecx
// 008cf05f  56                   push esi
// 008cf060  57                   push edi
// 008cf061  a10052b600           mov eax, dword ptr [0xb65200]
// 008cf066  33c4                 xor eax, esp
// 008cf068  50                   push eax
// 008cf069  8d442410             lea eax, [esp + 0x10]
// 008cf06d  64a300000000         mov dword ptr fs:[0], eax
// 008cf073  8bf9                 mov edi, ecx
// 008cf075  897c240c             mov dword ptr [esp + 0xc], edi
// 008cf079  c7075ca7a000         mov dword ptr [edi], 0xa0a75c
// 008cf07f  33f6                 xor esi, esi
// 008cf081  397774               cmp dword ptr [edi + 0x74], esi
// 008cf084  c744241803000000     mov dword ptr [esp + 0x18], 3
// 008cf08c  7e26                 jle 0x8cf0b4
// 008cf08e  8bff                 mov edi, edi
// 008cf090  85f6                 test esi, esi
// 008cf092  7c60                 jl 0x8cf0f4
// 008cf094  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008cf097  7d5b                 jge 0x8cf0f4
// 008cf099  8b4770               mov eax, dword ptr [edi + 0x70]
// 008cf09c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008cf09f  8d04b0               lea eax, [eax + esi*4]
// 008cf0a2  85c9                 test ecx, ecx
// 008cf0a4  7408                 je 0x8cf0ae
// 008cf0a6  8b11                 mov edx, dword ptr [ecx]
// 008cf0a8  8b02                 mov eax, dword ptr [edx]
// 008cf0aa  6a01                 push 1
// 008cf0ac  ffd0                 call eax
// 008cf0ae  46                   inc esi
// 008cf0af  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008cf0b2  7cdc                 jl 0x8cf090
// 008cf0b4  8d4f6c               lea ecx, [edi + 0x6c]
// 008cf0b7  c644241802           mov byte ptr [esp + 0x18], 2
// 008cf0bc  e83ffeffff           call 0x8cef00
// 008cf0c1  8d4f58               lea ecx, [edi + 0x58]
// 008cf0c4  ff15c0de9800         call dword ptr [0x98dec0]
// 008cf0ca  8d4f54               lea ecx, [edi + 0x54]
// 008cf0cd  ff15c0de9800         call dword ptr [0x98dec0]
// 008cf0d3  8bcf                 mov ecx, edi
// 008cf0d5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008cf0dd  e80053f2ff           call 0x7f43e2
// 008cf0e2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008cf0e6  64890d00000000       mov dword ptr fs:[0], ecx
// 008cf0ed  59                   pop ecx
// 008cf0ee  5f                   pop edi
// 008cf0ef  5e                   pop esi
// 008cf0f0  83c410               add esp, 0x10
// 008cf0f3  c3                   ret 
// 008cf0f4  e8134af2ff           call 0x7f3b0c
// copied from an identical function in another client (function ??1CXTPTabManagerItem@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp