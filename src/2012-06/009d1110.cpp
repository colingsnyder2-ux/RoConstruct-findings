// roc 2012-06 009d1110  unit: CXTPControls  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d1110
//
// 009d1110  8b442408             mov eax, dword ptr [esp + 8]
// 009d1114  56                   push esi
// 009d1115  57                   push edi
// 009d1116  8bf1                 mov esi, ecx
// 009d1118  85c0                 test eax, eax
// 009d111a  7c05                 jl 0x9d1121
// 009d111c  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 009d111f  7c03                 jl 0x9d1124
// 009d1121  8b462c               mov eax, dword ptr [esi + 0x2c]
// 009d1124  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009d1128  6a01                 push 1
// 009d112a  57                   push edi
// 009d112b  50                   push eax
// 009d112c  8d4e24               lea ecx, [esi + 0x24]
// 009d112f  e89ca1feff           call 0x9bb2d0
// 009d1134  8b06                 mov eax, dword ptr [esi]
// 009d1136  8b5068               mov edx, dword ptr [eax + 0x68]
// 009d1139  57                   push edi
// 009d113a  8bce                 mov ecx, esi
// 009d113c  ffd2                 call edx
// 009d113e  8bc7                 mov eax, edi
// 009d1140  5f                   pop edi
// 009d1141  5e                   pop esi
// 009d1142  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?InsertAt@CXTPControls@@QAEPAVCXTPControl@@PAV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPControls.cpp
