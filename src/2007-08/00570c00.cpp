// roc 2007-08 00570c00  unit: RBX::Reflection::ClassDescriptor  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570c00
//
// 00570c00  6aff                 push -1
// 00570c02  686c4d7500           push 0x754d6c
// 00570c07  64a100000000         mov eax, dword ptr fs:[0]
// 00570c0d  50                   push eax
// 00570c0e  64892500000000       mov dword ptr fs:[0], esp
// 00570c15  83ec0c               sub esp, 0xc
// 00570c18  8b442420             mov eax, dword ptr [esp + 0x20]
// 00570c1c  55                   push ebp
// 00570c1d  56                   push esi
// 00570c1e  57                   push edi
// 00570c1f  8bf1                 mov esi, ecx
// 00570c21  6aff                 push -1
// 00570c23  50                   push eax
// 00570c24  89742414             mov dword ptr [esp + 0x14], esi
// 00570c28  c706b4707800         mov dword ptr [esi], 0x7870b4
// 00570c2e  e80dbdfbff           call 0x52c940
// 00570c33  83c408               add esp, 8
// 00570c36  894604               mov dword ptr [esi + 4], eax
// 00570c39  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00570c3d  33ed                 xor ebp, ebp
// 00570c3f  3bfd                 cmp edi, ebp
// 00570c41  896c2420             mov dword ptr [esp + 0x20], ebp
// 00570c45  7405                 je 0x570c4c
// 00570c47  8d4708               lea eax, [edi + 8]
// 00570c4a  eb02                 jmp 0x570c4e
// 00570c4c  33c0                 xor eax, eax
// 00570c4e  50                   push eax
// 00570c4f  8d4e08               lea ecx, [esi + 8]
// 00570c52  e8a9fdffff           call 0x570a00
// 00570c57  3bfd                 cmp edi, ebp
// 00570c59  c644242001           mov byte ptr [esp + 0x20], 1
// 00570c5e  7405                 je 0x570c65
// 00570c60  8d472c               lea eax, [edi + 0x2c]
// 00570c63  eb02                 jmp 0x570c67
// 00570c65  33c0                 xor eax, eax
// 00570c67  50                   push eax
// 00570c68  8d4e2c               lea ecx, [esi + 0x2c]
// 00570c6b  e830feffff           call 0x570aa0
// 00570c70  3bfd                 cmp edi, ebp
// 00570c72  c644242002           mov byte ptr [esp + 0x20], 2
// 00570c77  7405                 je 0x570c7e
// 00570c79  8d4750               lea eax, [edi + 0x50]
// 00570c7c  eb02                 jmp 0x570c80
// 00570c7e  33c0                 xor eax, eax
// 00570c80  50                   push eax
// 00570c81  8d4e50               lea ecx, [esi + 0x50]
// 00570c84  e877fdffff           call 0x570a00
// 00570c89  c70624a17a00         mov dword ptr [esi], 0x7aa124
// 00570c8f  896e78               mov dword ptr [esi + 0x78], ebp
// 00570c92  896e7c               mov dword ptr [esi + 0x7c], ebp
// 00570c95  89ae80000000         mov dword ptr [esi + 0x80], ebp
// 00570c9b  c644242004           mov byte ptr [esp + 0x20], 4
// 00570ca0  89be84000000         mov dword ptr [esi + 0x84], edi
// 00570ca6  e815fbffff           call 0x5707c0
// 00570cab  8be8                 mov ebp, eax
// 00570cad  8bcd                 mov ecx, ebp
// 00570caf  896c2410             mov dword ptr [esp + 0x10], ebp
// 00570cb3  e8984a1b00           call 0x725750
// 00570cb8  c644241401           mov byte ptr [esp + 0x14], 1
// 00570cbd  8d4c242c             lea ecx, [esp + 0x2c]
// 00570cc1  51                   push ecx
// 00570cc2  8d4f74               lea ecx, [edi + 0x74]
// 00570cc5  c644242405           mov byte ptr [esp + 0x24], 5
// 00570cca  89742430             mov dword ptr [esp + 0x30], esi
// 00570cce  e89d330400           call 0x5b4070
// 00570cd3  8bcd                 mov ecx, ebp
// 00570cd5  c644242004           mov byte ptr [esp + 0x20], 4
// 00570cda  e8914a1b00           call 0x725770
// 00570cdf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00570ce3  5f                   pop edi
// 00570ce4  8bc6                 mov eax, esi
// 00570ce6  5e                   pop esi
// 00570ce7  5d                   pop ebp
// 00570ce8  64890d00000000       mov dword ptr fs:[0], ecx
// 00570cef  83c418               add esp, 0x18
// 00570cf2  c20800               ret 8
// library openrbx-client/App\reflection\reflection_object.cpp (function ??0ClassDescriptor@Reflection@RBX@@QAE@AAV012@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
