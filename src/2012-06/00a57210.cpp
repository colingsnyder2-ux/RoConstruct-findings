// from server: 100% by auto
// roc 2012-06 00a57210  unit: VCEdit::?$CXTMaskEditT  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a57210
//
// 00a57210  8b442404             mov eax, dword ptr [esp + 4]
// 00a57214  56                   push esi
// 00a57215  8bf1                 mov esi, ecx
// 00a57217  83f828               cmp eax, 0x28
// 00a5721a  7405                 je 0xa57221
// 00a5721c  83f826               cmp eax, 0x26
// 00a5721f  752d                 jne 0xa5724e
// 00a57221  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00a57227  85c9                 test ecx, ecx
// 00a57229  7423                 je 0xa5724e
// 00a5722b  6a65                 push 0x65
// 00a5722d  e8eea3f9ff           call 0x9f1620
// 00a57232  8bc8                 mov ecx, eax
// 00a57234  e857f4ffff           call 0xa56690
// 00a57239  85c0                 test eax, eax
// 00a5723b  7411                 je 0xa5724e
// 00a5723d  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00a57243  8b11                 mov edx, dword ptr [ecx]
// 00a57245  50                   push eax
// 00a57246  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00a5724c  ffd0                 call eax
// 00a5724e  8bce                 mov ecx, esi
// 00a57250  e889b4f2ff           call 0x9826de
// 00a57255  5e                   pop esi
// 00a57256  c20c00               ret 0xc
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSysKeyDown@CXTPPropertyGridView@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
