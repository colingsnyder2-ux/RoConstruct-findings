// roc 2009-12 00834bd0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834bd0
//
// 00834bd0  6aff                 push -1
// 00834bd2  68d8bf9500           push 0x95bfd8
// 00834bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00834bdd  50                   push eax
// 00834bde  51                   push ecx
// 00834bdf  56                   push esi
// 00834be0  a10052b600           mov eax, dword ptr [0xb65200]
// 00834be5  33c4                 xor eax, esp
// 00834be7  50                   push eax
// 00834be8  8d44240c             lea eax, [esp + 0xc]
// 00834bec  64a300000000         mov dword ptr fs:[0], eax
// 00834bf2  8bf1                 mov esi, ecx
// 00834bf4  89742408             mov dword ptr [esp + 8], esi
// 00834bf8  8d4e54               lea ecx, [esi + 0x54]
// 00834bfb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00834c03  e8d8e6ffff           call 0x8332e0
// 00834c08  8bce                 mov ecx, esi
// 00834c0a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00834c12  e8371b0f00           call 0x92674e
// 00834c17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00834c1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00834c22  59                   pop ecx
// 00834c23  5e                   pop esi
// 00834c24  83c410               add esp, 0x10
// 00834c27  c3                   ret 
// copied from an identical function in another client (function ??1CXTTreeCtrlBase@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTTreeCtrlView.cpp