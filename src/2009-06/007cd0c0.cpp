// roc 2009-06 007cd0c0  unit: CXTPDockingPaneBase  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cd0c0
//
// 007cd0c0  56                   push esi
// 007cd0c1  8b742408             mov esi, dword ptr [esp + 8]
// 007cd0c5  8b4618               mov eax, dword ptr [esi + 0x18]
// 007cd0c8  57                   push edi
// 007cd0c9  8bf9                 mov edi, ecx
// 007cd0cb  83f803               cmp eax, 3
// 007cd0ce  743b                 je 0x7cd10b
// 007cd0d0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007cd0d3  85c9                 test ecx, ecx
// 007cd0d5  0f849f000000         je 0x7cd17a
// 007cd0db  83f804               cmp eax, 4
// 007cd0de  0f8496000000         je 0x7cd17a
// 007cd0e4  8b4118               mov eax, dword ptr [ecx + 0x18]
// 007cd0e7  83f805               cmp eax, 5
// 007cd0ea  7429                 je 0x7cd115
// 007cd0ec  83f802               cmp eax, 2
// 007cd0ef  750f                 jne 0x7cd100
// 007cd0f1  8b01                 mov eax, dword ptr [ecx]
// 007cd0f3  8b5724               mov edx, dword ptr [edi + 0x24]
// 007cd0f6  8b4008               mov eax, dword ptr [eax + 8]
// 007cd0f9  52                   push edx
// 007cd0fa  ffd0                 call eax
// 007cd0fc  85c0                 test eax, eax
// 007cd0fe  7536                 jne 0x7cd136
// 007cd100  8b7610               mov esi, dword ptr [esi + 0x10]
// 007cd103  8b4618               mov eax, dword ptr [esi + 0x18]
// 007cd106  83f803               cmp eax, 3
// 007cd109  75c5                 jne 0x7cd0d0
// 007cd10b  5f                   pop edi
// 007cd10c  b804000000           mov eax, 4
// 007cd111  5e                   pop esi
// 007cd112  c20400               ret 4
// 007cd115  8bf1                 mov esi, ecx
// 007cd117  85f6                 test esi, esi
// 007cd119  740e                 je 0x7cd129
// 007cd11b  8d46ac               lea eax, [esi - 0x54]
// 007cd11e  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 007cd124  5f                   pop edi
// 007cd125  5e                   pop esi
// 007cd126  c20400               ret 4
// 007cd129  33c0                 xor eax, eax
// 007cd12b  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 007cd131  5f                   pop edi
// 007cd132  5e                   pop esi
// 007cd133  c20400               ret 4
// 007cd136  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007cd139  85c9                 test ecx, ecx
// 007cd13b  7405                 je 0x7cd142
// 007cd13d  8d79e0               lea edi, [ecx - 0x20]
// 007cd140  eb02                 jmp 0x7cd144
// 007cd142  33ff                 xor edi, edi
// 007cd144  50                   push eax
// 007cd145  56                   push esi
// 007cd146  8bcf                 mov ecx, edi
// 007cd148  e843be0000           call 0x7d8f90
// 007cd14d  85c0                 test eax, eax
// 007cd14f  7415                 je 0x7cd166
// 007cd151  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 007cd157  f7d8                 neg eax
// 007cd159  1bc0                 sbb eax, eax
// 007cd15b  83e0fe               and eax, 0xfffffffe
// 007cd15e  5f                   pop edi
// 007cd15f  83c002               add eax, 2
// 007cd162  5e                   pop esi
// 007cd163  c20400               ret 4
// 007cd166  33c0                 xor eax, eax
// 007cd168  398790000000         cmp dword ptr [edi + 0x90], eax
// 007cd16e  5f                   pop edi
// 007cd16f  0f94c0               sete al
// 007cd172  5e                   pop esi
// 007cd173  8d440001             lea eax, [eax + eax + 1]
// 007cd177  c20400               ret 4
// 007cd17a  5f                   pop edi
// 007cd17b  83c8ff               or eax, 0xffffffff
// 007cd17e  5e                   pop esi
// 007cd17f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_GetPaneDirection@CXTPDockingPaneLayout@@ABE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
