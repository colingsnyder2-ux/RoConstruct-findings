// from server: 100% by auto
// roc 2008-06 0070da80  unit: CXTThemeManagerStyle  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070da80
//
// 0070da80  56                   push esi
// 0070da81  57                   push edi
// 0070da82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0070da86  8bf1                 mov esi, ecx
// 0070da88  85ff                 test edi, edi
// 0070da8a  7444                 je 0x70dad0
// 0070da8c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0070da8f  85c9                 test ecx, ecx
// 0070da91  740f                 je 0x70daa2
// 0070da93  8b01                 mov eax, dword ptr [ecx]
// 0070da95  8b10                 mov edx, dword ptr [eax]
// 0070da97  6a01                 push 1
// 0070da99  ffd2                 call edx
// 0070da9b  c7460400000000       mov dword ptr [esi + 4], 0
// 0070daa2  897e04               mov dword ptr [esi + 4], edi
// 0070daa5  897704               mov dword ptr [edi + 4], esi
// 0070daa8  8b4e04               mov ecx, dword ptr [esi + 4]
// 0070daab  8b01                 mov eax, dword ptr [ecx]
// 0070daad  8b5004               mov edx, dword ptr [eax + 4]
// 0070dab0  ffd2                 call edx
// 0070dab2  8b7608               mov esi, dword ptr [esi + 8]
// 0070dab5  85f6                 test esi, esi
// 0070dab7  7417                 je 0x70dad0
// 0070dab9  8da42400000000       lea esp, [esp]
// 0070dac0  8b06                 mov eax, dword ptr [esi]
// 0070dac2  8b5008               mov edx, dword ptr [eax + 8]
// 0070dac5  8bce                 mov ecx, esi
// 0070dac7  ffd2                 call edx
// 0070dac9  8b7614               mov esi, dword ptr [esi + 0x14]
// 0070dacc  85f6                 test esi, esi
// 0070dace  75f0                 jne 0x70dac0
// 0070dad0  5f                   pop edi
// 0070dad1  5e                   pop esi
// 0070dad2  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ?SetTheme@CXTThemeManagerStyleFactory@@QAEXPAVCXTThemeManagerStyle@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
