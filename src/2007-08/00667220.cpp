// from server: 100% by auto
// roc 2007-08 00667220  unit: CRobloxTreeCtrl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00667220
//
// 00667220  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00667223  8b4838               mov ecx, dword ptr [eax + 0x38]
// 00667226  85c9                 test ecx, ecx
// 00667228  7403                 je 0x66722d
// 0066722a  51                   push ecx
// 0066722b  eb0b                 jmp 0x667238
// 0066722d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00667230  50                   push eax
// 00667231  ff15f8eb7700         call dword ptr [0x77ebf8]
// 00667237  50                   push eax
// 00667238  e8838ffcff           call 0x6301c0
// 0066723d  85c0                 test eax, eax
// 0066723f  741c                 je 0x66725d
// 00667241  8b4020               mov eax, dword ptr [eax + 0x20]
// 00667244  85c0                 test eax, eax
// 00667246  7415                 je 0x66725d
// 00667248  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066724c  51                   push ecx
// 0066724d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00667250  51                   push ecx
// 00667251  6a4e                 push 0x4e
// 00667253  50                   push eax
// 00667254  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0066725a  c20400               ret 4
// 0066725d  33c0                 xor eax, eax
// 0066725f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?SendNotify@CXTTreeBase@@MAEJPAUtagNMHDR@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
