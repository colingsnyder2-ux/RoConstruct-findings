// roc 2008-06 007982b0  unit: CXTPRibbonGroup  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007982b0
//
// 007982b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007982b4  83ec10               sub esp, 0x10
// 007982b7  53                   push ebx
// 007982b8  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007982bc  55                   push ebp
// 007982bd  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007982c1  56                   push esi
// 007982c2  8bf1                 mov esi, ecx
// 007982c4  837e7000             cmp dword ptr [esi + 0x70], 0
// 007982c8  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007982cb  57                   push edi
// 007982cc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007982d0  897e34               mov dword ptr [esi + 0x34], edi
// 007982d3  895e38               mov dword ptr [esi + 0x38], ebx
// 007982d6  896e3c               mov dword ptr [esi + 0x3c], ebp
// 007982d9  894640               mov dword ptr [esi + 0x40], eax
// 007982dc  7445                 je 0x798323
// 007982de  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 007982e4  8944241c             mov dword ptr [esp + 0x1c], eax
// 007982e8  8b01                 mov eax, dword ptr [ecx]
// 007982ea  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 007982f0  83e2fd               and edx, 0xfffffffd
// 007982f3  52                   push edx
// 007982f4  ffd0                 call eax
// 007982f6  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007982f9  8b11                 mov edx, dword ptr [ecx]
// 007982fb  83ec10               sub esp, 0x10
// 007982fe  8bc4                 mov eax, esp
// 00798300  8938                 mov dword ptr [eax], edi
// 00798302  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00798306  895804               mov dword ptr [eax + 4], ebx
// 00798309  896808               mov dword ptr [eax + 8], ebp
// 0079830c  89780c               mov dword ptr [eax + 0xc], edi
// 0079830f  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00798312  ffd0                 call eax
// 00798314  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00798317  c7819400000001000000 mov dword ptr [ecx + 0x94], 1
// 00798321  eb14                 jmp 0x798337
// 00798323  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00798329  8b11                 mov edx, dword ptr [ecx]
// 0079832b  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00798331  83c802               or eax, 2
// 00798334  50                   push eax
// 00798335  ffd2                 call edx
// 00798337  837e7400             cmp dword ptr [esi + 0x74], 0
// 0079833b  7523                 jne 0x798360
// 0079833d  8b7668               mov esi, dword ptr [esi + 0x68]
// 00798340  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00798346  8b06                 mov eax, dword ptr [esi]
// 00798348  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0079834e  83c901               or ecx, 1
// 00798351  51                   push ecx
// 00798352  8bce                 mov ecx, esi
// 00798354  ffd2                 call edx
// 00798356  5f                   pop edi
// 00798357  5e                   pop esi
// 00798358  5d                   pop ebp
// 00798359  5b                   pop ebx
// 0079835a  83c410               add esp, 0x10
// 0079835d  c21000               ret 0x10
// 00798360  837e7000             cmp dword ptr [esi + 0x70], 0
// 00798364  7423                 je 0x798389
// 00798366  8b7668               mov esi, dword ptr [esi + 0x68]
// 00798369  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0079836f  8b06                 mov eax, dword ptr [esi]
// 00798371  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00798377  83c902               or ecx, 2
// 0079837a  51                   push ecx
// 0079837b  8bce                 mov ecx, esi
// 0079837d  ffd2                 call edx
// 0079837f  5f                   pop edi
// 00798380  5e                   pop esi
// 00798381  5d                   pop ebp
// 00798382  5b                   pop ebx
// 00798383  83c410               add esp, 0x10
// 00798386  c21000               ret 0x10
// 00798389  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0079838c  e82f9df8ff           call 0x7220c0
// 00798391  8b9860060000         mov ebx, dword ptr [eax + 0x660]
// 00798397  8b4668               mov eax, dword ptr [esi + 0x68]
// 0079839a  c7809400000001000000 mov dword ptr [eax + 0x94], 1
// 007983a4  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 007983a7  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 007983ad  8b11                 mov edx, dword ptr [ecx]
// 007983af  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 007983b5  83e0fe               and eax, 0xfffffffe
// 007983b8  50                   push eax
// 007983b9  ffd2                 call edx
// 007983bb  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 007983be  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 007983c4  8b01                 mov eax, dword ptr [ecx]
// 007983c6  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 007983cc  83e2fd               and edx, 0xfffffffd
// 007983cf  52                   push edx
// 007983d0  ffd0                 call eax
// 007983d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007983d6  8b542430             mov edx, dword ptr [esp + 0x30]
// 007983da  8bc1                 mov eax, ecx
// 007983dc  8bfa                 mov edi, edx
// 007983de  2bc3                 sub eax, ebx
// 007983e0  8d6afd               lea ebp, [edx - 3]
// 007983e3  83ec10               sub esp, 0x10
// 007983e6  8bd4                 mov edx, esp
// 007983e8  2bfb                 sub edi, ebx
// 007983ea  48                   dec eax
// 007983eb  8902                 mov dword ptr [edx], eax
// 007983ed  8d59fd               lea ebx, [ecx - 3]
// 007983f0  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 007983f3  8b31                 mov esi, dword ptr [ecx]
// 007983f5  897a04               mov dword ptr [edx + 4], edi
// 007983f8  895a08               mov dword ptr [edx + 8], ebx
// 007983fb  896a0c               mov dword ptr [edx + 0xc], ebp
// 007983fe  8b567c               mov edx, dword ptr [esi + 0x7c]
// 00798401  ffd2                 call edx
// 00798403  5f                   pop edi
// 00798404  5e                   pop esi
// 00798405  5d                   pop ebp
// 00798406  5b                   pop ebx
// 00798407  83c410               add esp, 0x10
// 0079840a  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroup.cpp (function ?SetRect@CXTPRibbonGroup@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp
