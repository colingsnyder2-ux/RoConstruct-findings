// roc 2008-06 0077ff80  unit: CXTPTabPaintManager  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077ff80
//
// 0077ff80  56                   push esi
// 0077ff81  57                   push edi
// 0077ff82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077ff86  8bcf                 mov ecx, edi
// 0077ff88  e813c2ffff           call 0x77c1a0
// 0077ff8d  8b775c               mov esi, dword ptr [edi + 0x5c]
// 0077ff90  85f6                 test esi, esi
// 0077ff92  0f84e6000000         je 0x78007e
// 0077ff98  55                   push ebp
// 0077ff99  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0077ff9d  3be8                 cmp ebp, eax
// 0077ff9f  0f8dd8000000         jge 0x78007d
// 0077ffa5  83fe01               cmp esi, 1
// 0077ffa8  751d                 jne 0x77ffc7
// 0077ffaa  85f6                 test esi, esi
// 0077ffac  7e0e                 jle 0x77ffbc
// 0077ffae  8b4758               mov eax, dword ptr [edi + 0x58]
// 0077ffb1  8b00                 mov eax, dword ptr [eax]
// 0077ffb3  896820               mov dword ptr [eax + 0x20], ebp
// 0077ffb6  5d                   pop ebp
// 0077ffb7  5f                   pop edi
// 0077ffb8  5e                   pop esi
// 0077ffb9  c20800               ret 8
// 0077ffbc  33c0                 xor eax, eax
// 0077ffbe  896820               mov dword ptr [eax + 0x20], ebp
// 0077ffc1  5d                   pop ebp
// 0077ffc2  5f                   pop edi
// 0077ffc3  5e                   pop esi
// 0077ffc4  c20800               ret 8
// 0077ffc7  33c9                 xor ecx, ecx
// 0077ffc9  8bc6                 mov eax, esi
// 0077ffcb  ba04000000           mov edx, 4
// 0077ffd0  f7e2                 mul edx
// 0077ffd2  0f90c1               seto cl
// 0077ffd5  53                   push ebx
// 0077ffd6  f7d9                 neg ecx
// 0077ffd8  0bc8                 or ecx, eax
// 0077ffda  51                   push ecx
// 0077ffdb  e87609f2ff           call 0x6a0956
// 0077ffe0  8bd8                 mov ebx, eax
// 0077ffe2  83c404               add esp, 4
// 0077ffe5  85db                 test ebx, ebx
// 0077ffe7  0f848f000000         je 0x78007c
// 0077ffed  33c0                 xor eax, eax
// 0077ffef  85f6                 test esi, esi
// 0077fff1  7e1b                 jle 0x78000e
// 0077fff3  85c0                 test eax, eax
// 0077fff5  7c0d                 jl 0x780004
// 0077fff7  3b475c               cmp eax, dword ptr [edi + 0x5c]
// 0077fffa  7d08                 jge 0x780004
// 0077fffc  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0077ffff  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00780002  eb02                 jmp 0x780006
// 00780004  33c9                 xor ecx, ecx
// 00780006  890c83               mov dword ptr [ebx + eax*4], ecx
// 00780009  40                   inc eax
// 0078000a  3bc6                 cmp eax, esi
// 0078000c  7ce5                 jl 0x77fff3
// 0078000e  6860d67700           push 0x77d660
// 00780013  6a04                 push 4
// 00780015  56                   push esi
// 00780016  53                   push ebx
// 00780017  ff15fc258000         call dword ptr [0x8025fc]
// 0078001d  83c410               add esp, 0x10
// 00780020  33c0                 xor eax, eax
// 00780022  85f6                 test esi, esi
// 00780024  7e4d                 jle 0x780073
// 00780026  8bd6                 mov edx, esi
// 00780028  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 0078002b  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0078002e  8bfa                 mov edi, edx
// 00780030  0faff9               imul edi, ecx
// 00780033  3bfd                 cmp edi, ebp
// 00780035  7d18                 jge 0x78004f
// 00780037  40                   inc eax
// 00780038  2be9                 sub ebp, ecx
// 0078003a  4a                   dec edx
// 0078003b  3bc6                 cmp eax, esi
// 0078003d  7ce9                 jl 0x780028
// 0078003f  53                   push ebx
// 00780040  e80509f2ff           call 0x6a094a
// 00780045  83c404               add esp, 4
// 00780048  5b                   pop ebx
// 00780049  5d                   pop ebp
// 0078004a  5f                   pop edi
// 0078004b  5e                   pop esi
// 0078004c  c20800               ret 8
// 0078004f  3bc6                 cmp eax, esi
// 00780051  8bc8                 mov ecx, eax
// 00780053  7d1e                 jge 0x780073
// 00780055  8bfe                 mov edi, esi
// 00780057  2bf8                 sub edi, eax
// 00780059  8da42400000000       lea esp, [esp]
// 00780060  8bc5                 mov eax, ebp
// 00780062  99                   cdq 
// 00780063  f7ff                 idiv edi
// 00780065  8b148b               mov edx, dword ptr [ebx + ecx*4]
// 00780068  41                   inc ecx
// 00780069  4f                   dec edi
// 0078006a  2be8                 sub ebp, eax
// 0078006c  3bce                 cmp ecx, esi
// 0078006e  894220               mov dword ptr [edx + 0x20], eax
// 00780071  7ced                 jl 0x780060
// 00780073  53                   push ebx
// 00780074  e8d108f2ff           call 0x6a094a
// 00780079  83c404               add esp, 4
// 0078007c  5b                   pop ebx
// 0078007d  5d                   pop ebp
// 0078007e  5f                   pop edi
// 0078007f  5e                   pop esi
// 00780080  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManager.cpp (function ?SizeToFit@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp
