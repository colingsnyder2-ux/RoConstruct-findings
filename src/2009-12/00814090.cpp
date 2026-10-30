// roc 2009-12 00814090  unit: CXTPCommandBars  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814090
//
// 00814090  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 00814096  56                   push esi
// 00814097  51                   push ecx
// 00814098  e82b251100           call 0x9265c8
// 0081409d  50                   push eax
// 0081409e  e89bfbfdff           call 0x7f3c3e
// 008140a3  8bf0                 mov esi, eax
// 008140a5  83c408               add esp, 8
// 008140a8  85f6                 test esi, esi
// 008140aa  741e                 je 0x8140ca
// 008140ac  f686e400000008       test byte ptr [esi + 0xe4], 8
// 008140b3  7415                 je 0x8140ca
// 008140b5  8b06                 mov eax, dword ptr [esi]
// 008140b7  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008140bd  6a00                 push 0
// 008140bf  8bce                 mov ecx, esi
// 008140c1  ffd2                 call edx
// 008140c3  83a6e4000000f7       and dword ptr [esi + 0xe4], 0xfffffff7
// 008140ca  5e                   pop esi
// 008140cb  c3                   ret 
// copied from an identical function in another client (function ?IdleRecalcLayout@CXTPCommandBars@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp