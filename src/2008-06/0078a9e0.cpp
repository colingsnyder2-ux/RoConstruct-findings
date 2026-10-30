// from server: 100% by auto
// roc 2008-06 0078a9e0  unit: CXTColorWnd  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a9e0
//
// 0078a9e0  8b442404             mov eax, dword ptr [esp + 4]
// 0078a9e4  56                   push esi
// 0078a9e5  50                   push eax
// 0078a9e6  8bf1                 mov esi, ecx
// 0078a9e8  e8dd69f1ff           call 0x6a13ca
// 0078a9ed  6a00                 push 0
// 0078a9ef  c705d4f1970001000000 mov dword ptr [0x97f1d4], 1
// 0078a9f9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078a9fc  6a00                 push 0
// 0078a9fe  51                   push ecx
// 0078a9ff  ff15182e8000         call dword ptr [0x802e18]
// 0078aa05  5e                   pop esi
// 0078aa06  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?OnSetFocus@CXTColorWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
