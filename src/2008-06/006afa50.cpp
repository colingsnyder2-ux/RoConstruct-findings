// roc 2008-06 006afa50  unit: CXTPPaintManager  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006afa50
//
// 006afa50  8b542418             mov edx, dword ptr [esp + 0x18]
// 006afa54  8b01                 mov eax, dword ptr [ecx]
// 006afa56  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 006afa5c  53                   push ebx
// 006afa5d  56                   push esi
// 006afa5e  57                   push edi
// 006afa5f  6a00                 push 0
// 006afa61  6a01                 push 1
// 006afa63  52                   push edx
// 006afa64  8b542434             mov edx, dword ptr [esp + 0x34]
// 006afa68  6a00                 push 0
// 006afa6a  52                   push edx
// 006afa6b  8b542434             mov edx, dword ptr [esp + 0x34]
// 006afa6f  6a00                 push 0
// 006afa71  52                   push edx
// 006afa72  ffd0                 call eax
// 006afa74  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 006afa79  50                   push eax
// 006afa7a  742a                 je 0x6afaa6
// 006afa7c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006afa80  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006afa84  51                   push ecx
// 006afa85  56                   push esi
// 006afa86  8d7902               lea edi, [ecx + 2]
// 006afa89  57                   push edi
// 006afa8a  8d5602               lea edx, [esi + 2]
// 006afa8d  52                   push edx
// 006afa8e  8d59fe               lea ebx, [ecx - 2]
// 006afa91  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006afa95  53                   push ebx
// 006afa96  52                   push edx
// 006afa97  51                   push ecx
// 006afa98  e8738f0400           call 0x6f8a10
// 006afa9d  83c420               add esp, 0x20
// 006afaa0  5f                   pop edi
// 006afaa1  5e                   pop esi
// 006afaa2  5b                   pop ebx
// 006afaa3  c22000               ret 0x20
// 006afaa6  8b542420             mov edx, dword ptr [esp + 0x20]
// 006afaaa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006afaae  8d7201               lea esi, [edx + 1]
// 006afab1  56                   push esi
// 006afab2  51                   push ecx
// 006afab3  4a                   dec edx
// 006afab4  52                   push edx
// 006afab5  8d7902               lea edi, [ecx + 2]
// 006afab8  57                   push edi
// 006afab9  52                   push edx
// 006afaba  8b542428             mov edx, dword ptr [esp + 0x28]
// 006afabe  8d59fe               lea ebx, [ecx - 2]
// 006afac1  53                   push ebx
// 006afac2  52                   push edx
// 006afac3  e8488f0400           call 0x6f8a10
// 006afac8  83c420               add esp, 0x20
// 006afacb  5f                   pop edi
// 006afacc  5e                   pop esi
// 006afacd  5b                   pop ebx
// 006aface  c22000               ret 0x20
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?DrawDropDownGlyph@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPControl@@VCPoint@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp
