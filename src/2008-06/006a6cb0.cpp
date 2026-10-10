// roc 2008-06 006a6cb0  unit: CPatchedControlComboBox  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6cb0
//
// 006a6cb0  8b442404             mov eax, dword ptr [esp + 4]
// 006a6cb4  56                   push esi
// 006a6cb5  8bf1                 mov esi, ecx
// 006a6cb7  898688010000         mov dword ptr [esi + 0x188], eax
// 006a6cbd  85c0                 test eax, eax
// 006a6cbf  7420                 je 0x6a6ce1
// 006a6cc1  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 006a6cc8  7534                 jne 0x6a6cfe
// 006a6cca  8b06                 mov eax, dword ptr [esi]
// 006a6ccc  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 006a6cd2  ffd2                 call edx
// 006a6cd4  898684010000         mov dword ptr [esi + 0x184], eax
// 006a6cda  897060               mov dword ptr [eax + 0x60], esi
// 006a6cdd  5e                   pop esi
// 006a6cde  c20400               ret 4
// 006a6ce1  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006a6ce7  85c9                 test ecx, ecx
// 006a6ce9  7413                 je 0x6a6cfe
// 006a6ceb  8b01                 mov eax, dword ptr [ecx]
// 006a6ced  8b5004               mov edx, dword ptr [eax + 4]
// 006a6cf0  6a01                 push 1
// 006a6cf2  ffd2                 call edx
// 006a6cf4  c7868401000000000000 mov dword ptr [esi + 0x184], 0
// 006a6cfe  5e                   pop esi
// 006a6cff  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?SetDropDownListStyle@CXTPControlComboBox@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
