// roc 2012-06 009c0360  unit: CRobloxTreeCtrl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0360
//
// 009c0360  83790400             cmp dword ptr [ecx + 4], 0
// 009c0364  7411                 je 0x9c0377
// 009c0366  8b442404             mov eax, dword ptr [esp + 4]
// 009c036a  6a03                 push 3
// 009c036c  6a03                 push 3
// 009c036e  50                   push eax
// 009c036f  e86cfcffff           call 0x9bffe0
// 009c0374  c20400               ret 4
// 009c0377  8b542404             mov edx, dword ptr [esp + 4]
// 009c037b  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 009c037e  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009c0381  52                   push edx
// 009c0382  6a09                 push 9
// 009c0384  680b110000           push 0x110b
// 009c0389  50                   push eax
// 009c038a  ff15043cb200         call dword ptr [0xb23c04]
// 009c0390  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SelectItem@CXTPTreeBase@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
