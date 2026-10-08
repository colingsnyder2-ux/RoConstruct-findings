// roc 2008-06 00773dc0  unit: VCEdit::?$CXTMaskEditT  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773dc0
//
// 00773dc0  8b442404             mov eax, dword ptr [esp + 4]
// 00773dc4  56                   push esi
// 00773dc5  8bf1                 mov esi, ecx
// 00773dc7  83f828               cmp eax, 0x28
// 00773dca  7405                 je 0x773dd1
// 00773dcc  83f826               cmp eax, 0x26
// 00773dcf  752d                 jne 0x773dfe
// 00773dd1  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00773dd7  85c9                 test ecx, ecx
// 00773dd9  7423                 je 0x773dfe
// 00773ddb  6a65                 push 0x65
// 00773ddd  e88e75f3ff           call 0x6ab370
// 00773de2  8bc8                 mov ecx, eax
// 00773de4  e867f4ffff           call 0x773250
// 00773de9  85c0                 test eax, eax
// 00773deb  7411                 je 0x773dfe
// 00773ded  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00773df3  8b11                 mov edx, dword ptr [ecx]
// 00773df5  50                   push eax
// 00773df6  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00773dfc  ffd0                 call eax
// 00773dfe  8bce                 mov ecx, esi
// 00773e00  e863cef2ff           call 0x6a0c68
// 00773e05  5e                   pop esi
// 00773e06  c20c00               ret 0xc
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSysKeyDown@CXTPPropertyGridView@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
