// roc 2008-06 007611e0  unit: CXTPDockingPaneSplitterContainer  size: 574 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007611e0
//
// 007611e0  83ec38               sub esp, 0x38
// 007611e3  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007611e7  53                   push ebx
// 007611e8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 007611ec  55                   push ebp
// 007611ed  56                   push esi
// 007611ee  8b742448             mov esi, dword ptr [esp + 0x48]
// 007611f2  57                   push edi
// 007611f3  c70000000000         mov dword ptr [eax], 0
// 007611f9  8bce                 mov ecx, esi
// 007611fb  c70300000000         mov dword ptr [ebx], 0
// 00761201  33ff                 xor edi, edi
// 00761203  e8383ef8ff           call 0x6e5040
// 00761208  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0076120e  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00761211  8954241c             mov dword ptr [esp + 0x1c], edx
// 00761215  8b542450             mov edx, dword ptr [esp + 0x50]
// 00761219  8b6a04               mov ebp, dword ptr [edx + 4]
// 0076121c  89442418             mov dword ptr [esp + 0x18], eax
// 00761220  85ed                 test ebp, ebp
// 00761222  0f84d8000000         je 0x761300
// 00761228  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0076122c  8d442420             lea eax, [esp + 0x20]
// 00761230  53                   push ebx
// 00761231  50                   push eax
// 00761232  e899f3ffff           call 0x7605d0
// 00761237  8d4c2428             lea ecx, [esp + 0x28]
// 0076123b  53                   push ebx
// 0076123c  51                   push ecx
// 0076123d  89442424             mov dword ptr [esp + 0x24], eax
// 00761241  e8aaf3ffff           call 0x7605f0
// 00761246  83c410               add esp, 0x10
// 00761249  89442410             mov dword ptr [esp + 0x10], eax
// 0076124d  eb05                 jmp 0x761254
// 0076124f  90                   nop 
// 00761250  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00761254  8bc5                 mov eax, ebp
// 00761256  8b6d00               mov ebp, dword ptr [ebp]
// 00761259  8b7008               mov esi, dword ptr [eax + 8]
// 0076125c  85db                 test ebx, ebx
// 0076125e  7405                 je 0x761265
// 00761260  8b4604               mov eax, dword ptr [esi + 4]
// 00761263  eb03                 jmp 0x761268
// 00761265  8b4608               mov eax, dword ptr [esi + 8]
// 00761268  8b16                 mov edx, dword ptr [esi]
// 0076126a  8b5210               mov edx, dword ptr [edx + 0x10]
// 0076126d  894630               mov dword ptr [esi + 0x30], eax
// 00761270  8d442420             lea eax, [esp + 0x20]
// 00761274  50                   push eax
// 00761275  8bce                 mov ecx, esi
// 00761277  ffd2                 call edx
// 00761279  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076127d  8b00                 mov eax, dword ptr [eax]
// 0076127f  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00761282  3bc1                 cmp eax, ecx
// 00761284  8bd8                 mov ebx, eax
// 00761286  7c02                 jl 0x76128a
// 00761288  8bd9                 mov ebx, ecx
// 0076128a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0076128e  8b12                 mov edx, dword ptr [edx]
// 00761290  3bd3                 cmp edx, ebx
// 00761292  7e04                 jle 0x761298
// 00761294  8bc2                 mov eax, edx
// 00761296  eb06                 jmp 0x76129e
// 00761298  3bc1                 cmp eax, ecx
// 0076129a  7c02                 jl 0x76129e
// 0076129c  8bc1                 mov eax, ecx
// 0076129e  894630               mov dword ptr [esi + 0x30], eax
// 007612a1  85ff                 test edi, edi
// 007612a3  7542                 jne 0x7612e7
// 007612a5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007612a9  8b06                 mov eax, dword ptr [esi]
// 007612ab  8b5008               mov edx, dword ptr [eax + 8]
// 007612ae  51                   push ecx
// 007612af  8bce                 mov ecx, esi
// 007612b1  ffd2                 call edx
// 007612b3  85c0                 test eax, eax
// 007612b5  7430                 je 0x7612e7
// 007612b7  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007612bb  39b8e8000000         cmp dword ptr [eax + 0xe8], edi
// 007612c1  740a                 je 0x7612cd
// 007612c3  397e04               cmp dword ptr [esi + 4], edi
// 007612c6  751f                 jne 0x7612e7
// 007612c8  397e08               cmp dword ptr [esi + 8], edi
// 007612cb  751a                 jne 0x7612e7
// 007612cd  837c246800           cmp dword ptr [esp + 0x68], 0
// 007612d2  8bfe                 mov edi, esi
// 007612d4  740a                 je 0x7612e0
// 007612d6  33c0                 xor eax, eax
// 007612d8  33c9                 xor ecx, ecx
// 007612da  894604               mov dword ptr [esi + 4], eax
// 007612dd  894e08               mov dword ptr [esi + 8], ecx
// 007612e0  c7463000000000       mov dword ptr [esi + 0x30], 0
// 007612e7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007612ea  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007612ee  0108                 add dword ptr [eax], ecx
// 007612f0  85ed                 test ebp, ebp
// 007612f2  0f8558ffffff         jne 0x761250
// 007612f8  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 007612fc  8b542450             mov edx, dword ptr [esp + 0x50]
// 00761300  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00761304  85ed                 test ebp, ebp
// 00761306  740a                 je 0x761312
// 00761308  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0076130c  2b442454             sub eax, dword ptr [esp + 0x54]
// 00761310  eb08                 jmp 0x76131a
// 00761312  8b442460             mov eax, dword ptr [esp + 0x60]
// 00761316  2b442458             sub eax, dword ptr [esp + 0x58]
// 0076131a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0076131d  49                   dec ecx
// 0076131e  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00761323  2bc1                 sub eax, ecx
// 00761325  8903                 mov dword ptr [ebx], eax
// 00761327  85ff                 test edi, edi
// 00761329  7426                 je 0x761351
// 0076132b  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0076132f  8b0e                 mov ecx, dword ptr [esi]
// 00761331  3bc8                 cmp ecx, eax
// 00761333  7d1c                 jge 0x761351
// 00761335  2bc1                 sub eax, ecx
// 00761337  837c246800           cmp dword ptr [esp + 0x68], 0
// 0076133c  894730               mov dword ptr [edi + 0x30], eax
// 0076133f  740c                 je 0x76134d
// 00761341  85ed                 test ebp, ebp
// 00761343  7405                 je 0x76134a
// 00761345  894704               mov dword ptr [edi + 4], eax
// 00761348  eb03                 jmp 0x76134d
// 0076134a  894708               mov dword ptr [edi + 8], eax
// 0076134d  8b03                 mov eax, dword ptr [ebx]
// 0076134f  8906                 mov dword ptr [esi], eax
// 00761351  833b00               cmp dword ptr [ebx], 0
// 00761354  0f8ebc000000         jle 0x761416
// 0076135a  8b6a04               mov ebp, dword ptr [edx + 4]
// 0076135d  85ed                 test ebp, ebp
// 0076135f  0f84b1000000         je 0x761416
// 00761365  8bc5                 mov eax, ebp
// 00761367  8b7008               mov esi, dword ptr [eax + 8]
// 0076136a  837e3000             cmp dword ptr [esi + 0x30], 0
// 0076136e  8b6d00               mov ebp, dword ptr [ebp]
// 00761371  0f8c84000000         jl 0x7613fb
// 00761377  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0076137b  833900               cmp dword ptr [ecx], 0
// 0076137e  0f8477000000         je 0x7613fb
// 00761384  8b16                 mov edx, dword ptr [esi]
// 00761386  8b5210               mov edx, dword ptr [edx + 0x10]
// 00761389  8d442420             lea eax, [esp + 0x20]
// 0076138d  50                   push eax
// 0076138e  8bce                 mov ecx, esi
// 00761390  ffd2                 call edx
// 00761392  8b442470             mov eax, dword ptr [esp + 0x70]
// 00761396  8b00                 mov eax, dword ptr [eax]
// 00761398  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 0076139b  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0076139f  0fafc3               imul eax, ebx
// 007613a2  99                   cdq 
// 007613a3  f739                 idiv dword ptr [ecx]
// 007613a5  8b542464             mov edx, dword ptr [esp + 0x64]
// 007613a9  52                   push edx
// 007613aa  8bf8                 mov edi, eax
// 007613ac  8d442424             lea eax, [esp + 0x24]
// 007613b0  50                   push eax
// 007613b1  e81af2ffff           call 0x7605d0
// 007613b6  8b00                 mov eax, dword ptr [eax]
// 007613b8  83c408               add esp, 8
// 007613bb  3bf8                 cmp edi, eax
// 007613bd  7c18                 jl 0x7613d7
// 007613bf  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007613c3  51                   push ecx
// 007613c4  8d542424             lea edx, [esp + 0x24]
// 007613c8  52                   push edx
// 007613c9  e822f2ffff           call 0x7605f0
// 007613ce  8b00                 mov eax, dword ptr [eax]
// 007613d0  83c408               add esp, 8
// 007613d3  3bf8                 cmp edi, eax
// 007613d5  7e05                 jle 0x7613dc
// 007613d7  f7d8                 neg eax
// 007613d9  894630               mov dword ptr [esi + 0x30], eax
// 007613dc  8b4630               mov eax, dword ptr [esi + 0x30]
// 007613df  85c0                 test eax, eax
// 007613e1  7d18                 jge 0x7613fb
// 007613e3  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007613e7  0101                 add dword ptr [ecx], eax
// 007613e9  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007613ed  2918                 sub dword ptr [eax], ebx
// 007613ef  833900               cmp dword ptr [ecx], 0
// 007613f2  7c17                 jl 0x76140b
// 007613f4  8b442450             mov eax, dword ptr [esp + 0x50]
// 007613f8  8b6804               mov ebp, dword ptr [eax + 4]
// 007613fb  85ed                 test ebp, ebp
// 007613fd  0f8562ffffff         jne 0x761365
// 00761403  5f                   pop edi
// 00761404  5e                   pop esi
// 00761405  5d                   pop ebp
// 00761406  5b                   pop ebx
// 00761407  83c438               add esp, 0x38
// 0076140a  c3                   ret 
// 0076140b  8b11                 mov edx, dword ptr [ecx]
// 0076140d  295630               sub dword ptr [esi + 0x30], edx
// 00761410  c70100000000         mov dword ptr [ecx], 0
// 00761416  5f                   pop edi
// 00761417  5e                   pop esi
// 00761418  5d                   pop ebp
// 00761419  5b                   pop ebx
// 0076141a  83c438               add esp, 0x38
// 0076141d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_AdjustPanesLength@CXTPDockingPaneSplitterContainer@@CAXPAVCXTPDockingPaneManager@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@VCRect@@HHAAH3@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
