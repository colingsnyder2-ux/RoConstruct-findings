// roc 2008-06 0075fe00  unit: CXTPDockingPaneTabbedContainer  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075fe00
//
// 0075fe00  53                   push ebx
// 0075fe01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0075fe05  56                   push esi
// 0075fe06  8bf1                 mov esi, ecx
// 0075fe08  399ea4010000         cmp dword ptr [esi + 0x1a4], ebx
// 0075fe0e  7461                 je 0x75fe71
// 0075fe10  837c241400           cmp dword ptr [esp + 0x14], 0
// 0075fe15  57                   push edi
// 0075fe16  899ea4010000         mov dword ptr [esi + 0x1a4], ebx
// 0075fe1c  6a01                 push 1
// 0075fe1e  742b                 je 0x75fe4b
// 0075fe20  8d7e54               lea edi, [esi + 0x54]
// 0075fe23  57                   push edi
// 0075fe24  8bcf                 mov ecx, edi
// 0075fe26  c786a001000001000000 mov dword ptr [esi + 0x1a0], 1
// 0075fe30  e86bd6ffff           call 0x75d4a0
// 0075fe35  8bc8                 mov ecx, eax
// 0075fe37  e8b45df8ff           call 0x6e5bf0
// 0075fe3c  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0075fe3f  85c9                 test ecx, ecx
// 0075fe41  7413                 je 0x75fe56
// 0075fe43  8b01                 mov eax, dword ptr [ecx]
// 0075fe45  8b5034               mov edx, dword ptr [eax + 0x34]
// 0075fe48  57                   push edi
// 0075fe49  eb09                 jmp 0x75fe54
// 0075fe4b  8b4654               mov eax, dword ptr [esi + 0x54]
// 0075fe4e  8b5038               mov edx, dword ptr [eax + 0x38]
// 0075fe51  8d4e54               lea ecx, [esi + 0x54]
// 0075fe54  ffd2                 call edx
// 0075fe56  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0075fe5c  50                   push eax
// 0075fe5d  8bce                 mov ecx, esi
// 0075fe5f  e84cffffff           call 0x75fdb0
// 0075fe64  50                   push eax
// 0075fe65  8d8ea8000000         lea ecx, [esi + 0xa8]
// 0075fe6b  e8c0b10100           call 0x77b030
// 0075fe70  5f                   pop edi
// 0075fe71  837c241000           cmp dword ptr [esp + 0x10], 0
// 0075fe76  7433                 je 0x75feab
// 0075fe78  83be9401000000       cmp dword ptr [esi + 0x194], 0
// 0075fe7f  741d                 je 0x75fe9e
// 0075fe81  8d4e54               lea ecx, [esi + 0x54]
// 0075fe84  e817d6ffff           call 0x75d4a0
// 0075fe89  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 0075fe8f  8b10                 mov edx, dword ptr [eax]
// 0075fe91  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0075fe97  51                   push ecx
// 0075fe98  6a01                 push 1
// 0075fe9a  8bc8                 mov ecx, eax
// 0075fe9c  ffd2                 call edx
// 0075fe9e  85db                 test ebx, ebx
// 0075fea0  7409                 je 0x75feab
// 0075fea2  8b03                 mov eax, dword ptr [ebx]
// 0075fea4  8b5058               mov edx, dword ptr [eax + 0x58]
// 0075fea7  8bcb                 mov ecx, ebx
// 0075fea9  ffd2                 call edx
// 0075feab  5e                   pop esi
// 0075feac  5b                   pop ebx
// 0075fead  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?SelectPane@CXTPDockingPaneTabbedContainer@@UAEXPAVCXTPDockingPane@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
