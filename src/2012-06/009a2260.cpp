// roc 2012-06 009a2260  unit: CXTPCommandBars  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2260
//
// 009a2260  83ec24               sub esp, 0x24
// 009a2263  53                   push ebx
// 009a2264  55                   push ebp
// 009a2265  8be9                 mov ebp, ecx
// 009a2267  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 009a226d  56                   push esi
// 009a226e  57                   push edi
// 009a226f  c74424141be80000     mov dword ptr [esp + 0x14], 0xe81b
// 009a2277  c744241800280000     mov dword ptr [esp + 0x18], 0x2800
// 009a227f  c744241c1ee80000     mov dword ptr [esp + 0x1c], 0xe81e
// 009a2287  c744242000820000     mov dword ptr [esp + 0x20], 0x8200
// 009a228f  c74424241ce80000     mov dword ptr [esp + 0x24], 0xe81c
// 009a2297  c744242800140000     mov dword ptr [esp + 0x28], 0x1400
// 009a229f  c744242c1de80000     mov dword ptr [esp + 0x2c], 0xe81d
// 009a22a7  c744243000410000     mov dword ptr [esp + 0x30], 0x4100
// 009a22af  89442410             mov dword ptr [esp + 0x10], eax
// 009a22b3  33f6                 xor esi, esi
// 009a22b5  8d9d90000000         lea ebx, [ebp + 0x90]
// 009a22bb  eb03                 jmp 0x9a22c0
// 009a22bd  8d4900               lea ecx, [ecx]
// 009a22c0  8b0dd493e500         mov ecx, dword ptr [0xe593d4]
// 009a22c6  e82108feff           call 0x982aec
// 009a22cb  8b4cf414             mov ecx, dword ptr [esp + esi*8 + 0x14]
// 009a22cf  8b54f418             mov edx, dword ptr [esp + esi*8 + 0x18]
// 009a22d3  51                   push ecx
// 009a22d4  8bf8                 mov edi, eax
// 009a22d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 009a22da  81ca00000056         or edx, 0x56000000
// 009a22e0  52                   push edx
// 009a22e1  50                   push eax
// 009a22e2  8bcf                 mov ecx, edi
// 009a22e4  896f6c               mov dword ptr [edi + 0x6c], ebp
// 009a22e7  e894840700           call 0xa1a780
// 009a22ec  85c0                 test eax, eax
// 009a22ee  7505                 jne 0x9a22f5
// 009a22f0  e8f1730f00           call 0xa996e6
// 009a22f5  893b                 mov dword ptr [ebx], edi
// 009a22f7  46                   inc esi
// 009a22f8  83c304               add ebx, 4
// 009a22fb  83fe04               cmp esi, 4
// 009a22fe  7cc0                 jl 0x9a22c0
// 009a2300  5f                   pop edi
// 009a2301  5e                   pop esi
// 009a2302  5d                   pop ebp
// 009a2303  5b                   pop ebx
// 009a2304  83c424               add esp, 0x24
// 009a2307  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?EnableDocking@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
