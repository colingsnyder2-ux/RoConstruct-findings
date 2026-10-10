// roc 2008-06 00705b00  unit: CXTPTabClientWnd  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00705b00
//
// 00705b00  56                   push esi
// 00705b01  8bf1                 mov esi, ecx
// 00705b03  83bed800000000       cmp dword ptr [esi + 0xd8], 0
// 00705b0a  57                   push edi
// 00705b0b  7512                 jne 0x705b1f
// 00705b0d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00705b11  50                   push eax
// 00705b12  e8e9f8ffff           call 0x705400
// 00705b17  50                   push eax
// 00705b18  8bce                 mov ecx, esi
// 00705b1a  e811e1ffff           call 0x703c30
// 00705b1f  8bce                 mov ecx, esi
// 00705b21  e842b1f9ff           call 0x6a0c68
// 00705b26  8b16                 mov edx, dword ptr [esi]
// 00705b28  8bf8                 mov edi, eax
// 00705b2a  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00705b30  8bce                 mov ecx, esi
// 00705b32  ffd0                 call eax
// 00705b34  8bc7                 mov eax, edi
// 00705b36  5f                   pop edi
// 00705b37  5e                   pop esi
// 00705b38  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMDIDestroy@CXTPTabClientWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
