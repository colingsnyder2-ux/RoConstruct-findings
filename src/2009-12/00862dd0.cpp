// roc 2009-12 00862dd0  unit: CXTPToolTipContext  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862dd0
//
// 00862dd0  6aff                 push -1
// 00862dd2  6839ea9500           push 0x95ea39
// 00862dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00862ddd  50                   push eax
// 00862dde  51                   push ecx
// 00862ddf  53                   push ebx
// 00862de0  56                   push esi
// 00862de1  57                   push edi
// 00862de2  a10052b600           mov eax, dword ptr [0xb65200]
// 00862de7  33c4                 xor eax, esp
// 00862de9  50                   push eax
// 00862dea  8d442414             lea eax, [esp + 0x14]
// 00862dee  64a300000000         mov dword ptr fs:[0], eax
// 00862df4  8bf1                 mov esi, ecx
// 00862df6  89742410             mov dword ptr [esp + 0x10], esi
// 00862dfa  c70624e09f00         mov dword ptr [esi], 0x9fe024
// 00862e00  33ff                 xor edi, edi
// 00862e02  397e5c               cmp dword ptr [esi + 0x5c], edi
// 00862e05  c744241c05000000     mov dword ptr [esp + 0x1c], 5
// 00862e0d  7e36                 jle 0x862e45
// 00862e0f  90                   nop 
// 00862e10  85ff                 test edi, edi
// 00862e12  0f8c9f000000         jl 0x862eb7
// 00862e18  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00862e1b  0f8d96000000         jge 0x862eb7
// 00862e21  8b4658               mov eax, dword ptr [esi + 0x58]
// 00862e24  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00862e27  8d04b8               lea eax, [eax + edi*4]
// 00862e2a  85db                 test ebx, ebx
// 00862e2c  7411                 je 0x862e3f
// 00862e2e  8bcb                 mov ecx, ebx
// 00862e30  ff15c0de9800         call dword ptr [0x98dec0]
// 00862e36  53                   push ebx
// 00862e37  e81e0af9ff           call 0x7f385a
// 00862e3c  83c404               add esp, 4
// 00862e3f  47                   inc edi
// 00862e40  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00862e43  7ccb                 jl 0x862e10
// 00862e45  6aff                 push -1
// 00862e47  8d7e54               lea edi, [esi + 0x54]
// 00862e4a  6a00                 push 0
// 00862e4c  8bcf                 mov ecx, edi
// 00862e4e  e84d25ffff           call 0x8553a0
// 00862e53  6a00                 push 0
// 00862e55  8bce                 mov ecx, esi
// 00862e57  e8d4feffff           call 0x862d30
// 00862e5c  8d8e28010000         lea ecx, [esi + 0x128]
// 00862e62  ff15c0de9800         call dword ptr [0x98dec0]
// 00862e68  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00862e6e  ff15c0de9800         call dword ptr [0x98dec0]
// 00862e74  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00862e7a  ff15c0de9800         call dword ptr [0x98dec0]
// 00862e80  8d4e70               lea ecx, [esi + 0x70]
// 00862e83  ff15c0de9800         call dword ptr [0x98dec0]
// 00862e89  8bcf                 mov ecx, edi
// 00862e8b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00862e90  e81befffff           call 0x861db0
// 00862e95  8bce                 mov ecx, esi
// 00862e97  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00862e9f  e87214f9ff           call 0x7f4316
// 00862ea4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00862ea8  64890d00000000       mov dword ptr fs:[0], ecx
// 00862eaf  59                   pop ecx
// 00862eb0  5f                   pop edi
// 00862eb1  5e                   pop esi
// 00862eb2  5b                   pop ebx
// 00862eb3  83c410               add esp, 0x10
// 00862eb6  c3                   ret 
// 00862eb7  e8500cf9ff           call 0x7f3b0c
// copied from an identical function in another client (function ??1CXTPToolTipContextToolTip@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp