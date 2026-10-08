// from server: 100% by auto
// roc 2011-06 008def00  unit: VCEdit::?$CXTMaskEditT  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008def00
//
// 008def00  8b442404             mov eax, dword ptr [esp + 4]
// 008def04  56                   push esi
// 008def05  8bf1                 mov esi, ecx
// 008def07  83f828               cmp eax, 0x28
// 008def0a  7405                 je 0x8def11
// 008def0c  83f826               cmp eax, 0x26
// 008def0f  752d                 jne 0x8def3e
// 008def11  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008def17  85c9                 test ecx, ecx
// 008def19  7423                 je 0x8def3e
// 008def1b  6a65                 push 0x65
// 008def1d  e87ea1f9ff           call 0x8790a0
// 008def22  8bc8                 mov ecx, eax
// 008def24  e857f4ffff           call 0x8de380
// 008def29  85c0                 test eax, eax
// 008def2b  7411                 je 0x8def3e
// 008def2d  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008def33  8b11                 mov edx, dword ptr [ecx]
// 008def35  50                   push eax
// 008def36  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 008def3c  ffd0                 call eax
// 008def3e  8bce                 mov ecx, esi
// 008def40  e8e9b6f2ff           call 0x80a62e
// 008def45  5e                   pop esi
// 008def46  c20c00               ret 0xc
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSysKeyDown@CXTPPropertyGridView@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
