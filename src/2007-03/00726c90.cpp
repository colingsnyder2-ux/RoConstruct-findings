// roc 2007-03 00726c90  unit: seg_00720000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726c90
//
// 00726c90  83ec14               sub esp, 0x14
// 00726c93  53                   push ebx
// 00726c94  8b1de4d17700         mov ebx, dword ptr [0x77d1e4]
// 00726c9a  55                   push ebp
// 00726c9b  56                   push esi
// 00726c9c  8b742424             mov esi, dword ptr [esp + 0x24]
// 00726ca0  57                   push edi
// 00726ca1  33ed                 xor ebp, ebp
// 00726ca3  8b0e                 mov ecx, dword ptr [esi]
// 00726ca5  8b5604               mov edx, dword ptr [esi + 4]
// 00726ca8  8d442410             lea eax, [esp + 0x10]
// 00726cac  50                   push eax
// 00726cad  83ec10               sub esp, 0x10
// 00726cb0  8bc4                 mov eax, esp
// 00726cb2  8908                 mov dword ptr [eax], ecx
// 00726cb4  8b4e08               mov ecx, dword ptr [esi + 8]
// 00726cb7  895004               mov dword ptr [eax + 4], edx
// 00726cba  8b560c               mov edx, dword ptr [esi + 0xc]
// 00726cbd  894808               mov dword ptr [eax + 8], ecx
// 00726cc0  89500c               mov dword ptr [eax + 0xc], edx
// 00726cc3  e848030000           call 0x727010
// 00726cc8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00726ccc  83c414               add esp, 0x14
// 00726ccf  50                   push eax
// 00726cd0  ffd3                 call ebx
// 00726cd2  8d4c2414             lea ecx, [esp + 0x14]
// 00726cd6  6a01                 push 1
// 00726cd8  51                   push ecx
// 00726cd9  e8c2020000           call 0x726fa0
// 00726cde  8b06                 mov eax, dword ptr [esi]
// 00726ce0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00726ce4  8b4e04               mov ecx, dword ptr [esi + 4]
// 00726ce7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00726ceb  83c408               add esp, 8
// 00726cee  3bc2                 cmp eax, edx
// 00726cf0  751f                 jne 0x726d11
// 00726cf2  3bcf                 cmp ecx, edi
// 00726cf4  751d                 jne 0x726d13
// 00726cf6  8b4608               mov eax, dword ptr [esi + 8]
// 00726cf9  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00726cfd  85c0                 test eax, eax
// 00726cff  7e08                 jle 0x726d09
// 00726d01  83c501               add ebp, 1
// 00726d04  83fd05               cmp ebp, 5
// 00726d07  7c9a                 jl 0x726ca3
// 00726d09  5f                   pop edi
// 00726d0a  5e                   pop esi
// 00726d0b  5d                   pop ebp
// 00726d0c  5b                   pop ebx
// 00726d0d  83c414               add esp, 0x14
// 00726d10  c3                   ret 
// 00726d11  3bcf                 cmp ecx, edi
// 00726d13  7cf4                 jl 0x726d09
// 00726d15  7fea                 jg 0x726d01
// 00726d17  3bc2                 cmp eax, edx
// 00726d19  76ee                 jbe 0x726d09
// 00726d1b  ebe4                 jmp 0x726d01
// library boost-1.34.1/libs\thread\src\thread.cpp (function ?sleep@thread@boost@@SAXABUxtime@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/thread.cpp
