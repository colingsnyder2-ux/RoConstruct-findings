// from server: 100% by auto
// roc 2008-06 0078fd50  unit: CXTShadowHook  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078fd50
//
// 0078fd50  8b4104               mov eax, dword ptr [ecx + 4]
// 0078fd53  85c0                 test eax, eax
// 0078fd55  7411                 je 0x78fd68
// 0078fd57  50                   push eax
// 0078fd58  ff15502d8000         call dword ptr [0x802d50]
// 0078fd5e  85c0                 test eax, eax
// 0078fd60  7406                 je 0x78fd68
// 0078fd62  b801000000           mov eax, 1
// 0078fd67  c3                   ret 
// 0078fd68  33c0                 xor eax, eax
// 0078fd6a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndHook.cpp (function ?IsWindowHooked@CXTWndHook@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndHook.cpp
