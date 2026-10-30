// from server: 100% by auto
// roc 2008-06 0042f080  unit: CPatchedControlComboBox  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042f080
//
// 0042f080  8b442404             mov eax, dword ptr [esp + 4]
// 0042f084  85c0                 test eax, eax
// 0042f086  7c0e                 jl 0x42f096
// 0042f088  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0042f08b  7d09                 jge 0x42f096
// 0042f08d  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0042f090  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0042f093  c20400               ret 4
// 0042f096  33c0                 xor eax, eax
// 0042f098  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetAt@CXTPControls@@QBEPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
