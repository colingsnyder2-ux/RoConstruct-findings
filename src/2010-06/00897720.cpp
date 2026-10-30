// roc 2010-06 00897720  unit: CXTShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897720
//
// 00897720  83ec20               sub esp, 0x20
// 00897723  53                   push ebx
// 00897724  56                   push esi
// 00897725  8bf1                 mov esi, ecx
// 00897727  56                   push esi
// 00897728  8d4c240c             lea ecx, [esp + 0xc]
// 0089772c  e87f7bf6ff           call 0x7ff2b0
// 00897731  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00897735  8b5804               mov ebx, dword ptr [eax + 4]
// 00897738  85db                 test ebx, ebx
// 0089773a  0f84ba000000         je 0x8977fa
// 00897740  55                   push ebp
// 00897741  57                   push edi
// 00897742  8bc3                 mov eax, ebx
// 00897744  8b4008               mov eax, dword ptr [eax + 8]
// 00897747  8b1b                 mov ebx, dword ptr [ebx]
// 00897749  33c9                 xor ecx, ecx
// 0089774b  39485c               cmp dword ptr [eax + 0x5c], ecx
// 0089774e  0f94c1               sete cl
// 00897751  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 00897754  0f8596000000         jne 0x8977f0
// 0089775a  50                   push eax
// 0089775b  8d4c2424             lea ecx, [esp + 0x24]
// 0089775f  e84c7bf6ff           call 0x7ff2b0
// 00897764  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00897768  7540                 jne 0x8977aa
// 0089776a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089776e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00897772  8d41ff               lea eax, [ecx - 1]
// 00897775  3bd0                 cmp edx, eax
// 00897777  7577                 jne 0x8977f0
// 00897779  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089777d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00897781  7d6d                 jge 0x8977f0
// 00897783  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00897787  7e67                 jle 0x8977f0
// 00897789  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0089778d  2bf9                 sub edi, ecx
// 0089778f  8d0c7a               lea ecx, [edx + edi*2]
// 00897792  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00897796  6a01                 push 1
// 00897798  2bd1                 sub edx, ecx
// 0089779a  52                   push edx
// 0089779b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089779f  2bc2                 sub eax, edx
// 008977a1  50                   push eax
// 008977a2  51                   push ecx
// 008977a3  894c2424             mov dword ptr [esp + 0x24], ecx
// 008977a7  52                   push edx
// 008977a8  eb3f                 jmp 0x8977e9
// 008977aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008977ae  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008977b2  8d41ff               lea eax, [ecx - 1]
// 008977b5  3bf8                 cmp edi, eax
// 008977b7  7537                 jne 0x8977f0
// 008977b9  8b542414             mov edx, dword ptr [esp + 0x14]
// 008977bd  3b542424             cmp edx, dword ptr [esp + 0x24]
// 008977c1  7e2d                 jle 0x8977f0
// 008977c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008977c7  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008977cb  7d23                 jge 0x8977f0
// 008977cd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008977d1  6a01                 push 1
// 008977d3  2bc2                 sub eax, edx
// 008977d5  50                   push eax
// 008977d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008977da  2be9                 sub ebp, ecx
// 008977dc  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 008977e0  2bc1                 sub eax, ecx
// 008977e2  50                   push eax
// 008977e3  52                   push edx
// 008977e4  894c2420             mov dword ptr [esp + 0x20], ecx
// 008977e8  51                   push ecx
// 008977e9  8bce                 mov ecx, esi
// 008977eb  e88205f1ff           call 0x7a7d72
// 008977f0  85db                 test ebx, ebx
// 008977f2  0f854affffff         jne 0x897742
// 008977f8  5f                   pop edi
// 008977f9  5d                   pop ebp
// 008977fa  5e                   pop esi
// 008977fb  5b                   pop ebx
// 008977fc  83c420               add esp, 0x20
// 008977ff  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?LongShadow@CXTShadowWnd@@IAEXPAVCShadowList@CXTShadowsManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
