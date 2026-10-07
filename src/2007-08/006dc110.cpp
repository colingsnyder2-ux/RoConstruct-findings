// roc 2007-08 006dc110  unit: CXTPDockingPaneWindowSelect  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc110
//
// 006dc110  55                   push ebp
// 006dc111  56                   push esi
// 006dc112  57                   push edi
// 006dc113  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006dc117  33ed                 xor ebp, ebp
// 006dc119  3bfd                 cmp edi, ebp
// 006dc11b  8bf1                 mov esi, ecx
// 006dc11d  7d05                 jge 0x6dc124
// 006dc11f  e8fc3df5ff           call 0x62ff20
// 006dc124  8b442414             mov eax, dword ptr [esp + 0x14]
// 006dc128  3bc5                 cmp eax, ebp
// 006dc12a  7c03                 jl 0x6dc12f
// 006dc12c  894610               mov dword ptr [esi + 0x10], eax
// 006dc12f  3bfd                 cmp edi, ebp
// 006dc131  751f                 jne 0x6dc152
// 006dc133  8b4604               mov eax, dword ptr [esi + 4]
// 006dc136  3bc5                 cmp eax, ebp
// 006dc138  740c                 je 0x6dc146
// 006dc13a  50                   push eax
// 006dc13b  e8e63df5ff           call 0x62ff26
// 006dc140  83c404               add esp, 4
// 006dc143  896e04               mov dword ptr [esi + 4], ebp
// 006dc146  5f                   pop edi
// 006dc147  896e0c               mov dword ptr [esi + 0xc], ebp
// 006dc14a  896e08               mov dword ptr [esi + 8], ebp
// 006dc14d  5e                   pop esi
// 006dc14e  5d                   pop ebp
// 006dc14f  c20800               ret 8
// 006dc152  8b4e04               mov ecx, dword ptr [esi + 4]
// 006dc155  3bcd                 cmp ecx, ebp
// 006dc157  53                   push ebx
// 006dc158  7532                 jne 0x6dc18c
// 006dc15a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 006dc15d  3bfd                 cmp edi, ebp
// 006dc15f  7e02                 jle 0x6dc163
// 006dc161  8bef                 mov ebp, edi
// 006dc163  8d1ced00000000       lea ebx, [ebp*8]
// 006dc16a  53                   push ebx
// 006dc16b  e8c23df5ff           call 0x62ff32
// 006dc170  53                   push ebx
// 006dc171  6a00                 push 0
// 006dc173  50                   push eax
// 006dc174  894604               mov dword ptr [esi + 4], eax
// 006dc177  e8104af5ff           call 0x630b8c
// 006dc17c  83c410               add esp, 0x10
// 006dc17f  5b                   pop ebx
// 006dc180  897e08               mov dword ptr [esi + 8], edi
// 006dc183  5f                   pop edi
// 006dc184  896e0c               mov dword ptr [esi + 0xc], ebp
// 006dc187  5e                   pop esi
// 006dc188  5d                   pop ebp
// 006dc189  c20800               ret 8
// 006dc18c  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006dc18f  3bfb                 cmp edi, ebx
// 006dc191  7f2d                 jg 0x6dc1c0
// 006dc193  8b4608               mov eax, dword ptr [esi + 8]
// 006dc196  3bf8                 cmp edi, eax
// 006dc198  0f8ebb000000         jle 0x6dc259
// 006dc19e  8bd7                 mov edx, edi
// 006dc1a0  2bd0                 sub edx, eax
// 006dc1a2  03d2                 add edx, edx
// 006dc1a4  03d2                 add edx, edx
// 006dc1a6  03d2                 add edx, edx
// 006dc1a8  52                   push edx
// 006dc1a9  8d04c1               lea eax, [ecx + eax*8]
// 006dc1ac  55                   push ebp
// 006dc1ad  50                   push eax
// 006dc1ae  e8d949f5ff           call 0x630b8c
// 006dc1b3  83c40c               add esp, 0xc
// 006dc1b6  5b                   pop ebx
// 006dc1b7  897e08               mov dword ptr [esi + 8], edi
// 006dc1ba  5f                   pop edi
// 006dc1bb  5e                   pop esi
// 006dc1bc  5d                   pop ebp
// 006dc1bd  c20800               ret 8
// 006dc1c0  8b4610               mov eax, dword ptr [esi + 0x10]
// 006dc1c3  3bc5                 cmp eax, ebp
// 006dc1c5  7524                 jne 0x6dc1eb
// 006dc1c7  8b4608               mov eax, dword ptr [esi + 8]
// 006dc1ca  99                   cdq 
// 006dc1cb  83e207               and edx, 7
// 006dc1ce  03c2                 add eax, edx
// 006dc1d0  c1f803               sar eax, 3
// 006dc1d3  83f804               cmp eax, 4
// 006dc1d6  7d07                 jge 0x6dc1df
// 006dc1d8  b804000000           mov eax, 4
// 006dc1dd  eb0c                 jmp 0x6dc1eb
// 006dc1df  3d00040000           cmp eax, 0x400
// 006dc1e4  7e05                 jle 0x6dc1eb
// 006dc1e6  b800040000           mov eax, 0x400
// 006dc1eb  03c3                 add eax, ebx
// 006dc1ed  3bf8                 cmp edi, eax
// 006dc1ef  7d06                 jge 0x6dc1f7
// 006dc1f1  89442414             mov dword ptr [esp + 0x14], eax
// 006dc1f5  eb06                 jmp 0x6dc1fd
// 006dc1f7  897c2414             mov dword ptr [esp + 0x14], edi
// 006dc1fb  8bc7                 mov eax, edi
// 006dc1fd  3bc3                 cmp eax, ebx
// 006dc1ff  7d05                 jge 0x6dc206
// 006dc201  e81a3df5ff           call 0x62ff20
// 006dc206  8d2cc500000000       lea ebp, [eax*8]
// 006dc20d  55                   push ebp
// 006dc20e  e81f3df5ff           call 0x62ff32
// 006dc213  8b4e08               mov ecx, dword ptr [esi + 8]
// 006dc216  8b5604               mov edx, dword ptr [esi + 4]
// 006dc219  03c9                 add ecx, ecx
// 006dc21b  03c9                 add ecx, ecx
// 006dc21d  03c9                 add ecx, ecx
// 006dc21f  51                   push ecx
// 006dc220  52                   push edx
// 006dc221  8bd8                 mov ebx, eax
// 006dc223  55                   push ebp
// 006dc224  53                   push ebx
// 006dc225  e85656d2ff           call 0x401880
// 006dc22a  8b4608               mov eax, dword ptr [esi + 8]
// 006dc22d  8bcf                 mov ecx, edi
// 006dc22f  2bc8                 sub ecx, eax
// 006dc231  03c9                 add ecx, ecx
// 006dc233  03c9                 add ecx, ecx
// 006dc235  03c9                 add ecx, ecx
// 006dc237  51                   push ecx
// 006dc238  8d14c3               lea edx, [ebx + eax*8]
// 006dc23b  6a00                 push 0
// 006dc23d  52                   push edx
// 006dc23e  e84949f5ff           call 0x630b8c
// 006dc243  8b4604               mov eax, dword ptr [esi + 4]
// 006dc246  50                   push eax
// 006dc247  e8da3cf5ff           call 0x62ff26
// 006dc24c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006dc250  83c424               add esp, 0x24
// 006dc253  895e04               mov dword ptr [esi + 4], ebx
// 006dc256  894e0c               mov dword ptr [esi + 0xc], ecx
// 006dc259  5b                   pop ebx
// 006dc25a  897e08               mov dword ptr [esi + 8], edi
// 006dc25d  5f                   pop edi
// 006dc25e  5e                   pop esi
// 006dc25f  5d                   pop ebp
// 006dc260  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ?SetSize@?$CArray@USELECTED_BLOCK@CXTPDatePickerDaysCollection@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPDatePickerDaysCollection.cpp
