// from server: 100% by auto
// roc 2012-06 009f07c0  unit: CXTPPropertyGridView  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f07c0
//
// 009f07c0  83ec1c               sub esp, 0x1c
// 009f07c3  57                   push edi
// 009f07c4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 009f07c8  894c2404             mov dword ptr [esp + 4], ecx
// 009f07cc  85ff                 test edi, edi
// 009f07ce  750c                 jne 0x9f07dc
// 009f07d0  b857000780           mov eax, 0x80070057
// 009f07d5  5f                   pop edi
// 009f07d6  83c41c               add esp, 0x1c
// 009f07d9  c20c00               ret 0xc
// 009f07dc  56                   push esi
// 009f07dd  33c0                 xor eax, eax
// 009f07df  8d71ac               lea esi, [ecx - 0x54]
// 009f07e2  668907               mov word ptr [edi], ax
// 009f07e5  85f6                 test esi, esi
// 009f07e7  7405                 je 0x9f07ee
// 009f07e9  394620               cmp dword ptr [esi + 0x20], eax
// 009f07ec  750d                 jne 0x9f07fb
// 009f07ee  5e                   pop esi
// 009f07ef  b801000000           mov eax, 1
// 009f07f4  5f                   pop edi
// 009f07f5  83c41c               add esp, 0x1c
// 009f07f8  c20c00               ret 0xc
// 009f07fb  53                   push ebx
// 009f07fc  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 009f0800  55                   push ebp
// 009f0801  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 009f0805  56                   push esi
// 009f0806  8d4c2420             lea ecx, [esp + 0x20]
// 009f080a  e83149feff           call 0x9d5140
// 009f080f  55                   push ebp
// 009f0810  53                   push ebx
// 009f0811  50                   push eax
// 009f0812  ff15483bb200         call dword ptr [0xb23b48]
// 009f0818  85c0                 test eax, eax
// 009f081a  750f                 jne 0x9f082b
// 009f081c  5d                   pop ebp
// 009f081d  5b                   pop ebx
// 009f081e  5e                   pop esi
// 009f081f  b801000000           mov eax, 1
// 009f0824  5f                   pop edi
// 009f0825  83c41c               add esp, 0x1c
// 009f0828  c20c00               ret 0xc
// 009f082b  8b442410             mov eax, dword ptr [esp + 0x10]
// 009f082f  b903000000           mov ecx, 3
// 009f0834  8d542414             lea edx, [esp + 0x14]
// 009f0838  66890f               mov word ptr [edi], cx
// 009f083b  c7470800000000       mov dword ptr [edi + 8], 0
// 009f0842  8b48cc               mov ecx, dword ptr [eax - 0x34]
// 009f0845  52                   push edx
// 009f0846  51                   push ecx
// 009f0847  895c241c             mov dword ptr [esp + 0x1c], ebx
// 009f084b  896c2420             mov dword ptr [esp + 0x20], ebp
// 009f084f  ff15883ab200         call dword ptr [0xb23a88]
// 009f0855  8b542418             mov edx, dword ptr [esp + 0x18]
// 009f0859  8b442414             mov eax, dword ptr [esp + 0x14]
// 009f085d  52                   push edx
// 009f085e  50                   push eax
// 009f085f  8bce                 mov ecx, esi
// 009f0861  e8eaecffff           call 0x9ef550
// 009f0866  85c0                 test eax, eax
// 009f0868  7414                 je 0x9f087e
// 009f086a  b909000000           mov ecx, 9
// 009f086f  66890f               mov word ptr [edi], cx
// 009f0872  6a01                 push 1
// 009f0874  8bc8                 mov ecx, eax
// 009f0876  e8fd8c0a00           call 0xa99578
// 009f087b  894708               mov dword ptr [edi + 8], eax
// 009f087e  5d                   pop ebp
// 009f087f  5b                   pop ebx
// 009f0880  5e                   pop esi
// 009f0881  33c0                 xor eax, eax
// 009f0883  5f                   pop edi
// 009f0884  83c41c               add esp, 0x1c
// 009f0887  c20c00               ret 0xc
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AccessibleHitTest@CXTPPropertyGridView@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
