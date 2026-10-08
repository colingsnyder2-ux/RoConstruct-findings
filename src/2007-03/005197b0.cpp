// roc 2007-03 005197b0  unit: seg_00510000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005197b0
//
// 005197b0  53                   push ebx
// 005197b1  55                   push ebp
// 005197b2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005197b6  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005197b9  56                   push esi
// 005197ba  57                   push edi
// 005197bb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005197bf  81fff0c99a3b         cmp edi, 0x3b9ac9f0
// 005197c5  760c                 jbe 0x5197d3
// 005197c7  6a03                 push 3
// 005197c9  8bc5                 mov eax, ebp
// 005197cb  e890feffff           call 0x519660
// 005197d0  83c404               add esp, 4
// 005197d3  8bc7                 mov eax, edi
// 005197d5  83e007               and eax, 7
// 005197d8  7609                 jbe 0x5197e3
// 005197da  b908000000           mov ecx, 8
// 005197df  2bc8                 sub ecx, eax
// 005197e1  03f9                 add edi, ecx
// 005197e3  8b442418             mov eax, dword ptr [esp + 0x18]
// 005197e7  85c0                 test eax, eax
// 005197e9  7c05                 jl 0x5197f0
// 005197eb  83f802               cmp eax, 2
// 005197ee  7c1b                 jl 0x51980b
// 005197f0  8b5500               mov edx, dword ptr [ebp]
// 005197f3  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 005197fa  8b4d00               mov ecx, dword ptr [ebp]
// 005197fd  894118               mov dword ptr [ecx + 0x18], eax
// 00519800  8b5500               mov edx, dword ptr [ebp]
// 00519803  8b02                 mov eax, dword ptr [edx]
// 00519805  55                   push ebp
// 00519806  ffd0                 call eax
// 00519808  83c404               add esp, 4
// 0051980b  8d4f10               lea ecx, [edi + 0x10]
// 0051980e  51                   push ecx
// 0051980f  55                   push ebp
// 00519810  e88b590000           call 0x51f1a0
// 00519815  8bf0                 mov esi, eax
// 00519817  83c408               add esp, 8
// 0051981a  85f6                 test esi, esi
// 0051981c  750c                 jne 0x51982a
// 0051981e  6a04                 push 4
// 00519820  8bc5                 mov eax, ebp
// 00519822  e839feffff           call 0x519660
// 00519827  83c404               add esp, 4
// 0051982a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051982e  8d5710               lea edx, [edi + 0x10]
// 00519831  01534c               add dword ptr [ebx + 0x4c], edx
// 00519834  8b4c833c             mov ecx, dword ptr [ebx + eax*4 + 0x3c]
// 00519838  897e04               mov dword ptr [esi + 4], edi
// 0051983b  890e                 mov dword ptr [esi], ecx
// 0051983d  c7460800000000       mov dword ptr [esi + 8], 0
// 00519844  8974833c             mov dword ptr [ebx + eax*4 + 0x3c], esi
// 00519848  5f                   pop edi
// 00519849  8d4610               lea eax, [esi + 0x10]
// 0051984c  5e                   pop esi
// 0051984d  5d                   pop ebp
// 0051984e  5b                   pop ebx
// 0051984f  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_large)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
