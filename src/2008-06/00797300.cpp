// from server: 100% by auto
// roc 2008-06 00797300  unit: CXTPRibbonTabPopupToolBar  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797300
//
// 00797300  56                   push esi
// 00797301  57                   push edi
// 00797302  8bf1                 mov esi, ecx
// 00797304  e807dbf1ff           call 0x6b4e10
// 00797309  8bc8                 mov ecx, eax
// 0079730b  e8d0d2f0ff           call 0x6a45e0
// 00797310  8bf8                 mov edi, eax
// 00797312  837f0400             cmp dword ptr [edi + 4], 0
// 00797316  7f56                 jg 0x79736e
// 00797318  8b4620               mov eax, dword ptr [esi + 0x20]
// 0079731b  50                   push eax
// 0079731c  e86f5bf8ff           call 0x71ce90
// 00797321  83c404               add esp, 4
// 00797324  85c0                 test eax, eax
// 00797326  7446                 je 0x79736e
// 00797328  56                   push esi
// 00797329  8bcf                 mov ecx, edi
// 0079732b  e8e05cf8ff           call 0x71d010
// 00797330  85c0                 test eax, eax
// 00797332  753a                 jne 0x79736e
// 00797334  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 0079733b  7531                 jne 0x79736e
// 0079733d  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 00797343  e878adf8ff           call 0x7220c0
// 00797348  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 0079734f  741d                 je 0x79736e
// 00797351  8b442414             mov eax, dword ptr [esp + 0x14]
// 00797355  8b965c020000         mov edx, dword ptr [esi + 0x25c]
// 0079735b  8b5208               mov edx, dword ptr [edx + 8]
// 0079735e  8d8e5c020000         lea ecx, [esi + 0x25c]
// 00797364  50                   push eax
// 00797365  8b442414             mov eax, dword ptr [esp + 0x14]
// 00797369  50                   push eax
// 0079736a  ffd2                 call edx
// 0079736c  eb02                 jmp 0x797370
// 0079736e  33c0                 xor eax, eax
// 00797370  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 00797376  7420                 je 0x797398
// 00797378  50                   push eax
// 00797379  8d8e5c020000         lea ecx, [esi + 0x25c]
// 0079737f  e8ecfeffff           call 0x797270
// 00797384  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 0079738b  740b                 je 0x797398
// 0079738d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00797390  50                   push eax
// 00797391  8bcf                 mov ecx, edi
// 00797393  e8285cf8ff           call 0x71cfc0
// 00797398  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079739c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007973a0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007973a4  50                   push eax
// 007973a5  51                   push ecx
// 007973a6  52                   push edx
// 007973a7  8bce                 mov ecx, esi
// 007973a9  e8c293f5ff           call 0x6f0770
// 007973ae  5f                   pop edi
// 007973af  5e                   pop esi
// 007973b0  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonTabPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
