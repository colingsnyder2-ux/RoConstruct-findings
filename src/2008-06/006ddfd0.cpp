// from server: 100% by auto
// roc 2008-06 006ddfd0  unit: CRobloxTreeCtrl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ddfd0
//
// 006ddfd0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 006ddfd3  8b4838               mov ecx, dword ptr [eax + 0x38]
// 006ddfd6  85c9                 test ecx, ecx
// 006ddfd8  7403                 je 0x6ddfdd
// 006ddfda  51                   push ecx
// 006ddfdb  eb0b                 jmp 0x6ddfe8
// 006ddfdd  8b4020               mov eax, dword ptr [eax + 0x20]
// 006ddfe0  50                   push eax
// 006ddfe1  ff15f82d8000         call dword ptr [0x802df8]
// 006ddfe7  50                   push eax
// 006ddfe8  e8f12bfcff           call 0x6a0bde
// 006ddfed  85c0                 test eax, eax
// 006ddfef  741c                 je 0x6de00d
// 006ddff1  8b4020               mov eax, dword ptr [eax + 0x20]
// 006ddff4  85c0                 test eax, eax
// 006ddff6  7415                 je 0x6de00d
// 006ddff8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ddffc  51                   push ecx
// 006ddffd  8b4904               mov ecx, dword ptr [ecx + 4]
// 006de000  51                   push ecx
// 006de001  6a4e                 push 0x4e
// 006de003  50                   push eax
// 006de004  ff15142e8000         call dword ptr [0x802e14]
// 006de00a  c20400               ret 4
// 006de00d  33c0                 xor eax, eax
// 006de00f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SendNotify@CXTTreeBase@@MAEJPAUtagNMHDR@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
