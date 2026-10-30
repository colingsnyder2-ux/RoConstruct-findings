// roc 2009-12 0083da10  unit: CXTPCustomizeSheet  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083da10
//
// 0083da10  6aff                 push -1
// 0083da12  68c9ee9500           push 0x95eec9
// 0083da17  64a100000000         mov eax, dword ptr fs:[0]
// 0083da1d  50                   push eax
// 0083da1e  51                   push ecx
// 0083da1f  53                   push ebx
// 0083da20  55                   push ebp
// 0083da21  56                   push esi
// 0083da22  57                   push edi
// 0083da23  a10052b600           mov eax, dword ptr [0xb65200]
// 0083da28  33c4                 xor eax, esp
// 0083da2a  50                   push eax
// 0083da2b  8d442418             lea eax, [esp + 0x18]
// 0083da2f  64a300000000         mov dword ptr fs:[0], eax
// 0083da35  8bf1                 mov esi, ecx
// 0083da37  e8cc8d0e00           call 0x926808
// 0083da3c  6a01                 push 1
// 0083da3e  8bce                 mov ecx, esi
// 0083da40  8bd8                 mov ebx, eax
// 0083da42  e8e96cfbff           call 0x7f4730
// 0083da47  8b2d84cc9800         mov ebp, dword ptr [0x98cc84]
// 0083da4d  8bf8                 mov edi, eax
// 0083da4f  85ff                 test edi, edi
// 0083da51  7413                 je 0x83da66
// 0083da53  8b4720               mov eax, dword ptr [edi + 0x20]
// 0083da56  50                   push eax
// 0083da57  ffd5                 call ebp
// 0083da59  85c0                 test eax, eax
// 0083da5b  7409                 je 0x83da66
// 0083da5d  6a00                 push 0
// 0083da5f  8bcf                 mov ecx, edi
// 0083da61  e8e260fbff           call 0x7f3b48
// 0083da66  6a02                 push 2
// 0083da68  8bce                 mov ecx, esi
// 0083da6a  e8c16cfbff           call 0x7f4730
// 0083da6f  8bf0                 mov esi, eax
// 0083da71  85f6                 test esi, esi
// 0083da73  7450                 je 0x83dac5
// 0083da75  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0083da78  51                   push ecx
// 0083da79  ffd5                 call ebp
// 0083da7b  85c0                 test eax, eax
// 0083da7d  7446                 je 0x83dac5
// 0083da7f  8d4c2414             lea ecx, [esp + 0x14]
// 0083da83  ff1574de9800         call dword ptr [0x98de74]
// 0083da89  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0083da91  e80a0e0300           call 0x86e8a0
// 0083da96  8b10                 mov edx, dword ptr [eax]
// 0083da98  8b5208               mov edx, dword ptr [edx + 8]
// 0083da9b  68c8230000           push 0x23c8
// 0083daa0  8d4c2418             lea ecx, [esp + 0x18]
// 0083daa4  51                   push ecx
// 0083daa5  8bc8                 mov ecx, eax
// 0083daa7  ffd2                 call edx
// 0083daa9  8d4c2414             lea ecx, [esp + 0x14]
// 0083daad  ff1580de9800         call dword ptr [0x98de80]
// 0083dab3  50                   push eax
// 0083dab4  8bce                 mov ecx, esi
// 0083dab6  e85961fbff           call 0x7f3c14
// 0083dabb  8d4c2414             lea ecx, [esp + 0x14]
// 0083dabf  ff15c0de9800         call dword ptr [0x98dec0]
// 0083dac5  8bc3                 mov eax, ebx
// 0083dac7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083dacb  64890d00000000       mov dword ptr fs:[0], ecx
// 0083dad2  59                   pop ecx
// 0083dad3  5f                   pop edi
// 0083dad4  5e                   pop esi
// 0083dad5  5d                   pop ebp
// 0083dad6  5b                   pop ebx
// 0083dad7  83c410               add esp, 0x10
// 0083dada  c3                   ret 
// copied from an identical function in another client (function ?OnInitDialog@CXTPCustomizeSheet@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals-string-calls Source\CommandBars\XTPCustomizeSheet.cpp