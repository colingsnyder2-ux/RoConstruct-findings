// roc 2007-03 00687fd0  unit: seg_00680000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00687fd0
//
// 00687fd0  56                   push esi
// 00687fd1  57                   push edi
// 00687fd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00687fd6  8bf1                 mov esi, ecx
// 00687fd8  3bbe54010000         cmp edi, dword ptr [esi + 0x154]
// 00687fde  741d                 je 0x687ffd
// 00687fe0  85ff                 test edi, edi
// 00687fe2  7405                 je 0x687fe9
// 00687fe4  e8a964f9ff           call 0x61e492
// 00687fe9  8b4620               mov eax, dword ptr [esi + 0x20]
// 00687fec  6a00                 push 0
// 00687fee  6a00                 push 0
// 00687ff0  50                   push eax
// 00687ff1  89be54010000         mov dword ptr [esi + 0x154], edi
// 00687ff7  ff1554ee7700         call dword ptr [0x77ee54]
// 00687ffd  5f                   pop edi
// 00687ffe  5e                   pop esi
// 00687fff  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?FocusInplaceButton@CXTPPropertyGridView@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
