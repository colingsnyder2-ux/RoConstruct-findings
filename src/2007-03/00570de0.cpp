// roc 2007-03 00570de0  unit: seg_00570000  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570de0
//
// 00570de0  6aff                 push -1
// 00570de2  68dc617500           push 0x7561dc
// 00570de7  64a100000000         mov eax, dword ptr fs:[0]
// 00570ded  50                   push eax
// 00570dee  64892500000000       mov dword ptr fs:[0], esp
// 00570df5  83ec0c               sub esp, 0xc
// 00570df8  8b442420             mov eax, dword ptr [esp + 0x20]
// 00570dfc  55                   push ebp
// 00570dfd  56                   push esi
// 00570dfe  57                   push edi
// 00570dff  8bf1                 mov esi, ecx
// 00570e01  6aff                 push -1
// 00570e03  50                   push eax
// 00570e04  89742414             mov dword ptr [esp + 0x14], esi
// 00570e08  c70664617800         mov dword ptr [esi], 0x786164
// 00570e0e  e8cdcafbff           call 0x52d8e0
// 00570e13  83c408               add esp, 8
// 00570e16  894604               mov dword ptr [esi + 4], eax
// 00570e19  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00570e1d  33ed                 xor ebp, ebp
// 00570e1f  3bfd                 cmp edi, ebp
// 00570e21  896c2420             mov dword ptr [esp + 0x20], ebp
// 00570e25  7405                 je 0x570e2c
// 00570e27  8d4708               lea eax, [edi + 8]
// 00570e2a  eb02                 jmp 0x570e2e
// 00570e2c  33c0                 xor eax, eax
// 00570e2e  50                   push eax
// 00570e2f  8d4e08               lea ecx, [esi + 8]
// 00570e32  e849feffff           call 0x570c80
// 00570e37  3bfd                 cmp edi, ebp
// 00570e39  c644242001           mov byte ptr [esp + 0x20], 1
// 00570e3e  7405                 je 0x570e45
// 00570e40  8d472c               lea eax, [edi + 0x2c]
// 00570e43  eb02                 jmp 0x570e47
// 00570e45  33c0                 xor eax, eax
// 00570e47  50                   push eax
// 00570e48  8d4e2c               lea ecx, [esi + 0x2c]
// 00570e4b  e890fdffff           call 0x570be0
// 00570e50  3bfd                 cmp edi, ebp
// 00570e52  c644242002           mov byte ptr [esp + 0x20], 2
// 00570e57  7405                 je 0x570e5e
// 00570e59  8d4750               lea eax, [edi + 0x50]
// 00570e5c  eb02                 jmp 0x570e60
// 00570e5e  33c0                 xor eax, eax
// 00570e60  50                   push eax
// 00570e61  8d4e50               lea ecx, [esi + 0x50]
// 00570e64  e817feffff           call 0x570c80
// 00570e69  c7060cb87a00         mov dword ptr [esi], 0x7ab80c
// 00570e6f  896e78               mov dword ptr [esi + 0x78], ebp
// 00570e72  896e7c               mov dword ptr [esi + 0x7c], ebp
// 00570e75  89ae80000000         mov dword ptr [esi + 0x80], ebp
// 00570e7b  c644242004           mov byte ptr [esp + 0x20], 4
// 00570e80  89be84000000         mov dword ptr [esi + 0x84], edi
// 00570e86  e885f8ffff           call 0x570710
// 00570e8b  8be8                 mov ebp, eax
// 00570e8d  8bcd                 mov ecx, ebp
// 00570e8f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00570e93  e8e85b1b00           call 0x726a80
// 00570e98  c644241401           mov byte ptr [esp + 0x14], 1
// 00570e9d  8d4c242c             lea ecx, [esp + 0x2c]
// 00570ea1  51                   push ecx
// 00570ea2  8d4f74               lea ecx, [edi + 0x74]
// 00570ea5  c644242405           mov byte ptr [esp + 0x24], 5
// 00570eaa  89742430             mov dword ptr [esp + 0x30], esi
// 00570eae  e88d430100           call 0x585240
// 00570eb3  8bcd                 mov ecx, ebp
// 00570eb5  c644242004           mov byte ptr [esp + 0x20], 4
// 00570eba  e8e15b1b00           call 0x726aa0
// 00570ebf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00570ec3  5f                   pop edi
// 00570ec4  8bc6                 mov eax, esi
// 00570ec6  5e                   pop esi
// 00570ec7  5d                   pop ebp
// 00570ec8  64890d00000000       mov dword ptr fs:[0], ecx
// 00570ecf  83c418               add esp, 0x18
// 00570ed2  c20800               ret 8
// library openrbx-client/App\reflection\reflection_object.cpp (function ??0ClassDescriptor@Reflection@RBX@@QAE@AAV012@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
