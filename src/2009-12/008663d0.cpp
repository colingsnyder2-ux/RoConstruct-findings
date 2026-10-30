// roc 2009-12 008663d0  unit: CXTPPropertyGridItem  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008663d0
//
// 008663d0  53                   push ebx
// 008663d1  57                   push edi
// 008663d2  8bf9                 mov edi, ecx
// 008663d4  837f2800             cmp dword ptr [edi + 0x28], 0
// 008663d8  7e7a                 jle 0x866454
// 008663da  8b4724               mov eax, dword ptr [edi + 0x24]
// 008663dd  8b08                 mov ecx, dword ptr [eax]
// 008663df  8b99bc000000         mov ebx, dword ptr [ecx + 0xbc]
// 008663e5  85db                 test ebx, ebx
// 008663e7  7416                 je 0x8663ff
// 008663e9  83bb4801000000       cmp dword ptr [ebx + 0x148], 0
// 008663f0  7507                 jne 0x8663f9
// 008663f2  8bcb                 mov ecx, ebx
// 008663f4  e807210000           call 0x868500
// 008663f9  ff8348010000         inc dword ptr [ebx + 0x148]
// 008663ff  56                   push esi
// 00866400  33f6                 xor esi, esi
// 00866402  397728               cmp dword ptr [edi + 0x28], esi
// 00866405  7e2a                 jle 0x866431
// 00866407  85f6                 test esi, esi
// 00866409  7c4d                 jl 0x866458
// 0086640b  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0086640e  7d48                 jge 0x866458
// 00866410  8b5724               mov edx, dword ptr [edi + 0x24]
// 00866413  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 00866416  e825020000           call 0x866640
// 0086641b  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0086641e  7d38                 jge 0x866458
// 00866420  8b4724               mov eax, dword ptr [edi + 0x24]
// 00866423  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00866426  e8b1d9f8ff           call 0x7f3ddc
// 0086642b  46                   inc esi
// 0086642c  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0086642f  7cd6                 jl 0x866407
// 00866431  6aff                 push -1
// 00866433  6a00                 push 0
// 00866435  8d4f20               lea ecx, [edi + 0x20]
// 00866438  e863effeff           call 0x8553a0
// 0086643d  85db                 test ebx, ebx
// 0086643f  741c                 je 0x86645d
// 00866441  838348010000ff       add dword ptr [ebx + 0x148], -1
// 00866448  7513                 jne 0x86645d
// 0086644a  5e                   pop esi
// 0086644b  5f                   pop edi
// 0086644c  8bcb                 mov ecx, ebx
// 0086644e  5b                   pop ebx
// 0086644f  e9ec420000           jmp 0x86a740
// 00866454  33db                 xor ebx, ebx
// 00866456  eba7                 jmp 0x8663ff
// 00866458  e8afd6f8ff           call 0x7f3b0c
// 0086645d  5e                   pop esi
// 0086645e  5f                   pop edi
// 0086645f  5b                   pop ebx
// 00866460  c3                   ret 
// copied from an identical function in another client (function ?Clear@CXTPPropertyGridItems@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp