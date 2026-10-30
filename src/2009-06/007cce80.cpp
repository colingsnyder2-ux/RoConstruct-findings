// roc 2009-06 007cce80  unit: CXTRegistryManager  size: 457 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cce80
//
// 007cce80  6aff                 push -1
// 007cce82  68b1e68700           push 0x87e6b1
// 007cce87  64a100000000         mov eax, dword ptr fs:[0]
// 007cce8d  50                   push eax
// 007cce8e  51                   push ecx
// 007cce8f  53                   push ebx
// 007cce90  55                   push ebp
// 007cce91  56                   push esi
// 007cce92  57                   push edi
// 007cce93  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007cce98  33c4                 xor eax, esp
// 007cce9a  50                   push eax
// 007cce9b  8d442418             lea eax, [esp + 0x18]
// 007cce9f  64a300000000         mov dword ptr fs:[0], eax
// 007ccea5  8bf1                 mov esi, ecx
// 007ccea7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007cceab  85ff                 test edi, edi
// 007ccead  0f84cd000000         je 0x7ccf80
// 007cceb3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007cceb7  85db                 test ebx, ebx
// 007cceb9  0f84c1000000         je 0x7ccf80
// 007ccebf  c70700000000         mov dword ptr [edi], 0
// 007ccec5  b9c426a500           mov ecx, 0xa526c4
// 007cceca  c70300000000         mov dword ptr [ebx], 0
// 007cced0  ff155cfb8900         call dword ptr [0x89fb5c]
// 007cced6  84c0                 test al, al
// 007cced8  0f84c8000000         je 0x7ccfa6
// 007ccede  8bce                 mov ecx, esi
// 007ccee0  e89bfaffff           call 0x7cc980
// 007ccee5  85c0                 test eax, eax
// 007ccee7  0f8493000000         je 0x7ccf80
// 007cceed  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ccef1  8b06                 mov eax, dword ptr [esi]
// 007ccef3  8b5008               mov edx, dword ptr [eax + 8]
// 007ccef6  6819000200           push 0x20019
// 007ccefb  51                   push ecx
// 007ccefc  8bce                 mov ecx, esi
// 007ccefe  ffd2                 call edx
// 007ccf00  8be8                 mov ebp, eax
// 007ccf02  896c2428             mov dword ptr [esp + 0x28], ebp
// 007ccf06  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007ccf0e  85ed                 test ebp, ebp
// 007ccf10  746e                 je 0x7ccf80
// 007ccf12  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007ccf16  8d442430             lea eax, [esp + 0x30]
// 007ccf1a  50                   push eax
// 007ccf1b  6a00                 push 0
// 007ccf1d  8d4c241c             lea ecx, [esp + 0x1c]
// 007ccf21  51                   push ecx
// 007ccf22  6a00                 push 0
// 007ccf24  53                   push ebx
// 007ccf25  55                   push ebp
// 007ccf26  ff1520e08900         call dword ptr [0x89e020]
// 007ccf2c  894610               mov dword ptr [esi + 0x10], eax
// 007ccf2f  85c0                 test eax, eax
// 007ccf31  7546                 jne 0x7ccf79
// 007ccf33  8b442430             mov eax, dword ptr [esp + 0x30]
// 007ccf37  8b542434             mov edx, dword ptr [esp + 0x34]
// 007ccf3b  50                   push eax
// 007ccf3c  8902                 mov dword ptr [edx], eax
// 007ccf3e  e8d7bdf4ff           call 0x718d1a
// 007ccf43  83c404               add esp, 4
// 007ccf46  8d4c2430             lea ecx, [esp + 0x30]
// 007ccf4a  51                   push ecx
// 007ccf4b  50                   push eax
// 007ccf4c  8d54241c             lea edx, [esp + 0x1c]
// 007ccf50  52                   push edx
// 007ccf51  6a00                 push 0
// 007ccf53  53                   push ebx
// 007ccf54  55                   push ebp
// 007ccf55  8907                 mov dword ptr [edi], eax
// 007ccf57  ff1520e08900         call dword ptr [0x89e020]
// 007ccf5d  894610               mov dword ptr [esi + 0x10], eax
// 007ccf60  85c0                 test eax, eax
// 007ccf62  7434                 je 0x7ccf98
// 007ccf64  8b07                 mov eax, dword ptr [edi]
// 007ccf66  85c0                 test eax, eax
// 007ccf68  740f                 je 0x7ccf79
// 007ccf6a  50                   push eax
// 007ccf6b  e86ebdf4ff           call 0x718cde
// 007ccf70  83c404               add esp, 4
// 007ccf73  c70700000000         mov dword ptr [edi], 0
// 007ccf79  55                   push ebp
// 007ccf7a  ff1508e08900         call dword ptr [0x89e008]
// 007ccf80  33c0                 xor eax, eax
// 007ccf82  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ccf86  64890d00000000       mov dword ptr fs:[0], ecx
// 007ccf8d  59                   pop ecx
// 007ccf8e  5f                   pop edi
// 007ccf8f  5e                   pop esi
// 007ccf90  5d                   pop ebp
// 007ccf91  5b                   pop ebx
// 007ccf92  83c410               add esp, 0x10
// 007ccf95  c21000               ret 0x10
// 007ccf98  55                   push ebp
// 007ccf99  ff1508e08900         call dword ptr [0x89e008]
// 007ccf9f  b801000000           mov eax, 1
// 007ccfa4  ebdc                 jmp 0x7ccf82
// 007ccfa6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007ccfaa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ccfae  6a00                 push 0
// 007ccfb0  50                   push eax
// 007ccfb1  51                   push ecx
// 007ccfb2  8d542440             lea edx, [esp + 0x40]
// 007ccfb6  52                   push edx
// 007ccfb7  8bce                 mov ecx, esi
// 007ccfb9  e812fcffff           call 0x7ccbd0
// 007ccfbe  8d4c2434             lea ecx, [esp + 0x34]
// 007ccfc2  c744242001000000     mov dword ptr [esp + 0x20], 1
// 007ccfca  ff155cfb8900         call dword ptr [0x89fb5c]
// 007ccfd0  8d4c2434             lea ecx, [esp + 0x34]
// 007ccfd4  84c0                 test al, al
// 007ccfd6  7408                 je 0x7ccfe0
// 007ccfd8  ff1510fd8900         call dword ptr [0x89fd10]
// 007ccfde  eba0                 jmp 0x7ccf80
// 007ccfe0  ff1554fb8900         call dword ptr [0x89fb54]
// 007ccfe6  8be8                 mov ebp, eax
// 007ccfe8  99                   cdq 
// 007ccfe9  2bc2                 sub eax, edx
// 007ccfeb  d1f8                 sar eax, 1
// 007ccfed  50                   push eax
// 007ccfee  8903                 mov dword ptr [ebx], eax
// 007ccff0  e825bdf4ff           call 0x718d1a
// 007ccff5  83c404               add esp, 4
// 007ccff8  33f6                 xor esi, esi
// 007ccffa  8907                 mov dword ptr [edi], eax
// 007ccffc  85ed                 test ebp, ebp
// 007ccffe  7e35                 jle 0x7cd035
// 007cd000  8d4601               lea eax, [esi + 1]
// 007cd003  50                   push eax
// 007cd004  8d4c2438             lea ecx, [esp + 0x38]
// 007cd008  ff15e0f98900         call dword ptr [0x89f9e0]
// 007cd00e  8ad8                 mov bl, al
// 007cd010  fecb                 dec bl
// 007cd012  c0e304               shl bl, 4
// 007cd015  56                   push esi
// 007cd016  8d4c2438             lea ecx, [esp + 0x38]
// 007cd01a  80eb41               sub bl, 0x41
// 007cd01d  ff15e0f98900         call dword ptr [0x89f9e0]
// 007cd023  8b17                 mov edx, dword ptr [edi]
// 007cd025  8bce                 mov ecx, esi
// 007cd027  02c3                 add al, bl
// 007cd029  d1e9                 shr ecx, 1
// 007cd02b  83c602               add esi, 2
// 007cd02e  3bf5                 cmp esi, ebp
// 007cd030  880411               mov byte ptr [ecx + edx], al
// 007cd033  7ccb                 jl 0x7cd000
// 007cd035  8d4c2434             lea ecx, [esp + 0x34]
// 007cd039  ff1510fd8900         call dword ptr [0x89fd10]
// 007cd03f  b801000000           mov eax, 1
// 007cd044  e939ffffff           jmp 0x7ccf82
// copied from an identical function in another client (function ?GetProfileBinary@CXTRegistryManager@@QAEHPBD0PAPAEPAI@Z)

// from server: 100% by tester
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lang: cpp
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTRegistryManager.cpp