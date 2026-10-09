// roc 2009-12 00804130  unit: CXTPPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804130
//
// 00804130  8b442404             mov eax, dword ptr [esp + 4]
// 00804134  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 0080413a  7413                 je 0x80414f
// 0080413c  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00804142  c744240401000000     mov dword ptr [esp + 4], 1
// 0080414a  e97125ffff           jmp 0x7f66c0
// 0080414f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetChecked@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
