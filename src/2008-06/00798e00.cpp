// roc 2008-06 00798e00  unit: CXTPRibbonControls  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00798e00
//
// 00798e00  53                   push ebx
// 00798e01  56                   push esi
// 00798e02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00798e06  8bd9                 mov ebx, ecx
// 00798e08  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 00798e0e  57                   push edi
// 00798e0f  c786f800000000000000 mov dword ptr [esi + 0xf8], 0
// 00798e19  85c9                 test ecx, ecx
// 00798e1b  7406                 je 0x798e23
// 00798e1d  56                   push esi
// 00798e1e  e8adfdffff           call 0x798bd0
// 00798e23  8b7b20               mov edi, dword ptr [ebx + 0x20]
// 00798e26  3bb774020000         cmp esi, dword ptr [edi + 0x274]
// 00798e2c  750a                 jne 0x798e38
// 00798e2e  c7877402000000000000 mov dword ptr [edi + 0x274], 0
// 00798e38  56                   push esi
// 00798e39  8bcf                 mov ecx, edi
// 00798e3b  e850a7f8ff           call 0x723590
// 00798e40  85c0                 test eax, eax
// 00798e42  740e                 je 0x798e52
// 00798e44  8b8f64020000         mov ecx, dword ptr [edi + 0x264]
// 00798e4a  8b01                 mov eax, dword ptr [ecx]
// 00798e4c  8b5058               mov edx, dword ptr [eax + 0x58]
// 00798e4f  56                   push esi
// 00798e50  ffd2                 call edx
// 00798e52  56                   push esi
// 00798e53  8bcb                 mov ecx, ebx
// 00798e55  e8b68bf5ff           call 0x6f1a10
// 00798e5a  5f                   pop edi
// 00798e5b  5e                   pop esi
// 00798e5c  5b                   pop ebx
// 00798e5d  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlRemoved@CXTPRibbonControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonQuickAccessControls.cpp
