// roc 2010-06 0077f800  unit: seg_00770000  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f800
//
// 0077f800  83ec08               sub esp, 8
// 0077f803  53                   push ebx
// 0077f804  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 0077f807  55                   push ebp
// 0077f808  56                   push esi
// 0077f809  8b33                 mov esi, dword ptr [ebx]
// 0077f80b  33ed                 xor ebp, ebp
// 0077f80d  c6464a00             mov byte ptr [esi + 0x4a], 0
// 0077f811  837f1029             cmp dword ptr [edi + 0x10], 0x29
// 0077f815  895c2410             mov dword ptr [esp + 0x10], ebx
// 0077f819  8974240c             mov dword ptr [esp + 0xc], esi
// 0077f81d  0f84e3000000         je 0x77f906
// 0077f823  eb0b                 jmp 0x77f830
// 0077f825  8da42400000000       lea esp, [esp]
// 0077f82c  8d642400             lea esp, [esp]
// 0077f830  8b4710               mov eax, dword ptr [edi + 0x10]
// 0077f833  2d17010000           sub eax, 0x117
// 0077f838  0f84a1000000         je 0x77f8df
// 0077f83e  83e806               sub eax, 6
// 0077f841  7413                 je 0x77f856
// 0077f843  684c31a500           push 0xa5314c
// 0077f848  57                   push edi
// 0077f849  e8422d0000           call 0x782590
// 0077f84e  83c408               add esp, 8
// 0077f851  e996000000           jmp 0x77f8ec
// 0077f856  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 0077f859  57                   push edi
// 0077f85a  e821410000           call 0x783980
// 0077f85f  8b7730               mov esi, dword ptr [edi + 0x30]
// 0077f862  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 0077f866  8d4c2801             lea ecx, [eax + ebp + 1]
// 0077f86a  83c404               add esp, 4
// 0077f86d  81f9c8000000         cmp ecx, 0xc8
// 0077f873  7e47                 jle 0x77f8bc
// 0077f875  8b16                 mov edx, dword ptr [esi]
// 0077f877  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0077f87a  68dc30a500           push 0xa530dc
// 0077f87f  68c8000000           push 0xc8
// 0077f884  85c0                 test eax, eax
// 0077f886  7513                 jne 0x77f89b
// 0077f888  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077f88b  687030a500           push 0xa53070
// 0077f890  50                   push eax
// 0077f891  e84a35fbff           call 0x732de0
// 0077f896  83c410               add esp, 0x10
// 0077f899  eb12                 jmp 0x77f8ad
// 0077f89b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0077f89e  50                   push eax
// 0077f89f  684830a500           push 0xa53048
// 0077f8a4  51                   push ecx
// 0077f8a5  e83635fbff           call 0x732de0
// 0077f8aa  83c414               add esp, 0x14
// 0077f8ad  8b560c               mov edx, dword ptr [esi + 0xc]
// 0077f8b0  6a00                 push 0
// 0077f8b2  50                   push eax
// 0077f8b3  52                   push edx
// 0077f8b4  e8372c0000           call 0x7824f0
// 0077f8b9  83c40c               add esp, 0xc
// 0077f8bc  53                   push ebx
// 0077f8bd  57                   push edi
// 0077f8be  e85df3ffff           call 0x77ec20
// 0077f8c3  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0077f8c7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0077f8cb  03cd                 add ecx, ebp
// 0077f8cd  83c408               add esp, 8
// 0077f8d0  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 0077f8d8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0077f8dc  45                   inc ebp
// 0077f8dd  eb0d                 jmp 0x77f8ec
// 0077f8df  57                   push edi
// 0077f8e0  e89b400000           call 0x783980
// 0077f8e5  83c404               add esp, 4
// 0077f8e8  804e4a02             or byte ptr [esi + 0x4a], 2
// 0077f8ec  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 0077f8f0  7514                 jne 0x77f906
// 0077f8f2  837f102c             cmp dword ptr [edi + 0x10], 0x2c
// 0077f8f6  750e                 jne 0x77f906
// 0077f8f8  57                   push edi
// 0077f8f9  e882400000           call 0x783980
// 0077f8fe  83c404               add esp, 4
// 0077f901  e92affffff           jmp 0x77f830
// 0077f906  8bd5                 mov edx, ebp
// 0077f908  8bc7                 mov eax, edi
// 0077f90a  e8b1f3ffff           call 0x77ecc0
// 0077f90f  8a564a               mov dl, byte ptr [esi + 0x4a]
// 0077f912  8a4332               mov al, byte ptr [ebx + 0x32]
// 0077f915  80e201               and dl, 1
// 0077f918  2ac2                 sub al, dl
// 0077f91a  884649               mov byte ptr [esi + 0x49], al
// 0077f91d  0fb64b32             movzx ecx, byte ptr [ebx + 0x32]
// 0077f921  51                   push ecx
// 0077f922  53                   push ebx
// 0077f923  e898fd0000           call 0x78f6c0
// 0077f928  83c408               add esp, 8
// 0077f92b  5e                   pop esi
// 0077f92c  5d                   pop ebp
// 0077f92d  5b                   pop ebx
// 0077f92e  83c408               add esp, 8
// 0077f931  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?parlist@@YAXPAULexState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
