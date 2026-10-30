// roc 2009-12 0083ffb0  unit: CXTPCustomizeSheet  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ffb0
//
// 0083ffb0  6aff                 push -1
// 0083ffb2  6899869500           push 0x958699
// 0083ffb7  64a100000000         mov eax, dword ptr fs:[0]
// 0083ffbd  50                   push eax
// 0083ffbe  51                   push ecx
// 0083ffbf  56                   push esi
// 0083ffc0  a10052b600           mov eax, dword ptr [0xb65200]
// 0083ffc5  33c4                 xor eax, esp
// 0083ffc7  50                   push eax
// 0083ffc8  8d44240c             lea eax, [esp + 0xc]
// 0083ffcc  64a300000000         mov dword ptr fs:[0], eax
// 0083ffd2  8bf1                 mov esi, ecx
// 0083ffd4  8d4c2408             lea ecx, [esp + 8]
// 0083ffd8  ff1574de9800         call dword ptr [0x98de74]
// 0083ffde  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0083ffe6  e8b5e80200           call 0x86e8a0
// 0083ffeb  8b10                 mov edx, dword ptr [eax]
// 0083ffed  8b5208               mov edx, dword ptr [edx + 8]
// 0083fff0  68d2230000           push 0x23d2
// 0083fff5  8d4c240c             lea ecx, [esp + 0xc]
// 0083fff9  51                   push ecx
// 0083fffa  8bc8                 mov ecx, eax
// 0083fffc  ffd2                 call edx
// 0083fffe  6834010000           push 0x134
// 00840003  8d4c240c             lea ecx, [esp + 0xc]
// 00840007  ff1580de9800         call dword ptr [0x98de80]
// 0084000d  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 00840013  50                   push eax
// 00840014  e8e7f4ffff           call 0x83f500
// 00840019  83f806               cmp eax, 6
// 0084001c  750e                 jne 0x84002c
// 0084001e  8bce                 mov ecx, esi
// 00840020  e84bfeffff           call 0x83fe70
// 00840025  8bc8                 mov ecx, eax
// 00840027  e8544efdff           call 0x814e80
// 0084002c  8d4c2408             lea ecx, [esp + 8]
// 00840030  ff15c0de9800         call dword ptr [0x98dec0]
// 00840036  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084003a  64890d00000000       mov dword ptr fs:[0], ecx
// 00840041  59                   pop ecx
// 00840042  5e                   pop esi
// 00840043  83c410               add esp, 0x10
// 00840046  c3                   ret 
// copied from an identical function in another client (function ?OnResetData@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeOptionsPage.cpp