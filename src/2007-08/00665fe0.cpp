// from server: 100% by auto
// roc 2007-08 00665fe0  unit: CRobloxTreeCtrl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665fe0
//
// 00665fe0  83790400             cmp dword ptr [ecx + 4], 0
// 00665fe4  7411                 je 0x665ff7
// 00665fe6  8b442404             mov eax, dword ptr [esp + 4]
// 00665fea  6a03                 push 3
// 00665fec  6a03                 push 3
// 00665fee  50                   push eax
// 00665fef  e83cfcffff           call 0x665c30
// 00665ff4  c20400               ret 4
// 00665ff7  8b542404             mov edx, dword ptr [esp + 4]
// 00665ffb  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00665ffe  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00666001  52                   push edx
// 00666002  6a09                 push 9
// 00666004  680b110000           push 0x110b
// 00666009  50                   push eax
// 0066600a  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00666010  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?SelectItem@CXTTreeBase@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
