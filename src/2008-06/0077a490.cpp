// roc 2008-06 0077a490  unit: CXTPPropertyGridInplaceList  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077a490
//
// 0077a490  83ec10               sub esp, 0x10
// 0077a493  53                   push ebx
// 0077a494  56                   push esi
// 0077a495  57                   push edi
// 0077a496  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0077a49a  8b4718               mov eax, dword ptr [edi + 0x18]
// 0077a49d  50                   push eax
// 0077a49e  8bf1                 mov esi, ecx
// 0077a4a0  e8831b0400           call 0x7bc028
// 0077a4a5  8d4f1c               lea ecx, [edi + 0x1c]
// 0077a4a8  51                   push ecx
// 0077a4a9  8d542410             lea edx, [esp + 0x10]
// 0077a4ad  52                   push edx
// 0077a4ae  8bd8                 mov ebx, eax
// 0077a4b0  ff15702d8000         call dword ptr [0x802d70]
// 0077a4b6  8b4708               mov eax, dword ptr [edi + 8]
// 0077a4b9  6a00                 push 0
// 0077a4bb  50                   push eax
// 0077a4bc  8b4620               mov eax, dword ptr [esi + 0x20]
// 0077a4bf  6899010000           push 0x199
// 0077a4c4  50                   push eax
// 0077a4c5  ff15142e8000         call dword ptr [0x802e14]
// 0077a4cb  837e5400             cmp dword ptr [esi + 0x54], 0
// 0077a4cf  7433                 je 0x77a504
// 0077a4d1  8b5710               mov edx, dword ptr [edi + 0x10]
// 0077a4d4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077a4d8  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0077a4db  8b31                 mov esi, dword ptr [ecx]
// 0077a4dd  83e201               and edx, 1
// 0077a4e0  52                   push edx
// 0077a4e1  83ec10               sub esp, 0x10
// 0077a4e4  8bd4                 mov edx, esp
// 0077a4e6  893a                 mov dword ptr [edx], edi
// 0077a4e8  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0077a4ec  897a04               mov dword ptr [edx + 4], edi
// 0077a4ef  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0077a4f3  897a08               mov dword ptr [edx + 8], edi
// 0077a4f6  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0077a4fa  50                   push eax
// 0077a4fb  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0077a4fe  53                   push ebx
// 0077a4ff  897a0c               mov dword ptr [edx + 0xc], edi
// 0077a502  ffd0                 call eax
// 0077a504  5f                   pop edi
// 0077a505  5e                   pop esi
// 0077a506  5b                   pop ebx
// 0077a507  83c410               add esp, 0x10
// 0077a50a  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?DrawItem@CXTPPropertyGridInplaceList@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
