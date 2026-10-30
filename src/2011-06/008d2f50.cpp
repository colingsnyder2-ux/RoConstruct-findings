// roc 2011-06 008d2f50  unit: CXTPControlCustom  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2f50
//
// 008d2f50  53                   push ebx
// 008d2f51  56                   push esi
// 008d2f52  57                   push edi
// 008d2f53  8bf1                 mov esi, ecx
// 008d2f55  8d442410             lea eax, [esp + 0x10]
// 008d2f59  50                   push eax
// 008d2f5a  8dbec0000000         lea edi, [esi + 0xc0]
// 008d2f60  57                   push edi
// 008d2f61  ff15001ca400         call dword ptr [0xa41c00]
// 008d2f67  85c0                 test eax, eax
// 008d2f69  742e                 je 0x8d2f99
// 008d2f6b  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 008d2f71  85c9                 test ecx, ecx
// 008d2f73  0f84d4000000         je 0x8d304d
// 008d2f79  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008d2f7f  85c0                 test eax, eax
// 008d2f81  7504                 jne 0x8d2f87
// 008d2f83  33db                 xor ebx, ebx
// 008d2f85  eb03                 jmp 0x8d2f8a
// 008d2f87  8b5820               mov ebx, dword ptr [eax + 0x20]
// 008d2f8a  51                   push ecx
// 008d2f8b  ff15b819a400         call dword ptr [0xa419b8]
// 008d2f91  3bc3                 cmp eax, ebx
// 008d2f93  0f84b4000000         je 0x8d304d
// 008d2f99  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d2f9d  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d2fa1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d2fa5  890f                 mov dword ptr [edi], ecx
// 008d2fa7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d2fab  895704               mov dword ptr [edi + 4], edx
// 008d2fae  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 008d2fb4  894708               mov dword ptr [edi + 8], eax
// 008d2fb7  52                   push edx
// 008d2fb8  894f0c               mov dword ptr [edi + 0xc], ecx
// 008d2fbb  e86873f3ff           call 0x80a328
// 008d2fc0  8bf8                 mov edi, eax
// 008d2fc2  85ff                 test edi, edi
// 008d2fc4  0f8483000000         je 0x8d304d
// 008d2fca  8b4720               mov eax, dword ptr [edi + 0x20]
// 008d2fcd  85c0                 test eax, eax
// 008d2fcf  747c                 je 0x8d304d
// 008d2fd1  50                   push eax
// 008d2fd2  ff15ec1ba400         call dword ptr [0xa41bec]
// 008d2fd8  85c0                 test eax, eax
// 008d2fda  7471                 je 0x8d304d
// 008d2fdc  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008d2fe2  50                   push eax
// 008d2fe3  8bcf                 mov ecx, edi
// 008d2fe5  e8167df7ff           call 0x84ad00
// 008d2fea  6a00                 push 0
// 008d2fec  6800000040           push 0x40000000
// 008d2ff1  6800000080           push 0x80000000
// 008d2ff6  8bcf                 mov ecx, edi
// 008d2ff8  e8db77f3ff           call 0x80a7d8
// 008d2ffd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d3001  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008d3005  2b8e8c010000         sub ecx, dword ptr [esi + 0x18c]
// 008d300b  039e84010000         add ebx, dword ptr [esi + 0x184]
// 008d3011  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d3015  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d3019  039680010000         add edx, dword ptr [esi + 0x180]
// 008d301f  2b8688010000         sub eax, dword ptr [esi + 0x188]
// 008d3025  6a01                 push 1
// 008d3027  894c2420             mov dword ptr [esp + 0x20], ecx
// 008d302b  2bcb                 sub ecx, ebx
// 008d302d  51                   push ecx
// 008d302e  89442420             mov dword ptr [esp + 0x20], eax
// 008d3032  2bc2                 sub eax, edx
// 008d3034  50                   push eax
// 008d3035  53                   push ebx
// 008d3036  52                   push edx
// 008d3037  8bcf                 mov ecx, edi
// 008d3039  89542424             mov dword ptr [esp + 0x24], edx
// 008d303d  895c2428             mov dword ptr [esp + 0x28], ebx
// 008d3041  e8ea73f3ff           call 0x80a430
// 008d3046  8bce                 mov ecx, esi
// 008d3048  e8c3fbffff           call 0x8d2c10
// 008d304d  5f                   pop edi
// 008d304e  5e                   pop esi
// 008d304f  5b                   pop ebx
// 008d3050  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetRect@CXTPControlCustom@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
