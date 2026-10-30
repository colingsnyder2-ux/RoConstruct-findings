// roc 2012-06 009e4580  unit: CXTPDockingPane  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4580
//
// 009e4580  56                   push esi
// 009e4581  57                   push edi
// 009e4582  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009e4586  8bf1                 mov esi, ecx
// 009e4588  85ff                 test edi, edi
// 009e458a  7471                 je 0x9e45fd
// 009e458c  8b4720               mov eax, dword ptr [edi + 0x20]
// 009e458f  53                   push ebx
// 009e4590  8d5e20               lea ebx, [esi + 0x20]
// 009e4593  8bcb                 mov ecx, ebx
// 009e4595  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 009e459b  e8d05b0500           call 0xa3a170
// 009e45a0  8bc8                 mov ecx, eax
// 009e45a2  e82935feff           call 0x9c7ad0
// 009e45a7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 009e45aa  85c9                 test ecx, ecx
// 009e45ac  7415                 je 0x9e45c3
// 009e45ae  8b01                 mov eax, dword ptr [ecx]
// 009e45b0  8b5020               mov edx, dword ptr [eax + 0x20]
// 009e45b3  ffd2                 call edx
// 009e45b5  50                   push eax
// 009e45b6  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 009e45bc  50                   push eax
// 009e45bd  ff15ac3cb200         call dword ptr [0xb23cac]
// 009e45c3  8bcb                 mov ecx, ebx
// 009e45c5  e8a65b0500           call 0xa3a170
// 009e45ca  83b84401000000       cmp dword ptr [eax + 0x144], 0
// 009e45d1  5b                   pop ebx
// 009e45d2  7429                 je 0x9e45fd
// 009e45d4  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009e45d7  6a00                 push 0
// 009e45d9  6a00                 push 0
// 009e45db  6864030000           push 0x364
// 009e45e0  51                   push ecx
// 009e45e1  ff15043cb200         call dword ptr [0xb23c04]
// 009e45e7  8b5720               mov edx, dword ptr [edi + 0x20]
// 009e45ea  6a01                 push 1
// 009e45ec  6a01                 push 1
// 009e45ee  6a00                 push 0
// 009e45f0  6a00                 push 0
// 009e45f2  6864030000           push 0x364
// 009e45f7  52                   push edx
// 009e45f8  e8c3520b00           call 0xa998c0
// 009e45fd  5f                   pop edi
// 009e45fe  5e                   pop esi
// 009e45ff  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Attach@CXTPDockingPane@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
