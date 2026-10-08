// from server: 100% by auto
// roc 2008-06 006dcdc0  unit: CRobloxTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dcdc0
//
// 006dcdc0  8b442404             mov eax, dword ptr [esp + 4]
// 006dcdc4  56                   push esi
// 006dcdc5  57                   push edi
// 006dcdc6  33ff                 xor edi, edi
// 006dcdc8  8bf1                 mov esi, ecx
// 006dcdca  85c0                 test eax, eax
// 006dcdcc  740f                 je 0x6dcddd
// 006dcdce  6a01                 push 1
// 006dcdd0  6a01                 push 1
// 006dcdd2  50                   push eax
// 006dcdd3  e828fcffff           call 0x6dca00
// 006dcdd8  5f                   pop edi
// 006dcdd9  5e                   pop esi
// 006dcdda  c20400               ret 4
// 006dcddd  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dcde0  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dcde3  6a00                 push 0
// 006dcde5  6a09                 push 9
// 006dcde7  680a110000           push 0x110a
// 006dcdec  50                   push eax
// 006dcded  ff15142e8000         call dword ptr [0x802e14]
// 006dcdf3  85c0                 test eax, eax
// 006dcdf5  7411                 je 0x6dce08
// 006dcdf7  6a01                 push 1
// 006dcdf9  6a00                 push 0
// 006dcdfb  50                   push eax
// 006dcdfc  8bce                 mov ecx, esi
// 006dcdfe  e8fdfbffff           call 0x6dca00
// 006dce03  5f                   pop edi
// 006dce04  5e                   pop esi
// 006dce05  c20400               ret 4
// 006dce08  8bc7                 mov eax, edi
// 006dce0a  5f                   pop edi
// 006dce0b  5e                   pop esi
// 006dce0c  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?FocusItem@CXTTreeBase@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
