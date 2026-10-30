// roc 2009-12 008669c0  unit: CXTPPropertyGridItem  size: 348 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008669c0
//
// 008669c0  6aff                 push -1
// 008669c2  68e9ef9500           push 0x95efe9
// 008669c7  64a100000000         mov eax, dword ptr fs:[0]
// 008669cd  50                   push eax
// 008669ce  83ec14               sub esp, 0x14
// 008669d1  53                   push ebx
// 008669d2  56                   push esi
// 008669d3  57                   push edi
// 008669d4  a10052b600           mov eax, dword ptr [0xb65200]
// 008669d9  33c4                 xor eax, esp
// 008669db  50                   push eax
// 008669dc  8d442424             lea eax, [esp + 0x24]
// 008669e0  64a300000000         mov dword ptr fs:[0], eax
// 008669e6  8bf1                 mov esi, ecx
// 008669e8  8d86a4000000         lea eax, [esi + 0xa4]
// 008669ee  50                   push eax
// 008669ef  8d4c2414             lea ecx, [esp + 0x14]
// 008669f3  ff1594de9800         call dword ptr [0x98de94]
// 008669f9  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 008669ff  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00866a07  e82448f4ff           call 0x7ab230
// 00866a0c  85c0                 test eax, eax
// 00866a0e  7e42                 jle 0x866a52
// 00866a10  8d4c2414             lea ecx, [esp + 0x14]
// 00866a14  51                   push ecx
// 00866a15  8bce                 mov ecx, esi
// 00866a17  e8f4f6ffff           call 0x866110
// 00866a1c  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00866a22  e80948f4ff           call 0x7ab230
// 00866a27  8bf8                 mov edi, eax
// 00866a29  83ef01               sub edi, 1
// 00866a2c  7824                 js 0x866a52
// 00866a2e  8bff                 mov edi, edi
// 00866a30  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00866a36  57                   push edi
// 00866a37  e814100600           call 0x8c7a50
// 00866a3c  8b10                 mov edx, dword ptr [eax]
// 00866a3e  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 00866a44  8d4c2414             lea ecx, [esp + 0x14]
// 00866a48  51                   push ecx
// 00866a49  8bc8                 mov ecx, eax
// 00866a4b  ffd2                 call edx
// 00866a4d  83ef01               sub edi, 1
// 00866a50  79de                 jns 0x866a30
// 00866a52  f6868c00000001       test byte ptr [esi + 0x8c], 1
// 00866a59  8bce                 mov ecx, esi
// 00866a5b  0f8488000000         je 0x866ae9
// 00866a61  8b06                 mov eax, dword ptr [esi]
// 00866a63  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00866a69  ffd2                 call edx
// 00866a6b  8bf8                 mov edi, eax
// 00866a6d  8b1f                 mov ebx, dword ptr [edi]
// 00866a6f  8d4c2410             lea ecx, [esp + 0x10]
// 00866a73  81c360010000         add ebx, 0x160
// 00866a79  ff1580de9800         call dword ptr [0x98de80]
// 00866a7f  50                   push eax
// 00866a80  8b03                 mov eax, dword ptr [ebx]
// 00866a82  8bcf                 mov ecx, edi
// 00866a84  ffd0                 call eax
// 00866a86  8b16                 mov edx, dword ptr [esi]
// 00866a88  8b1f                 mov ebx, dword ptr [edi]
// 00866a8a  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00866a8d  8d442414             lea eax, [esp + 0x14]
// 00866a91  50                   push eax
// 00866a92  8bce                 mov ecx, esi
// 00866a94  81c368010000         add ebx, 0x168
// 00866a9a  ffd2                 call edx
// 00866a9c  8b10                 mov edx, dword ptr [eax]
// 00866a9e  83ec10               sub esp, 0x10
// 00866aa1  8bcc                 mov ecx, esp
// 00866aa3  8911                 mov dword ptr [ecx], edx
// 00866aa5  8b5004               mov edx, dword ptr [eax + 4]
// 00866aa8  895104               mov dword ptr [ecx + 4], edx
// 00866aab  8b5008               mov edx, dword ptr [eax + 8]
// 00866aae  8b400c               mov eax, dword ptr [eax + 0xc]
// 00866ab1  895108               mov dword ptr [ecx + 8], edx
// 00866ab4  8b13                 mov edx, dword ptr [ebx]
// 00866ab6  89410c               mov dword ptr [ecx + 0xc], eax
// 00866ab9  56                   push esi
// 00866aba  8bcf                 mov ecx, edi
// 00866abc  ffd2                 call edx
// 00866abe  8b06                 mov eax, dword ptr [esi]
// 00866ac0  8b5058               mov edx, dword ptr [eax + 0x58]
// 00866ac3  8bce                 mov ecx, esi
// 00866ac5  ffd2                 call edx
// 00866ac7  85c0                 test eax, eax
// 00866ac9  7505                 jne 0x866ad0
// 00866acb  39467c               cmp dword ptr [esi + 0x7c], eax
// 00866ace  7405                 je 0x866ad5
// 00866ad0  b801000000           mov eax, 1
// 00866ad5  6a00                 push 0
// 00866ad7  50                   push eax
// 00866ad8  8b4720               mov eax, dword ptr [edi + 0x20]
// 00866adb  68cf000000           push 0xcf
// 00866ae0  50                   push eax
// 00866ae1  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00866ae7  eb16                 jmp 0x866aff
// 00866ae9  8b16                 mov edx, dword ptr [esi]
// 00866aeb  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00866af1  ffd0                 call eax
// 00866af3  8b10                 mov edx, dword ptr [eax]
// 00866af5  8bc8                 mov ecx, eax
// 00866af7  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00866afd  ffd0                 call eax
// 00866aff  8d4c2410             lea ecx, [esp + 0x10]
// 00866b03  ff15c0de9800         call dword ptr [0x98dec0]
// 00866b09  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00866b0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00866b14  59                   pop ecx
// 00866b15  5f                   pop edi
// 00866b16  5e                   pop esi
// 00866b17  5b                   pop ebx
// 00866b18  83c420               add esp, 0x20
// 00866b1b  c3                   ret 
// copied from an identical function in another client (function ?OnSelect@CXTPPropertyGridItem@@MAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp