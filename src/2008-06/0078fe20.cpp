// roc 2008-06 0078fe20  unit: CXTShadowHook  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078fe20
//
// 0078fe20  8b442404             mov eax, dword ptr [esp + 4]
// 0078fe24  85c0                 test eax, eax
// 0078fe26  7403                 je 0x78fe2b
// 0078fe28  8b4020               mov eax, dword ptr [eax + 0x20]
// 0078fe2b  8b11                 mov edx, dword ptr [ecx]
// 0078fe2d  89442404             mov dword ptr [esp + 4], eax
// 0078fe31  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0078fe34  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\Controls\XTWndHook.cpp (function ?HookWindow@CXTWndHook@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTWndHook.cpp
