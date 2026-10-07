// roc 2010-06 0087b230  unit: VCEdit::?$CXTMaskEditT  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087b230
//
// 0087b230  8b442404             mov eax, dword ptr [esp + 4]
// 0087b234  56                   push esi
// 0087b235  8bf1                 mov esi, ecx
// 0087b237  83f828               cmp eax, 0x28
// 0087b23a  7405                 je 0x87b241
// 0087b23c  83f826               cmp eax, 0x26
// 0087b23f  752d                 jne 0x87b26e
// 0087b241  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0087b247  85c9                 test ecx, ecx
// 0087b249  7423                 je 0x87b26e
// 0087b24b  6a65                 push 0x65
// 0087b24d  e84ee8e1ff           call 0x699aa0
// 0087b252  8bc8                 mov ecx, eax
// 0087b254  e867f4ffff           call 0x87a6c0
// 0087b259  85c0                 test eax, eax
// 0087b25b  7411                 je 0x87b26e
// 0087b25d  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0087b263  8b11                 mov edx, dword ptr [ecx]
// 0087b265  50                   push eax
// 0087b266  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 0087b26c  ffd0                 call eax
// 0087b26e  8bce                 mov ecx, esi
// 0087b270  e8fbccf2ff           call 0x7a7f70
// 0087b275  5e                   pop esi
// 0087b276  c20c00               ret 0xc
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSysKeyDown@CXTPPropertyGridView@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
