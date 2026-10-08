// from server: 100% by auto
// roc 2008-06 006dcd80  unit: CRobloxTreeCtrl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dcd80
//
// 006dcd80  83790400             cmp dword ptr [ecx + 4], 0
// 006dcd84  7411                 je 0x6dcd97
// 006dcd86  8b442404             mov eax, dword ptr [esp + 4]
// 006dcd8a  6a03                 push 3
// 006dcd8c  6a03                 push 3
// 006dcd8e  50                   push eax
// 006dcd8f  e86cfcffff           call 0x6dca00
// 006dcd94  c20400               ret 4
// 006dcd97  8b542404             mov edx, dword ptr [esp + 4]
// 006dcd9b  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 006dcd9e  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006dcda1  52                   push edx
// 006dcda2  6a09                 push 9
// 006dcda4  680b110000           push 0x110b
// 006dcda9  50                   push eax
// 006dcdaa  ff15142e8000         call dword ptr [0x802e14]
// 006dcdb0  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SelectItem@CXTTreeBase@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
