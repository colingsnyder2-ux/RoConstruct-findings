// roc 2010-06 007f9570  unit: CXTPControls  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f9570
//
// 007f9570  57                   push edi
// 007f9571  8bf9                 mov edi, ecx
// 007f9573  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007f9576  85c0                 test eax, eax
// 007f9578  7507                 jne 0x7f9581
// 007f957a  83c8ff               or eax, 0xffffffff
// 007f957d  5f                   pop edi
// 007f957e  c21400               ret 0x14
// 007f9581  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f9585  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f9589  56                   push esi
// 007f958a  8d3411               lea esi, [ecx + edx]
// 007f958d  83faff               cmp edx, -1
// 007f9590  7507                 jne 0x7f9599
// 007f9592  3bca                 cmp ecx, edx
// 007f9594  7503                 jne 0x7f9599
// 007f9596  8d70ff               lea esi, [eax - 1]
// 007f9599  53                   push ebx
// 007f959a  55                   push ebp
// 007f959b  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007f959f  f7dd                 neg ebp
// 007f95a1  1bed                 sbb ebp, ebp
// 007f95a3  83e5e0               and ebp, 0xffffffe0
// 007f95a6  83c520               add ebp, 0x20
// 007f95a9  83cd08               or ebp, 8
// 007f95ac  33db                 xor ebx, ebx
// 007f95ae  3bf1                 cmp esi, ecx
// 007f95b0  7516                 jne 0x7f95c8
// 007f95b2  5d                   pop ebp
// 007f95b3  5b                   pop ebx
// 007f95b4  8bc6                 mov eax, esi
// 007f95b6  5e                   pop esi
// 007f95b7  5f                   pop edi
// 007f95b8  c21400               ret 0x14
// 007f95bb  eb03                 jmp 0x7f95c0
// 007f95bd  8d4900               lea ecx, [ecx]
// 007f95c0  8b542418             mov edx, dword ptr [esp + 0x18]
// 007f95c4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f95c8  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007f95cb  3bf0                 cmp esi, eax
// 007f95cd  7c1d                 jl 0x7f95ec
// 007f95cf  83f9ff               cmp ecx, -1
// 007f95d2  7509                 jne 0x7f95dd
// 007f95d4  83fa01               cmp edx, 1
// 007f95d7  0f84c6000000         je 0x7f96a3
// 007f95dd  85db                 test ebx, ebx
// 007f95df  0f85be000000         jne 0x7f96a3
// 007f95e5  33f6                 xor esi, esi
// 007f95e7  8d5e01               lea ebx, [esi + 1]
// 007f95ea  eb25                 jmp 0x7f9611
// 007f95ec  85f6                 test esi, esi
// 007f95ee  7d21                 jge 0x7f9611
// 007f95f0  83f9ff               cmp ecx, -1
// 007f95f3  7508                 jne 0x7f95fd
// 007f95f5  3bd1                 cmp edx, ecx
// 007f95f7  0f84a6000000         je 0x7f96a3
// 007f95fd  85db                 test ebx, ebx
// 007f95ff  0f859e000000         jne 0x7f96a3
// 007f9605  8d70ff               lea esi, [eax - 1]
// 007f9608  bb01000000           mov ebx, 1
// 007f960d  85f6                 test esi, esi
// 007f960f  7c1c                 jl 0x7f962d
// 007f9611  3bf0                 cmp esi, eax
// 007f9613  7d18                 jge 0x7f962d
// 007f9615  85f6                 test esi, esi
// 007f9617  0f8c90000000         jl 0x7f96ad
// 007f961d  3bf0                 cmp esi, eax
// 007f961f  0f8d88000000         jge 0x7f96ad
// 007f9625  8b4728               mov eax, dword ptr [edi + 0x28]
// 007f9628  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007f962b  eb02                 jmp 0x7f962f
// 007f962d  33c9                 xor ecx, ecx
// 007f962f  8b11                 mov edx, dword ptr [ecx]
// 007f9631  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007f9637  55                   push ebp
// 007f9638  ffd0                 call eax
// 007f963a  85c0                 test eax, eax
// 007f963c  744e                 je 0x7f968c
// 007f963e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007f9643  741c                 je 0x7f9661
// 007f9645  85f6                 test esi, esi
// 007f9647  7c0d                 jl 0x7f9656
// 007f9649  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007f964c  7d08                 jge 0x7f9656
// 007f964e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007f9651  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 007f9654  eb02                 jmp 0x7f9658
// 007f9656  33c0                 xor eax, eax
// 007f9658  f680d400000002       test byte ptr [eax + 0xd4], 2
// 007f965f  752b                 jne 0x7f968c
// 007f9661  837c242000           cmp dword ptr [esp + 0x20], 0
// 007f9666  0f8446ffffff         je 0x7f95b2
// 007f966c  85f6                 test esi, esi
// 007f966e  7c0d                 jl 0x7f967d
// 007f9670  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007f9673  7d08                 jge 0x7f967d
// 007f9675  8b5728               mov edx, dword ptr [edi + 0x28]
// 007f9678  8b04b2               mov eax, dword ptr [edx + esi*4]
// 007f967b  eb02                 jmp 0x7f967f
// 007f967d  33c0                 xor eax, eax
// 007f967f  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 007f9686  0f8426ffffff         je 0x7f95b2
// 007f968c  03742418             add esi, dword ptr [esp + 0x18]
// 007f9690  3b742414             cmp esi, dword ptr [esp + 0x14]
// 007f9694  0f8526ffffff         jne 0x7f95c0
// 007f969a  5d                   pop ebp
// 007f969b  5b                   pop ebx
// 007f969c  8bc6                 mov eax, esi
// 007f969e  5e                   pop esi
// 007f969f  5f                   pop edi
// 007f96a0  c21400               ret 0x14
// 007f96a3  5d                   pop ebp
// 007f96a4  5b                   pop ebx
// 007f96a5  5e                   pop esi
// 007f96a6  83c8ff               or eax, 0xffffffff
// 007f96a9  5f                   pop edi
// 007f96aa  c21400               ret 0x14
// 007f96ad  e89ae5faff           call 0x7a7c4c
// copied from an identical function in another client (function ?GetNext@CXTPControls@@QBEJJHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp