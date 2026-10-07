// roc 2007-08 0051f490  unit: seg_00510000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f490
//
// 0051f490  53                   push ebx
// 0051f491  55                   push ebp
// 0051f492  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0051f496  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0051f499  56                   push esi
// 0051f49a  57                   push edi
// 0051f49b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051f49f  81fff0c99a3b         cmp edi, 0x3b9ac9f0
// 0051f4a5  760c                 jbe 0x51f4b3
// 0051f4a7  6a03                 push 3
// 0051f4a9  8bc5                 mov eax, ebp
// 0051f4ab  e890feffff           call 0x51f340
// 0051f4b0  83c404               add esp, 4
// 0051f4b3  8bc7                 mov eax, edi
// 0051f4b5  83e007               and eax, 7
// 0051f4b8  7609                 jbe 0x51f4c3
// 0051f4ba  b908000000           mov ecx, 8
// 0051f4bf  2bc8                 sub ecx, eax
// 0051f4c1  03f9                 add edi, ecx
// 0051f4c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051f4c7  85c0                 test eax, eax
// 0051f4c9  7c05                 jl 0x51f4d0
// 0051f4cb  83f802               cmp eax, 2
// 0051f4ce  7c1b                 jl 0x51f4eb
// 0051f4d0  8b5500               mov edx, dword ptr [ebp]
// 0051f4d3  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 0051f4da  8b4d00               mov ecx, dword ptr [ebp]
// 0051f4dd  894118               mov dword ptr [ecx + 0x18], eax
// 0051f4e0  8b5500               mov edx, dword ptr [ebp]
// 0051f4e3  8b02                 mov eax, dword ptr [edx]
// 0051f4e5  55                   push ebp
// 0051f4e6  ffd0                 call eax
// 0051f4e8  83c404               add esp, 4
// 0051f4eb  8d4f10               lea ecx, [edi + 0x10]
// 0051f4ee  51                   push ecx
// 0051f4ef  55                   push ebp
// 0051f4f0  e8cb4f0000           call 0x5244c0
// 0051f4f5  8bf0                 mov esi, eax
// 0051f4f7  83c408               add esp, 8
// 0051f4fa  85f6                 test esi, esi
// 0051f4fc  750c                 jne 0x51f50a
// 0051f4fe  6a04                 push 4
// 0051f500  8bc5                 mov eax, ebp
// 0051f502  e839feffff           call 0x51f340
// 0051f507  83c404               add esp, 4
// 0051f50a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051f50e  8d5710               lea edx, [edi + 0x10]
// 0051f511  01534c               add dword ptr [ebx + 0x4c], edx
// 0051f514  8b4c833c             mov ecx, dword ptr [ebx + eax*4 + 0x3c]
// 0051f518  897e04               mov dword ptr [esi + 4], edi
// 0051f51b  890e                 mov dword ptr [esi], ecx
// 0051f51d  c7460800000000       mov dword ptr [esi + 8], 0
// 0051f524  8974833c             mov dword ptr [ebx + eax*4 + 0x3c], esi
// 0051f528  5f                   pop edi
// 0051f529  8d4610               lea eax, [esi + 0x10]
// 0051f52c  5e                   pop esi
// 0051f52d  5d                   pop ebp
// 0051f52e  5b                   pop ebx
// 0051f52f  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_large)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
