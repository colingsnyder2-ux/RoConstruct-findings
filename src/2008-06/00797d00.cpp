// roc 2008-06 00797d00  unit: CXTPRibbonGroupControlPopup  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797d00
//
// 00797d00  56                   push esi
// 00797d01  8bf1                 mov esi, ecx
// 00797d03  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00797d09  85c0                 test eax, eax
// 00797d0b  0f8488000000         je 0x797d99
// 00797d11  50                   push eax
// 00797d12  e8b9a0f8ff           call 0x721dd0
// 00797d17  50                   push eax
// 00797d18  e8098ff0ff           call 0x6a0c26
// 00797d1d  83c408               add esp, 8
// 00797d20  85c0                 test eax, eax
// 00797d22  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00797d28  7571                 jne 0x797d9b
// 00797d2a  50                   push eax
// 00797d2b  e840ebffff           call 0x796870
// 00797d30  50                   push eax
// 00797d31  e8f08ef0ff           call 0x6a0c26
// 00797d36  83c408               add esp, 8
// 00797d39  85c0                 test eax, eax
// 00797d3b  740e                 je 0x797d4b
// 00797d3d  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00797d43  8b8178020000         mov eax, dword ptr [ecx + 0x278]
// 00797d49  5e                   pop esi
// 00797d4a  c3                   ret 
// 00797d4b  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 00797d51  52                   push edx
// 00797d52  e809ebffff           call 0x796860
// 00797d57  50                   push eax
// 00797d58  e8c98ef0ff           call 0x6a0c26
// 00797d5d  83c408               add esp, 8
// 00797d60  85c0                 test eax, eax
// 00797d62  740e                 je 0x797d72
// 00797d64  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00797d6a  8b8078020000         mov eax, dword ptr [eax + 0x278]
// 00797d70  5e                   pop esi
// 00797d71  c3                   ret 
// 00797d72  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00797d78  51                   push ecx
// 00797d79  e852e7ffff           call 0x7964d0
// 00797d7e  50                   push eax
// 00797d7f  e8a28ef0ff           call 0x6a0c26
// 00797d84  83c408               add esp, 8
// 00797d87  85c0                 test eax, eax
// 00797d89  740e                 je 0x797d99
// 00797d8b  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 00797d91  8b825c020000         mov eax, dword ptr [edx + 0x25c]
// 00797d97  5e                   pop esi
// 00797d98  c3                   ret 
// 00797d99  33c0                 xor eax, eax
// 00797d9b  5e                   pop esi
// 00797d9c  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroup.cpp (function ?GetRibbonBar@CXTPRibbonGroupControlPopup@@QBEPAVCXTPRibbonBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp
