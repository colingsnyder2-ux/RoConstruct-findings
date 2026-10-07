// roc 2011-06 00869610  unit: CXTPPropertyGrid  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869610
//
// 00869610  53                   push ebx
// 00869611  8b1db819a400         mov ebx, dword ptr [0xa419b8]
// 00869617  56                   push esi
// 00869618  57                   push edi
// 00869619  8bf9                 mov edi, ecx
// 0086961b  8b4720               mov eax, dword ptr [edi + 0x20]
// 0086961e  50                   push eax
// 0086961f  ffd3                 call ebx
// 00869621  50                   push eax
// 00869622  e8010dfaff           call 0x80a328
// 00869627  8bf0                 mov esi, eax
// 00869629  85f6                 test esi, esi
// 0086962b  7453                 je 0x869680
// 0086962d  8bce                 mov ecx, esi
// 0086962f  e8ea2f1600           call 0x9cc61e
// 00869634  a900000100           test eax, 0x10000
// 00869639  741c                 je 0x869657
// 0086963b  8bce                 mov ecx, esi
// 0086963d  e8d62f1600           call 0x9cc618
// 00869642  a900000040           test eax, 0x40000000
// 00869647  740e                 je 0x869657
// 00869649  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086964c  51                   push ecx
// 0086964d  ffd3                 call ebx
// 0086964f  50                   push eax
// 00869650  e8d30cfaff           call 0x80a328
// 00869655  8bf0                 mov esi, eax
// 00869657  8b542410             mov edx, dword ptr [esp + 0x10]
// 0086965b  8b4720               mov eax, dword ptr [edi + 0x20]
// 0086965e  52                   push edx
// 0086965f  50                   push eax
// 00869660  8b4620               mov eax, dword ptr [esi + 0x20]
// 00869663  50                   push eax
// 00869664  ff15f81aa400         call dword ptr [0xa41af8]
// 0086966a  50                   push eax
// 0086966b  e8b80cfaff           call 0x80a328
// 00869670  8bc8                 mov ecx, eax
// 00869672  2bc7                 sub eax, edi
// 00869674  f7d8                 neg eax
// 00869676  5f                   pop edi
// 00869677  1bc0                 sbb eax, eax
// 00869679  5e                   pop esi
// 0086967a  23c1                 and eax, ecx
// 0086967c  5b                   pop ebx
// 0086967d  c20400               ret 4
// 00869680  5f                   pop edi
// 00869681  5e                   pop esi
// 00869682  33c0                 xor eax, eax
// 00869684  5b                   pop ebx
// 00869685  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetNextGridTabItem@CXTPPropertyGrid@@AAEPAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
