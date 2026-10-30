// roc 2011-06 008f0220  unit: CXTShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0220
//
// 008f0220  83ec20               sub esp, 0x20
// 008f0223  53                   push ebx
// 008f0224  56                   push esi
// 008f0225  8bf1                 mov esi, ecx
// 008f0227  56                   push esi
// 008f0228  8d4c240c             lea ecx, [esp + 0xc]
// 008f022c  e8ffcaf6ff           call 0x85cd30
// 008f0231  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008f0235  8b5804               mov ebx, dword ptr [eax + 4]
// 008f0238  85db                 test ebx, ebx
// 008f023a  0f84ba000000         je 0x8f02fa
// 008f0240  55                   push ebp
// 008f0241  57                   push edi
// 008f0242  8bc3                 mov eax, ebx
// 008f0244  8b4008               mov eax, dword ptr [eax + 8]
// 008f0247  8b1b                 mov ebx, dword ptr [ebx]
// 008f0249  33c9                 xor ecx, ecx
// 008f024b  39485c               cmp dword ptr [eax + 0x5c], ecx
// 008f024e  0f94c1               sete cl
// 008f0251  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 008f0254  0f8596000000         jne 0x8f02f0
// 008f025a  50                   push eax
// 008f025b  8d4c2424             lea ecx, [esp + 0x24]
// 008f025f  e8cccaf6ff           call 0x85cd30
// 008f0264  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008f0268  7540                 jne 0x8f02aa
// 008f026a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f026e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f0272  8d41ff               lea eax, [ecx - 1]
// 008f0275  3bd0                 cmp edx, eax
// 008f0277  7577                 jne 0x8f02f0
// 008f0279  8b442418             mov eax, dword ptr [esp + 0x18]
// 008f027d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 008f0281  7d6d                 jge 0x8f02f0
// 008f0283  3b442420             cmp eax, dword ptr [esp + 0x20]
// 008f0287  7e67                 jle 0x8f02f0
// 008f0289  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008f028d  2bf9                 sub edi, ecx
// 008f028f  8d0c7a               lea ecx, [edx + edi*2]
// 008f0292  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008f0296  6a01                 push 1
// 008f0298  2bd1                 sub edx, ecx
// 008f029a  52                   push edx
// 008f029b  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f029f  2bc2                 sub eax, edx
// 008f02a1  50                   push eax
// 008f02a2  51                   push ecx
// 008f02a3  894c2424             mov dword ptr [esp + 0x24], ecx
// 008f02a7  52                   push edx
// 008f02a8  eb3f                 jmp 0x8f02e9
// 008f02aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f02ae  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f02b2  8d41ff               lea eax, [ecx - 1]
// 008f02b5  3bf8                 cmp edi, eax
// 008f02b7  7537                 jne 0x8f02f0
// 008f02b9  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f02bd  3b542424             cmp edx, dword ptr [esp + 0x24]
// 008f02c1  7e2d                 jle 0x8f02f0
// 008f02c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008f02c7  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 008f02cb  7d23                 jge 0x8f02f0
// 008f02cd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008f02d1  6a01                 push 1
// 008f02d3  2bc2                 sub eax, edx
// 008f02d5  50                   push eax
// 008f02d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008f02da  2be9                 sub ebp, ecx
// 008f02dc  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 008f02e0  2bc1                 sub eax, ecx
// 008f02e2  50                   push eax
// 008f02e3  52                   push edx
// 008f02e4  894c2420             mov dword ptr [esp + 0x20], ecx
// 008f02e8  51                   push ecx
// 008f02e9  8bce                 mov ecx, esi
// 008f02eb  e840a1f1ff           call 0x80a430
// 008f02f0  85db                 test ebx, ebx
// 008f02f2  0f854affffff         jne 0x8f0242
// 008f02f8  5f                   pop edi
// 008f02f9  5d                   pop ebp
// 008f02fa  5e                   pop esi
// 008f02fb  5b                   pop ebx
// 008f02fc  83c420               add esp, 0x20
// 008f02ff  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?LongShadow@CXTShadowWnd@@IAEXPAVCShadowList@CXTShadowsManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
