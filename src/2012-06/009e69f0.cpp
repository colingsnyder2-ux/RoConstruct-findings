// roc 2012-06 009e69f0  unit: CXTThemeManagerStyle  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e69f0
//
// 009e69f0  56                   push esi
// 009e69f1  57                   push edi
// 009e69f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009e69f6  8bf1                 mov esi, ecx
// 009e69f8  85ff                 test edi, edi
// 009e69fa  7444                 je 0x9e6a40
// 009e69fc  8b4e04               mov ecx, dword ptr [esi + 4]
// 009e69ff  85c9                 test ecx, ecx
// 009e6a01  740f                 je 0x9e6a12
// 009e6a03  8b01                 mov eax, dword ptr [ecx]
// 009e6a05  8b10                 mov edx, dword ptr [eax]
// 009e6a07  6a01                 push 1
// 009e6a09  ffd2                 call edx
// 009e6a0b  c7460400000000       mov dword ptr [esi + 4], 0
// 009e6a12  897e04               mov dword ptr [esi + 4], edi
// 009e6a15  897704               mov dword ptr [edi + 4], esi
// 009e6a18  8b4e04               mov ecx, dword ptr [esi + 4]
// 009e6a1b  8b01                 mov eax, dword ptr [ecx]
// 009e6a1d  8b5004               mov edx, dword ptr [eax + 4]
// 009e6a20  ffd2                 call edx
// 009e6a22  8b7608               mov esi, dword ptr [esi + 8]
// 009e6a25  85f6                 test esi, esi
// 009e6a27  7417                 je 0x9e6a40
// 009e6a29  8da42400000000       lea esp, [esp]
// 009e6a30  8b06                 mov eax, dword ptr [esi]
// 009e6a32  8b5008               mov edx, dword ptr [eax + 8]
// 009e6a35  8bce                 mov ecx, esi
// 009e6a37  ffd2                 call edx
// 009e6a39  8b7614               mov esi, dword ptr [esi + 0x14]
// 009e6a3c  85f6                 test esi, esi
// 009e6a3e  75f0                 jne 0x9e6a30
// 009e6a40  5f                   pop edi
// 009e6a41  5e                   pop esi
// 009e6a42  c20400               ret 4
// library xtp-13.2.1/Source\Controls\XTThemeManager.cpp (function ?SetTheme@CXTThemeManagerStyleFactory@@QAEXPAVCXTThemeManagerStyle@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTThemeManager.cpp
