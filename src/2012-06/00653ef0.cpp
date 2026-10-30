// from server: 100% by auto
// roc 2012-06 00653ef0  unit: seg_00650000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653ef0
//
// 00653ef0  53                   push ebx
// 00653ef1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00653ef5  55                   push ebp
// 00653ef6  56                   push esi
// 00653ef7  57                   push edi
// 00653ef8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00653efc  8b6f04               mov ebp, dword ptr [edi + 4]
// 00653eff  81fbf0c99a3b         cmp ebx, 0x3b9ac9f0
// 00653f05  761c                 jbe 0x653f23
// 00653f07  8b07                 mov eax, dword ptr [edi]
// 00653f09  c7401436000000       mov dword ptr [eax + 0x14], 0x36
// 00653f10  8b0f                 mov ecx, dword ptr [edi]
// 00653f12  c7411803000000       mov dword ptr [ecx + 0x18], 3
// 00653f19  8b17                 mov edx, dword ptr [edi]
// 00653f1b  8b02                 mov eax, dword ptr [edx]
// 00653f1d  57                   push edi
// 00653f1e  ffd0                 call eax
// 00653f20  83c404               add esp, 4
// 00653f23  8bc3                 mov eax, ebx
// 00653f25  83e007               and eax, 7
// 00653f28  7609                 jbe 0x653f33
// 00653f2a  b908000000           mov ecx, 8
// 00653f2f  2bc8                 sub ecx, eax
// 00653f31  03d9                 add ebx, ecx
// 00653f33  8b442418             mov eax, dword ptr [esp + 0x18]
// 00653f37  85c0                 test eax, eax
// 00653f39  7c05                 jl 0x653f40
// 00653f3b  83f802               cmp eax, 2
// 00653f3e  7c18                 jl 0x653f58
// 00653f40  8b17                 mov edx, dword ptr [edi]
// 00653f42  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 00653f49  8b0f                 mov ecx, dword ptr [edi]
// 00653f4b  894118               mov dword ptr [ecx + 0x18], eax
// 00653f4e  8b17                 mov edx, dword ptr [edi]
// 00653f50  8b02                 mov eax, dword ptr [edx]
// 00653f52  57                   push edi
// 00653f53  ffd0                 call eax
// 00653f55  83c404               add esp, 4
// 00653f58  8d4b10               lea ecx, [ebx + 0x10]
// 00653f5b  51                   push ecx
// 00653f5c  57                   push edi
// 00653f5d  e83ec00000           call 0x65ffa0
// 00653f62  8bf0                 mov esi, eax
// 00653f64  83c408               add esp, 8
// 00653f67  85f6                 test esi, esi
// 00653f69  751c                 jne 0x653f87
// 00653f6b  8b17                 mov edx, dword ptr [edi]
// 00653f6d  c7421436000000       mov dword ptr [edx + 0x14], 0x36
// 00653f74  8b07                 mov eax, dword ptr [edi]
// 00653f76  c7401804000000       mov dword ptr [eax + 0x18], 4
// 00653f7d  8b0f                 mov ecx, dword ptr [edi]
// 00653f7f  8b11                 mov edx, dword ptr [ecx]
// 00653f81  57                   push edi
// 00653f82  ffd2                 call edx
// 00653f84  83c404               add esp, 4
// 00653f87  8d4310               lea eax, [ebx + 0x10]
// 00653f8a  01454c               add dword ptr [ebp + 0x4c], eax
// 00653f8d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00653f91  8b4c853c             mov ecx, dword ptr [ebp + eax*4 + 0x3c]
// 00653f95  895e04               mov dword ptr [esi + 4], ebx
// 00653f98  890e                 mov dword ptr [esi], ecx
// 00653f9a  c7460800000000       mov dword ptr [esi + 8], 0
// 00653fa1  8974853c             mov dword ptr [ebp + eax*4 + 0x3c], esi
// 00653fa5  5f                   pop edi
// 00653fa6  8d4610               lea eax, [esi + 0x10]
// 00653fa9  5e                   pop esi
// 00653faa  5d                   pop ebp
// 00653fab  5b                   pop ebx
// 00653fac  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_large)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
