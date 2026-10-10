// roc 2008-06 004131c0  unit: CRbxChildFrame  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004131c0
//
// 004131c0  8b442408             mov eax, dword ptr [esp + 8]
// 004131c4  56                   push esi
// 004131c5  85c0                 test eax, eax
// 004131c7  7504                 jne 0x4131cd
// 004131c9  33f6                 xor esi, esi
// 004131cb  eb03                 jmp 0x4131d0
// 004131cd  8b7004               mov esi, dword ptr [eax + 4]
// 004131d0  8b442408             mov eax, dword ptr [esp + 8]
// 004131d4  85c0                 test eax, eax
// 004131d6  7504                 jne 0x4131dc
// 004131d8  33d2                 xor edx, edx
// 004131da  eb03                 jmp 0x4131df
// 004131dc  8b5004               mov edx, dword ptr [eax + 4]
// 004131df  8b4104               mov eax, dword ptr [ecx + 4]
// 004131e2  56                   push esi
// 004131e3  52                   push edx
// 004131e4  50                   push eax
// 004131e5  e83cd72800           call 0x6a0926
// 004131ea  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 004131f0  8b08                 mov ecx, dword ptr [eax]
// 004131f2  e8c9fdffff           call 0x412fc0
// 004131f7  5e                   pop esi
// 004131f8  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPImageEditor.cpp (function ?Add@CImageList@@QAEHPAVCBitmap@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPImageEditor.cpp
