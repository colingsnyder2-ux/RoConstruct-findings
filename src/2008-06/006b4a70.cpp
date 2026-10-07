// roc 2008-06 006b4a70  unit: CXTPPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4a70
//
// 006b4a70  8b442404             mov eax, dword ptr [esp + 4]
// 006b4a74  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 006b4a7a  7413                 je 0x6b4a8f
// 006b4a7c  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 006b4a82  c744240401000000     mov dword ptr [esp + 4], 1
// 006b4a8a  e9416effff           jmp 0x6ab8d0
// 006b4a8f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetChecked@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
