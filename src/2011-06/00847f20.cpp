// roc 2011-06 00847f20  unit: CRobloxTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847f20
//
// 00847f20  8b442404             mov eax, dword ptr [esp + 4]
// 00847f24  56                   push esi
// 00847f25  57                   push edi
// 00847f26  33ff                 xor edi, edi
// 00847f28  8bf1                 mov esi, ecx
// 00847f2a  85c0                 test eax, eax
// 00847f2c  740f                 je 0x847f3d
// 00847f2e  6a01                 push 1
// 00847f30  6a01                 push 1
// 00847f32  50                   push eax
// 00847f33  e828fcffff           call 0x847b60
// 00847f38  5f                   pop edi
// 00847f39  5e                   pop esi
// 00847f3a  c20400               ret 4
// 00847f3d  8b4634               mov eax, dword ptr [esi + 0x34]
// 00847f40  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847f43  6a00                 push 0
// 00847f45  6a09                 push 9
// 00847f47  680a110000           push 0x110a
// 00847f4c  50                   push eax
// 00847f4d  ff15c019a400         call dword ptr [0xa419c0]
// 00847f53  85c0                 test eax, eax
// 00847f55  7411                 je 0x847f68
// 00847f57  6a01                 push 1
// 00847f59  6a00                 push 0
// 00847f5b  50                   push eax
// 00847f5c  8bce                 mov ecx, esi
// 00847f5e  e8fdfbffff           call 0x847b60
// 00847f63  5f                   pop edi
// 00847f64  5e                   pop esi
// 00847f65  c20400               ret 4
// 00847f68  8bc7                 mov eax, edi
// 00847f6a  5f                   pop edi
// 00847f6b  5e                   pop esi
// 00847f6c  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?FocusItem@CXTPTreeBase@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
