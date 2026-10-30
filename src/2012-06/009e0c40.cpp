// roc 2012-06 009e0c40  unit: CXTPTabClientWnd  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e0c40
//
// 009e0c40  56                   push esi
// 009e0c41  8bf1                 mov esi, ecx
// 009e0c43  83bed800000000       cmp dword ptr [esi + 0xd8], 0
// 009e0c4a  57                   push edi
// 009e0c4b  7512                 jne 0x9e0c5f
// 009e0c4d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009e0c51  50                   push eax
// 009e0c52  e8e9f8ffff           call 0x9e0540
// 009e0c57  50                   push eax
// 009e0c58  8bce                 mov ecx, esi
// 009e0c5a  e831e1ffff           call 0x9ded90
// 009e0c5f  8bce                 mov ecx, esi
// 009e0c61  e8781afaff           call 0x9826de
// 009e0c66  8b16                 mov edx, dword ptr [esi]
// 009e0c68  8bf8                 mov edi, eax
// 009e0c6a  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 009e0c70  8bce                 mov ecx, esi
// 009e0c72  ffd0                 call eax
// 009e0c74  8bc7                 mov eax, edi
// 009e0c76  5f                   pop edi
// 009e0c77  5e                   pop esi
// 009e0c78  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMDIDestroy@CXTPTabClientWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
