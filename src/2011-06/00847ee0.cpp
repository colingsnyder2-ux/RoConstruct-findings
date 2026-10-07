// roc 2011-06 00847ee0  unit: CRobloxTreeCtrl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847ee0
//
// 00847ee0  83790400             cmp dword ptr [ecx + 4], 0
// 00847ee4  7411                 je 0x847ef7
// 00847ee6  8b442404             mov eax, dword ptr [esp + 4]
// 00847eea  6a03                 push 3
// 00847eec  6a03                 push 3
// 00847eee  50                   push eax
// 00847eef  e86cfcffff           call 0x847b60
// 00847ef4  c20400               ret 4
// 00847ef7  8b542404             mov edx, dword ptr [esp + 4]
// 00847efb  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00847efe  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00847f01  52                   push edx
// 00847f02  6a09                 push 9
// 00847f04  680b110000           push 0x110b
// 00847f09  50                   push eax
// 00847f0a  ff15c019a400         call dword ptr [0xa419c0]
// 00847f10  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SelectItem@CXTPTreeBase@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
