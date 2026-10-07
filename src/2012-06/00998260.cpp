// roc 2012-06 00998260  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998260
//
// 00998260  55                   push ebp
// 00998261  56                   push esi
// 00998262  57                   push edi
// 00998263  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00998267  33ed                 xor ebp, ebp
// 00998269  3bfd                 cmp edi, ebp
// 0099826b  8bf1                 mov esi, ecx
// 0099826d  7d05                 jge 0x998274
// 0099826f  e84ca1feff           call 0x9823c0
// 00998274  8b442414             mov eax, dword ptr [esp + 0x14]
// 00998278  3bc5                 cmp eax, ebp
// 0099827a  7c03                 jl 0x99827f
// 0099827c  894610               mov dword ptr [esi + 0x10], eax
// 0099827f  3bfd                 cmp edi, ebp
// 00998281  751f                 jne 0x9982a2
// 00998283  8b4604               mov eax, dword ptr [esi + 4]
// 00998286  3bc5                 cmp eax, ebp
// 00998288  740c                 je 0x998296
// 0099828a  50                   push eax
// 0099828b  e82aa1feff           call 0x9823ba
// 00998290  83c404               add esp, 4
// 00998293  896e04               mov dword ptr [esi + 4], ebp
// 00998296  5f                   pop edi
// 00998297  896e0c               mov dword ptr [esi + 0xc], ebp
// 0099829a  896e08               mov dword ptr [esi + 8], ebp
// 0099829d  5e                   pop esi
// 0099829e  5d                   pop ebp
// 0099829f  c20800               ret 8
// 009982a2  8b4e04               mov ecx, dword ptr [esi + 4]
// 009982a5  53                   push ebx
// 009982a6  3bcd                 cmp ecx, ebp
// 009982a8  7532                 jne 0x9982dc
// 009982aa  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 009982ad  3bfd                 cmp edi, ebp
// 009982af  7e02                 jle 0x9982b3
// 009982b1  8bef                 mov ebp, edi
// 009982b3  8d1cad00000000       lea ebx, [ebp*4]
// 009982ba  53                   push ebx
// 009982bb  e830a1feff           call 0x9823f0
// 009982c0  53                   push ebx
// 009982c1  6a00                 push 0
// 009982c3  50                   push eax
// 009982c4  894604               mov dword ptr [esi + 4], eax
// 009982c7  e8a8b0feff           call 0x983374
// 009982cc  83c410               add esp, 0x10
// 009982cf  5b                   pop ebx
// 009982d0  897e08               mov dword ptr [esi + 8], edi
// 009982d3  5f                   pop edi
// 009982d4  896e0c               mov dword ptr [esi + 0xc], ebp
// 009982d7  5e                   pop esi
// 009982d8  5d                   pop ebp
// 009982d9  c20800               ret 8
// 009982dc  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 009982df  3bfb                 cmp edi, ebx
// 009982e1  7f2b                 jg 0x99830e
// 009982e3  8b4608               mov eax, dword ptr [esi + 8]
// 009982e6  3bf8                 cmp edi, eax
// 009982e8  0f8eb5000000         jle 0x9983a3
// 009982ee  8bd7                 mov edx, edi
// 009982f0  2bd0                 sub edx, eax
// 009982f2  03d2                 add edx, edx
// 009982f4  03d2                 add edx, edx
// 009982f6  52                   push edx
// 009982f7  8d0481               lea eax, [ecx + eax*4]
// 009982fa  55                   push ebp
// 009982fb  50                   push eax
// 009982fc  e873b0feff           call 0x983374
// 00998301  83c40c               add esp, 0xc
// 00998304  5b                   pop ebx
// 00998305  897e08               mov dword ptr [esi + 8], edi
// 00998308  5f                   pop edi
// 00998309  5e                   pop esi
// 0099830a  5d                   pop ebp
// 0099830b  c20800               ret 8
// 0099830e  8b4610               mov eax, dword ptr [esi + 0x10]
// 00998311  3bc5                 cmp eax, ebp
// 00998313  7524                 jne 0x998339
// 00998315  8b4608               mov eax, dword ptr [esi + 8]
// 00998318  99                   cdq 
// 00998319  83e207               and edx, 7
// 0099831c  03c2                 add eax, edx
// 0099831e  c1f803               sar eax, 3
// 00998321  83f804               cmp eax, 4
// 00998324  7d07                 jge 0x99832d
// 00998326  b804000000           mov eax, 4
// 0099832b  eb0c                 jmp 0x998339
// 0099832d  3d00040000           cmp eax, 0x400
// 00998332  7e05                 jle 0x998339
// 00998334  b800040000           mov eax, 0x400
// 00998339  03c3                 add eax, ebx
// 0099833b  3bf8                 cmp edi, eax
// 0099833d  7d06                 jge 0x998345
// 0099833f  89442414             mov dword ptr [esp + 0x14], eax
// 00998343  eb06                 jmp 0x99834b
// 00998345  897c2414             mov dword ptr [esp + 0x14], edi
// 00998349  8bc7                 mov eax, edi
// 0099834b  3bc3                 cmp eax, ebx
// 0099834d  7d05                 jge 0x998354
// 0099834f  e86ca0feff           call 0x9823c0
// 00998354  8d2c8500000000       lea ebp, [eax*4]
// 0099835b  55                   push ebp
// 0099835c  e88fa0feff           call 0x9823f0
// 00998361  8b4e08               mov ecx, dword ptr [esi + 8]
// 00998364  8b5604               mov edx, dword ptr [esi + 4]
// 00998367  03c9                 add ecx, ecx
// 00998369  03c9                 add ecx, ecx
// 0099836b  51                   push ecx
// 0099836c  52                   push edx
// 0099836d  8bd8                 mov ebx, eax
// 0099836f  55                   push ebp
// 00998370  53                   push ebx
// 00998371  e85abea6ff           call 0x4041d0
// 00998376  8b4608               mov eax, dword ptr [esi + 8]
// 00998379  8bcf                 mov ecx, edi
// 0099837b  2bc8                 sub ecx, eax
// 0099837d  03c9                 add ecx, ecx
// 0099837f  03c9                 add ecx, ecx
// 00998381  51                   push ecx
// 00998382  8d1483               lea edx, [ebx + eax*4]
// 00998385  6a00                 push 0
// 00998387  52                   push edx
// 00998388  e8e7affeff           call 0x983374
// 0099838d  8b4604               mov eax, dword ptr [esi + 4]
// 00998390  50                   push eax
// 00998391  e824a0feff           call 0x9823ba
// 00998396  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0099839a  83c424               add esp, 0x24
// 0099839d  895e04               mov dword ptr [esi + 4], ebx
// 009983a0  894e0c               mov dword ptr [esi + 0xc], ecx
// 009983a3  5b                   pop ebx
// 009983a4  897e08               mov dword ptr [esi + 8], edi
// 009983a7  5f                   pop edi
// 009983a8  5e                   pop esi
// 009983a9  5d                   pop ebp
// 009983aa  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventLabel.cpp (function ?SetSize@?$CArray@II@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventLabel.cpp
