// from server: 100% by auto
// roc 2007-08 00666020  unit: CRobloxTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666020
//
// 00666020  8b442404             mov eax, dword ptr [esp + 4]
// 00666024  56                   push esi
// 00666025  57                   push edi
// 00666026  33ff                 xor edi, edi
// 00666028  85c0                 test eax, eax
// 0066602a  8bf1                 mov esi, ecx
// 0066602c  740f                 je 0x66603d
// 0066602e  6a01                 push 1
// 00666030  6a01                 push 1
// 00666032  50                   push eax
// 00666033  e8f8fbffff           call 0x665c30
// 00666038  5f                   pop edi
// 00666039  5e                   pop esi
// 0066603a  c20400               ret 4
// 0066603d  8b4634               mov eax, dword ptr [esi + 0x34]
// 00666040  8b4020               mov eax, dword ptr [eax + 0x20]
// 00666043  6a00                 push 0
// 00666045  6a09                 push 9
// 00666047  680a110000           push 0x110a
// 0066604c  50                   push eax
// 0066604d  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00666053  85c0                 test eax, eax
// 00666055  7411                 je 0x666068
// 00666057  6a01                 push 1
// 00666059  6a00                 push 0
// 0066605b  50                   push eax
// 0066605c  8bce                 mov ecx, esi
// 0066605e  e8cdfbffff           call 0x665c30
// 00666063  5f                   pop edi
// 00666064  5e                   pop esi
// 00666065  c20400               ret 4
// 00666068  8bc7                 mov eax, edi
// 0066606a  5f                   pop edi
// 0066606b  5e                   pop esi
// 0066606c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?FocusItem@CXTTreeBase@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
