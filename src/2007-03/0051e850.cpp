// roc 2007-03 0051e850  unit: seg_00510000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e850
//
// 0051e850  56                   push esi
// 0051e851  8b742408             mov esi, dword ptr [esp + 8]
// 0051e855  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0051e85c  57                   push edi
// 0051e85d  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0051e863  897c240c             mov dword ptr [esp + 0xc], edi
// 0051e867  0f8585000000         jne 0x51e8f2
// 0051e86d  55                   push ebp
// 0051e86e  33ed                 xor ebp, ebp
// 0051e870  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 0051e876  7e79                 jle 0x51e8f1
// 0051e878  53                   push ebx
// 0051e879  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0051e87f  90                   nop 
// 0051e880  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0051e887  8b3b                 mov edi, dword ptr [ebx]
// 0051e889  7436                 je 0x51e8c1
// 0051e88b  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0051e892  751b                 jne 0x51e8af
// 0051e894  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 0051e89b  7541                 jne 0x51e8de
// 0051e89d  8b4714               mov eax, dword ptr [edi + 0x14]
// 0051e8a0  6a00                 push 0
// 0051e8a2  50                   push eax
// 0051e8a3  8bce                 mov ecx, esi
// 0051e8a5  e826faffff           call 0x51e2d0
// 0051e8aa  83c408               add esp, 8
// 0051e8ad  eb2f                 jmp 0x51e8de
// 0051e8af  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0051e8b2  6a01                 push 1
// 0051e8b4  51                   push ecx
// 0051e8b5  8bce                 mov ecx, esi
// 0051e8b7  e814faffff           call 0x51e2d0
// 0051e8bc  83c408               add esp, 8
// 0051e8bf  eb1d                 jmp 0x51e8de
// 0051e8c1  8b5714               mov edx, dword ptr [edi + 0x14]
// 0051e8c4  6a00                 push 0
// 0051e8c6  52                   push edx
// 0051e8c7  8bce                 mov ecx, esi
// 0051e8c9  e802faffff           call 0x51e2d0
// 0051e8ce  8b4718               mov eax, dword ptr [edi + 0x18]
// 0051e8d1  6a01                 push 1
// 0051e8d3  50                   push eax
// 0051e8d4  8bce                 mov ecx, esi
// 0051e8d6  e8f5f9ffff           call 0x51e2d0
// 0051e8db  83c410               add esp, 0x10
// 0051e8de  83c501               add ebp, 1
// 0051e8e1  83c304               add ebx, 4
// 0051e8e4  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 0051e8ea  7c94                 jl 0x51e880
// 0051e8ec  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051e8f0  5b                   pop ebx
// 0051e8f1  5d                   pop ebp
// 0051e8f2  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0051e8f8  3b4f1c               cmp ecx, dword ptr [edi + 0x1c]
// 0051e8fb  740e                 je 0x51e90b
// 0051e8fd  e8befaffff           call 0x51e3c0
// 0051e902  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 0051e908  89571c               mov dword ptr [edi + 0x1c], edx
// 0051e90b  5f                   pop edi
// 0051e90c  8bc6                 mov eax, esi
// 0051e90e  5e                   pop esi
// 0051e90f  e98cfbffff           jmp 0x51e4a0
// library jpeg-6b/jcmarker.c (function _write_scan_header)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
