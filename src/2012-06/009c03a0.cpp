// from server: 100% by auto
// roc 2012-06 009c03a0  unit: CRobloxTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c03a0
//
// 009c03a0  8b442404             mov eax, dword ptr [esp + 4]
// 009c03a4  56                   push esi
// 009c03a5  57                   push edi
// 009c03a6  33ff                 xor edi, edi
// 009c03a8  8bf1                 mov esi, ecx
// 009c03aa  85c0                 test eax, eax
// 009c03ac  740f                 je 0x9c03bd
// 009c03ae  6a01                 push 1
// 009c03b0  6a01                 push 1
// 009c03b2  50                   push eax
// 009c03b3  e828fcffff           call 0x9bffe0
// 009c03b8  5f                   pop edi
// 009c03b9  5e                   pop esi
// 009c03ba  c20400               ret 4
// 009c03bd  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c03c0  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c03c3  6a00                 push 0
// 009c03c5  6a09                 push 9
// 009c03c7  680a110000           push 0x110a
// 009c03cc  50                   push eax
// 009c03cd  ff15043cb200         call dword ptr [0xb23c04]
// 009c03d3  85c0                 test eax, eax
// 009c03d5  7411                 je 0x9c03e8
// 009c03d7  6a01                 push 1
// 009c03d9  6a00                 push 0
// 009c03db  50                   push eax
// 009c03dc  8bce                 mov ecx, esi
// 009c03de  e8fdfbffff           call 0x9bffe0
// 009c03e3  5f                   pop edi
// 009c03e4  5e                   pop esi
// 009c03e5  c20400               ret 4
// 009c03e8  8bc7                 mov eax, edi
// 009c03ea  5f                   pop edi
// 009c03eb  5e                   pop esi
// 009c03ec  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?FocusItem@CXTPTreeBase@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
