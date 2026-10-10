// roc 2008-06 007946a0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007946a0
//
// 007946a0  53                   push ebx
// 007946a1  56                   push esi
// 007946a2  8bf1                 mov esi, ecx
// 007946a4  837e2800             cmp dword ptr [esi + 0x28], 0
// 007946a8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007946ab  57                   push edi
// 007946ac  7416                 je 0x7946c4
// 007946ae  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 007946b4  8b01                 mov eax, dword ptr [ecx]
// 007946b6  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 007946bc  83ca02               or edx, 2
// 007946bf  52                   push edx
// 007946c0  ffd0                 call eax
// 007946c2  eb14                 jmp 0x7946d8
// 007946c4  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 007946ca  8b11                 mov edx, dword ptr [ecx]
// 007946cc  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 007946d2  83e0fd               and eax, 0xfffffffd
// 007946d5  50                   push eax
// 007946d6  ffd2                 call edx
// 007946d8  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007946db  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007946de  8b5614               mov edx, dword ptr [esi + 0x14]
// 007946e1  8b7e18               mov edi, dword ptr [esi + 0x18]
// 007946e4  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 007946e7  05b0000000           add eax, 0xb0
// 007946ec  8908                 mov dword ptr [eax], ecx
// 007946ee  895004               mov dword ptr [eax + 4], edx
// 007946f1  897808               mov dword ptr [eax + 8], edi
// 007946f4  89580c               mov dword ptr [eax + 0xc], ebx
// 007946f7  837e2800             cmp dword ptr [esi + 0x28], 0
// 007946fb  7525                 jne 0x794722
// 007946fd  8b3e                 mov edi, dword ptr [esi]
// 007946ff  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00794702  8b11                 mov edx, dword ptr [ecx]
// 00794704  83ec10               sub esp, 0x10
// 00794707  8bc4                 mov eax, esp
// 00794709  8938                 mov dword ptr [eax], edi
// 0079470b  8b7e04               mov edi, dword ptr [esi + 4]
// 0079470e  897804               mov dword ptr [eax + 4], edi
// 00794711  8b7e08               mov edi, dword ptr [esi + 8]
// 00794714  897808               mov dword ptr [eax + 8], edi
// 00794717  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0079471a  89780c               mov dword ptr [eax + 0xc], edi
// 0079471d  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00794720  ffd0                 call eax
// 00794722  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00794725  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00794728  5f                   pop edi
// 00794729  5e                   pop esi
// 0079472a  899194000000         mov dword ptr [ecx + 0x94], edx
// 00794730  5b                   pop ebx
// 00794731  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?Detach@CONTROLINFO@CXTPRibbonGroup@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
