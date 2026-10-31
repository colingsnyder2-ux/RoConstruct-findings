// roc 2010-06 00407620  unit: VCApp::?$CComAggObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00407620
//
// 00407620  55                   push ebp
// 00407621  8bec                 mov ebp, esp
// 00407623  6aff                 push -1
// 00407625  6878e89700           push 0x97e878
// 0040762a  64a100000000         mov eax, dword ptr fs:[0]
// 00407630  50                   push eax
// 00407631  64892500000000       mov dword ptr fs:[0], esp
// 00407638  51                   push ecx
// 00407639  53                   push ebx
// 0040763a  56                   push esi
// 0040763b  33f6                 xor esi, esi
// 0040763d  57                   push edi
// 0040763e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00407641  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00407644  8975fc               mov dword ptr [ebp - 4], esi
// 00407647  3bde                 cmp ebx, esi
// 00407649  7479                 je 0x4076c4
// 0040764b  53                   push ebx
// 0040764c  ff15a8a39e00         call dword ptr [0x9ea3a8]
// 00407652  56                   push esi
// 00407653  40                   inc eax
// 00407654  99                   cdq 
// 00407655  6a02                 push 2
// 00407657  52                   push edx
// 00407658  50                   push eax
// 00407659  e852153a00           call 0x7a8bb0
// 0040765e  8bf8                 mov edi, eax
// 00407660  0500000080           add eax, 0x80000000
// 00407665  13d6                 adc edx, esi
// 00407667  85d2                 test edx, edx
// 00407669  7759                 ja 0x4076c4
// 0040766b  7205                 jb 0x407672
// 0040766d  83f8ff               cmp eax, -1
// 00407670  7752                 ja 0x4076c4
// 00407672  81ff00040000         cmp edi, 0x400
// 00407678  7f18                 jg 0x407692
// 0040767a  57                   push edi
// 0040767b  e8d0c4ffff           call 0x403b50
// 00407680  83c404               add esp, 4
// 00407683  84c0                 test al, al
// 00407685  740b                 je 0x407692
// 00407687  8bc7                 mov eax, edi
// 00407689  e8f2143a00           call 0x7a8b80
// 0040768e  8bc4                 mov eax, esp
// 00407690  eb0c                 jmp 0x40769e
// 00407692  57                   push edi
// 00407693  8d4df0               lea ecx, [ebp - 0x10]
// 00407696  e855caffff           call 0x4040f0
// 0040769b  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 0040769e  6a03                 push 3
// 004076a0  57                   push edi
// 004076a1  53                   push ebx
// 004076a2  50                   push eax
// 004076a3  e8b8b4ffff           call 0x402b60
// 004076a8  85c0                 test eax, eax
// 004076aa  751f                 jne 0x4076cb
// 004076ac  85f6                 test esi, esi
// 004076ae  7414                 je 0x4076c4
// 004076b0  8b3d08aa9e00         mov edi, dword ptr [0x9eaa08]
// 004076b6  8bc6                 mov eax, esi
// 004076b8  8b36                 mov esi, dword ptr [esi]
// 004076ba  50                   push eax
// 004076bb  ffd7                 call edi
// 004076bd  83c404               add esp, 4
// 004076c0  85f6                 test esi, esi
// 004076c2  75f2                 jne 0x4076b6
// 004076c4  b80e000780           mov eax, 0x8007000e
// 004076c9  eb35                 jmp 0x407700
// 004076cb  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004076ce  6a01                 push 1
// 004076d0  50                   push eax
// 004076d1  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 004076d5  50                   push eax
// 004076d6  51                   push ecx
// 004076d7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004076da  e8f1fcffff           call 0x4073d0
// 004076df  8bd8                 mov ebx, eax
// 004076e1  85f6                 test esi, esi
// 004076e3  7419                 je 0x4076fe
// 004076e5  8b3d08aa9e00         mov edi, dword ptr [0x9eaa08]
// 004076eb  eb03                 jmp 0x4076f0
// 004076ed  8d4900               lea ecx, [ecx]
// 004076f0  8bc6                 mov eax, esi
// 004076f2  8b36                 mov esi, dword ptr [esi]
// 004076f4  50                   push eax
// 004076f5  ffd7                 call edi
// 004076f7  83c404               add esp, 4
// 004076fa  85f6                 test esi, esi
// 004076fc  75f2                 jne 0x4076f0
// 004076fe  8bc3                 mov eax, ebx
// 00407700  8d65e4               lea esp, [ebp - 0x1c]
// 00407703  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407706  64890d00000000       mov dword ptr fs:[0], ecx
// 0040770d  5f                   pop edi
// 0040770e  5e                   pop esi
// 0040770f  5b                   pop ebx
// 00407710  8be5                 mov esp, ebp
// 00407712  5d                   pop ebp
// 00407713  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceRegister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp