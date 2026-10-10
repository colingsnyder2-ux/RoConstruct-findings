// roc 2008-06 0075dea0  unit: CXTPDockingPaneTabbedContainer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075dea0
//
// 0075dea0  53                   push ebx
// 0075dea1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0075dea5  56                   push esi
// 0075dea6  57                   push edi
// 0075dea7  85db                 test ebx, ebx
// 0075dea9  7466                 je 0x75df11
// 0075deab  83c1ac               add ecx, -0x54
// 0075deae  e8fdf5ffff           call 0x75d4b0
// 0075deb3  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 0075deb9  83782400             cmp dword ptr [eax + 0x24], 0
// 0075debd  7508                 jne 0x75dec7
// 0075debf  33c0                 xor eax, eax
// 0075dec1  5f                   pop edi
// 0075dec2  5e                   pop esi
// 0075dec3  5b                   pop ebx
// 0075dec4  c21800               ret 0x18
// 0075dec7  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0075deca  8b742424             mov esi, dword ptr [esp + 0x24]
// 0075dece  8b11                 mov edx, dword ptr [ecx]
// 0075ded0  8b06                 mov eax, dword ptr [esi]
// 0075ded2  8b5264               mov edx, dword ptr [edx + 0x64]
// 0075ded5  50                   push eax
// 0075ded6  ffd2                 call edx
// 0075ded8  85c0                 test eax, eax
// 0075deda  74e3                 je 0x75debf
// 0075dedc  837c242000           cmp dword ptr [esp + 0x20], 0
// 0075dee1  742e                 je 0x75df11
// 0075dee3  8b0e                 mov ecx, dword ptr [esi]
// 0075dee5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0075dee9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0075deed  8b7604               mov esi, dword ptr [esi + 4]
// 0075def0  50                   push eax
// 0075def1  83ec10               sub esp, 0x10
// 0075def4  8bc4                 mov eax, esp
// 0075def6  8910                 mov dword ptr [eax], edx
// 0075def8  03ca                 add ecx, edx
// 0075defa  897804               mov dword ptr [eax + 4], edi
// 0075defd  894808               mov dword ptr [eax + 8], ecx
// 0075df00  03f7                 add esi, edi
// 0075df02  89700c               mov dword ptr [eax + 0xc], esi
// 0075df05  8b442424             mov eax, dword ptr [esp + 0x24]
// 0075df09  50                   push eax
// 0075df0a  8bcb                 mov ecx, ebx
// 0075df0c  e80fd50100           call 0x77b420
// 0075df11  5f                   pop edi
// 0075df12  5e                   pop esi
// 0075df13  b801000000           mov eax, 1
// 0075df18  5b                   pop ebx
// 0075df19  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?DrawIcon@CXTPDockingPaneTabbedContainer@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
