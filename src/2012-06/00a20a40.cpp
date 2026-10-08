// roc 2012-06 00a20a40  unit: CXTPRibbonBar  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a20a40
//
// 00a20a40  53                   push ebx
// 00a20a41  56                   push esi
// 00a20a42  57                   push edi
// 00a20a43  8bf1                 mov esi, ecx
// 00a20a45  e8a622f7ff           call 0x992cf0
// 00a20a4a  8bc8                 mov ecx, eax
// 00a20a4c  e86f32f8ff           call 0x9a3cc0
// 00a20a51  8bf8                 mov edi, eax
// 00a20a53  837f0400             cmp dword ptr [edi + 4], 0
// 00a20a57  7f53                 jg 0xa20aac
// 00a20a59  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a20a5c  50                   push eax
// 00a20a5d  e8ce7ffdff           call 0x9f8a30
// 00a20a62  83c404               add esp, 4
// 00a20a65  85c0                 test eax, eax
// 00a20a67  7443                 je 0xa20aac
// 00a20a69  56                   push esi
// 00a20a6a  8bcf                 mov ecx, edi
// 00a20a6c  e87f81fdff           call 0x9f8bf0
// 00a20a71  85c0                 test eax, eax
// 00a20a73  7537                 jne 0xa20aac
// 00a20a75  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 00a20a7c  752e                 jne 0xa20aac
// 00a20a7e  8bce                 mov ecx, esi
// 00a20a80  33db                 xor ebx, ebx
// 00a20a82  e869d9ffff           call 0xa1e3f0
// 00a20a87  39984c060000         cmp dword ptr [eax + 0x64c], ebx
// 00a20a8d  7422                 je 0xa20ab1
// 00a20a8f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a20a93  8b96c4010000         mov edx, dword ptr [esi + 0x1c4]
// 00a20a99  8b5208               mov edx, dword ptr [edx + 8]
// 00a20a9c  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00a20aa2  50                   push eax
// 00a20aa3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a20aa7  50                   push eax
// 00a20aa8  ffd2                 call edx
// 00a20aaa  eb07                 jmp 0xa20ab3
// 00a20aac  bb01000000           mov ebx, 1
// 00a20ab1  33c0                 xor eax, eax
// 00a20ab3  3b86d8010000         cmp eax, dword ptr [esi + 0x1d8]
// 00a20ab9  7420                 je 0xa20adb
// 00a20abb  50                   push eax
// 00a20abc  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00a20ac2  e8493d0500           call 0xa74810
// 00a20ac7  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 00a20ace  740b                 je 0xa20adb
// 00a20ad0  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a20ad3  50                   push eax
// 00a20ad4  8bcf                 mov ecx, edi
// 00a20ad6  e8c580fdff           call 0x9f8ba0
// 00a20adb  85db                 test ebx, ebx
// 00a20add  7523                 jne 0xa20b02
// 00a20adf  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00a20ae5  85c0                 test eax, eax
// 00a20ae7  7419                 je 0xa20b02
// 00a20ae9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a20aed  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a20af1  51                   push ecx
// 00a20af2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a20af5  52                   push edx
// 00a20af6  51                   push ecx
// 00a20af7  8d8884010000         lea ecx, [eax + 0x184]
// 00a20afd  e85ec30200           call 0xa4ce60
// 00a20b02  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a20b06  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a20b0a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a20b0e  52                   push edx
// 00a20b0f  50                   push eax
// 00a20b10  51                   push ecx
// 00a20b11  8bce                 mov ecx, esi
// 00a20b13  e8682bf7ff           call 0x993680
// 00a20b18  5f                   pop edi
// 00a20b19  5e                   pop esi
// 00a20b1a  5b                   pop ebx
// 00a20b1b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseMove@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
