// roc 2009-12 00845170  unit: CXTPControls  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845170
//
// 00845170  53                   push ebx
// 00845171  56                   push esi
// 00845172  8bf1                 mov esi, ecx
// 00845174  837e3000             cmp dword ptr [esi + 0x30], 0
// 00845178  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0084517b  57                   push edi
// 0084517c  7416                 je 0x845194
// 0084517e  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 00845184  8b01                 mov eax, dword ptr [ecx]
// 00845186  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0084518c  83ca02               or edx, 2
// 0084518f  52                   push edx
// 00845190  ffd0                 call eax
// 00845192  eb14                 jmp 0x8451a8
// 00845194  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0084519a  8b11                 mov edx, dword ptr [ecx]
// 0084519c  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008451a2  83e0fd               and eax, 0xfffffffd
// 008451a5  50                   push eax
// 008451a6  ffd2                 call edx
// 008451a8  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008451ab  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008451ae  8b5614               mov edx, dword ptr [esi + 0x14]
// 008451b1  8b7e18               mov edi, dword ptr [esi + 0x18]
// 008451b4  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 008451b7  05b0000000           add eax, 0xb0
// 008451bc  8908                 mov dword ptr [eax], ecx
// 008451be  895004               mov dword ptr [eax + 4], edx
// 008451c1  897808               mov dword ptr [eax + 8], edi
// 008451c4  89580c               mov dword ptr [eax + 0xc], ebx
// 008451c7  837e3000             cmp dword ptr [esi + 0x30], 0
// 008451cb  7525                 jne 0x8451f2
// 008451cd  8b3e                 mov edi, dword ptr [esi]
// 008451cf  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 008451d2  8b11                 mov edx, dword ptr [ecx]
// 008451d4  83ec10               sub esp, 0x10
// 008451d7  8bc4                 mov eax, esp
// 008451d9  8938                 mov dword ptr [eax], edi
// 008451db  8b7e04               mov edi, dword ptr [esi + 4]
// 008451de  897804               mov dword ptr [eax + 4], edi
// 008451e1  8b7e08               mov edi, dword ptr [esi + 8]
// 008451e4  897808               mov dword ptr [eax + 8], edi
// 008451e7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 008451ea  89780c               mov dword ptr [eax + 0xc], edi
// 008451ed  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008451f0  ffd0                 call eax
// 008451f2  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 008451f5  8b562c               mov edx, dword ptr [esi + 0x2c]
// 008451f8  5f                   pop edi
// 008451f9  5e                   pop esi
// 008451fa  899194000000         mov dword ptr [ecx + 0x94], edx
// 00845200  5b                   pop ebx
// 00845201  c3                   ret 
// copied from an identical function in another client (function ?Detach@XTPBUTTONINFO@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp