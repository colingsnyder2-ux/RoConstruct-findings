// roc 2010-06 008834a0  unit: CXTPTabManagerItem  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008834a0
//
// 008834a0  6aff                 push -1
// 008834a2  68c9ae9b00           push 0x9baec9
// 008834a7  64a100000000         mov eax, dword ptr fs:[0]
// 008834ad  50                   push eax
// 008834ae  51                   push ecx
// 008834af  53                   push ebx
// 008834b0  56                   push esi
// 008834b1  57                   push edi
// 008834b2  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008834b7  33c4                 xor eax, esp
// 008834b9  50                   push eax
// 008834ba  8d442414             lea eax, [esp + 0x14]
// 008834be  64a300000000         mov dword ptr fs:[0], eax
// 008834c4  8bf1                 mov esi, ecx
// 008834c6  89742410             mov dword ptr [esp + 0x10], esi
// 008834ca  c706bceaa600         mov dword ptr [esi], 0xa6eabc
// 008834d0  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008834d3  33ff                 xor edi, edi
// 008834d5  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 008834dd  85c0                 test eax, eax
// 008834df  7e30                 jle 0x883511
// 008834e1  85ff                 test edi, edi
// 008834e3  0f8cac000000         jl 0x883595
// 008834e9  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008834ec  0f8da3000000         jge 0x883595
// 008834f2  8b4658               mov eax, dword ptr [esi + 0x58]
// 008834f5  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008834f8  8b13                 mov edx, dword ptr [ebx]
// 008834fa  8d04b8               lea eax, [eax + edi*4]
// 008834fd  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00883500  8bcb                 mov ecx, ebx
// 00883502  ffd0                 call eax
// 00883504  8bcb                 mov ecx, ebx
// 00883506  e8114af2ff           call 0x7a7f1c
// 0088350b  47                   inc edi
// 0088350c  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 0088350f  7cd0                 jl 0x8834e1
// 00883511  33ff                 xor edi, edi
// 00883513  397e70               cmp dword ptr [esi + 0x70], edi
// 00883516  7e23                 jle 0x88353b
// 00883518  85ff                 test edi, edi
// 0088351a  7c79                 jl 0x883595
// 0088351c  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 0088351f  7d74                 jge 0x883595
// 00883521  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00883524  8d04b9               lea eax, [ecx + edi*4]
// 00883527  8b08                 mov ecx, dword ptr [eax]
// 00883529  85c9                 test ecx, ecx
// 0088352b  7408                 je 0x883535
// 0088352d  8b11                 mov edx, dword ptr [ecx]
// 0088352f  8b02                 mov eax, dword ptr [edx]
// 00883531  6a01                 push 1
// 00883533  ffd0                 call eax
// 00883535  47                   inc edi
// 00883536  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 00883539  7cdd                 jl 0x883518
// 0088353b  8bbe88000000         mov edi, dword ptr [esi + 0x88]
// 00883541  85ff                 test edi, edi
// 00883543  7410                 je 0x883555
// 00883545  8bcf                 mov ecx, edi
// 00883547  e804eeffff           call 0x882350
// 0088354c  57                   push edi
// 0088354d  e84844f2ff           call 0x7a799a
// 00883552  83c404               add esp, 4
// 00883555  8d4e7c               lea ecx, [esi + 0x7c]
// 00883558  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0088355d  e8aecbf9ff           call 0x820110
// 00883562  8d4e68               lea ecx, [esi + 0x68]
// 00883565  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0088356a  e871fbffff           call 0x8830e0
// 0088356f  8d4e54               lea ecx, [esi + 0x54]
// 00883572  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00883577  e83477f8ff           call 0x80acb0
// 0088357c  c7068009a600         mov dword ptr [esi], 0xa60980
// 00883582  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00883586  64890d00000000       mov dword ptr fs:[0], ecx
// 0088358d  59                   pop ecx
// 0088358e  5f                   pop edi
// 0088358f  5e                   pop esi
// 00883590  5b                   pop ebx
// 00883591  83c410               add esp, 0x10
// 00883594  c3                   ret 
// 00883595  e8b246f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ??1CXTPTabManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp