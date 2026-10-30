// roc 2009-12 008e2fa0  unit: CXTShadowHook  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2fa0
//
// 008e2fa0  8b442404             mov eax, dword ptr [esp + 4]
// 008e2fa4  85c0                 test eax, eax
// 008e2fa6  7403                 je 0x8e2fab
// 008e2fa8  8b4020               mov eax, dword ptr [eax + 0x20]
// 008e2fab  8b11                 mov edx, dword ptr [ecx]
// 008e2fad  89442404             mov dword ptr [esp + 4], eax
// 008e2fb1  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008e2fb4  ffe0                 jmp eax
// copied from an identical function in another client (function ?HookWindow@CXTWndHook@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTWndHook.cpp