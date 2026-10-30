// from server: 100% by auto
// roc 2008-06 006a2950  unit: CXTPCommandBars  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2950
//
// 006a2950  83ec24               sub esp, 0x24
// 006a2953  53                   push ebx
// 006a2954  55                   push ebp
// 006a2955  8be9                 mov ebp, ecx
// 006a2957  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 006a295d  56                   push esi
// 006a295e  57                   push edi
// 006a295f  c74424141be80000     mov dword ptr [esp + 0x14], 0xe81b
// 006a2967  c744241800280000     mov dword ptr [esp + 0x18], 0x2800
// 006a296f  c744241c1ee80000     mov dword ptr [esp + 0x1c], 0xe81e
// 006a2977  c744242000820000     mov dword ptr [esp + 0x20], 0x8200
// 006a297f  c74424241ce80000     mov dword ptr [esp + 0x24], 0xe81c
// 006a2987  c744242800140000     mov dword ptr [esp + 0x28], 0x1400
// 006a298f  c744242c1de80000     mov dword ptr [esp + 0x2c], 0xe81d
// 006a2997  c744243000410000     mov dword ptr [esp + 0x30], 0x4100
// 006a299f  89442410             mov dword ptr [esp + 0x10], eax
// 006a29a3  33f6                 xor esi, esi
// 006a29a5  8d9d90000000         lea ebx, [ebp + 0x90]
// 006a29ab  eb03                 jmp 0x6a29b0
// 006a29ad  8d4900               lea ecx, [ecx]
// 006a29b0  8b0d3ce09700         mov ecx, dword ptr [0x97e03c]
// 006a29b6  e807e6ffff           call 0x6a0fc2
// 006a29bb  8b4cf414             mov ecx, dword ptr [esp + esi*8 + 0x14]
// 006a29bf  8b54f418             mov edx, dword ptr [esp + esi*8 + 0x18]
// 006a29c3  51                   push ecx
// 006a29c4  8bf8                 mov edi, eax
// 006a29c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a29ca  81ca00000056         or edx, 0x56000000
// 006a29d0  52                   push edx
// 006a29d1  50                   push eax
// 006a29d2  8bcf                 mov ecx, edi
// 006a29d4  896f6c               mov dword ptr [edi + 0x6c], ebp
// 006a29d7  e8d47e0700           call 0x71a8b0
// 006a29dc  85c0                 test eax, eax
// 006a29de  7505                 jne 0x6a29e5
// 006a29e0  e8a7951100           call 0x7bbf8c
// 006a29e5  893b                 mov dword ptr [ebx], edi
// 006a29e7  46                   inc esi
// 006a29e8  83c304               add ebx, 4
// 006a29eb  83fe04               cmp esi, 4
// 006a29ee  7cc0                 jl 0x6a29b0
// 006a29f0  5f                   pop edi
// 006a29f1  5e                   pop esi
// 006a29f2  5d                   pop ebp
// 006a29f3  5b                   pop ebx
// 006a29f4  83c424               add esp, 0x24
// 006a29f7  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?EnableDocking@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
