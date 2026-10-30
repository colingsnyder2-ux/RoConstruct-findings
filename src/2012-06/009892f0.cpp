// roc 2012-06 009892f0  unit: CXTPPaintManager  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009892f0
//
// 009892f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 009892f4  8b01                 mov eax, dword ptr [ecx]
// 009892f6  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 009892fc  53                   push ebx
// 009892fd  56                   push esi
// 009892fe  57                   push edi
// 009892ff  6a00                 push 0
// 00989301  6a01                 push 1
// 00989303  52                   push edx
// 00989304  8b542434             mov edx, dword ptr [esp + 0x34]
// 00989308  6a00                 push 0
// 0098930a  52                   push edx
// 0098930b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0098930f  6a00                 push 0
// 00989311  52                   push edx
// 00989312  ffd0                 call eax
// 00989314  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00989319  50                   push eax
// 0098931a  742a                 je 0x989346
// 0098931c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00989320  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00989324  51                   push ecx
// 00989325  56                   push esi
// 00989326  8d7902               lea edi, [ecx + 2]
// 00989329  57                   push edi
// 0098932a  8d5602               lea edx, [esi + 2]
// 0098932d  52                   push edx
// 0098932e  8d59fe               lea ebx, [ecx - 2]
// 00989331  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00989335  53                   push ebx
// 00989336  52                   push edx
// 00989337  51                   push ecx
// 00989338  e863f5ffff           call 0x9888a0
// 0098933d  83c420               add esp, 0x20
// 00989340  5f                   pop edi
// 00989341  5e                   pop esi
// 00989342  5b                   pop ebx
// 00989343  c22000               ret 0x20
// 00989346  8b542420             mov edx, dword ptr [esp + 0x20]
// 0098934a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0098934e  8d7201               lea esi, [edx + 1]
// 00989351  56                   push esi
// 00989352  51                   push ecx
// 00989353  4a                   dec edx
// 00989354  52                   push edx
// 00989355  8d7902               lea edi, [ecx + 2]
// 00989358  57                   push edi
// 00989359  52                   push edx
// 0098935a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098935e  8d59fe               lea ebx, [ecx - 2]
// 00989361  53                   push ebx
// 00989362  52                   push edx
// 00989363  e838f5ffff           call 0x9888a0
// 00989368  83c420               add esp, 0x20
// 0098936b  5f                   pop edi
// 0098936c  5e                   pop esi
// 0098936d  5b                   pop ebx
// 0098936e  c22000               ret 0x20
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?DrawDropDownGlyph@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPControl@@VCPoint@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPPaintManager.cpp
