// roc 2009-12 00869240  unit: CXTPPropertyGridView  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869240
//
// 00869240  8b442404             mov eax, dword ptr [esp + 4]
// 00869244  56                   push esi
// 00869245  8bf1                 mov esi, ecx
// 00869247  83f828               cmp eax, 0x28
// 0086924a  7405                 je 0x869251
// 0086924c  83f826               cmp eax, 0x26
// 0086924f  752d                 jne 0x86927e
// 00869251  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00869257  85c9                 test ecx, ecx
// 00869259  7423                 je 0x86927e
// 0086925b  6a65                 push 0x65
// 0086925d  e85eb6ffff           call 0x8648c0
// 00869262  8bc8                 mov ecx, eax
// 00869264  e8b7d20500           call 0x8c6520
// 00869269  85c0                 test eax, eax
// 0086926b  7411                 je 0x86927e
// 0086926d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00869273  8b11                 mov edx, dword ptr [ecx]
// 00869275  50                   push eax
// 00869276  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 0086927c  ffd0                 call eax
// 0086927e  8bce                 mov ecx, esi
// 00869280  e8ababf8ff           call 0x7f3e30
// 00869285  5e                   pop esi
// 00869286  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSysKeyDown@CXTPPropertyGridView@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp