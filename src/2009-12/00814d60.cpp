// roc 2009-12 00814d60  unit: CXTPCommandBarKeyboardTip  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814d60
//
// 00814d60  56                   push esi
// 00814d61  57                   push edi
// 00814d62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00814d66  8bf1                 mov esi, ecx
// 00814d68  85ff                 test edi, edi
// 00814d6a  7427                 je 0x814d93
// 00814d6c  33d2                 xor edx, edx
// 00814d6e  399684000000         cmp dword ptr [esi + 0x84], edx
// 00814d74  7e1d                 jle 0x814d93
// 00814d76  52                   push edx
// 00814d77  8bce                 mov ecx, esi
// 00814d79  e862ffffff           call 0x814ce0
// 00814d7e  85c0                 test eax, eax
// 00814d80  7408                 je 0x814d8a
// 00814d82  39b8d8000000         cmp dword ptr [eax + 0xd8], edi
// 00814d88  740b                 je 0x814d95
// 00814d8a  42                   inc edx
// 00814d8b  3b9684000000         cmp edx, dword ptr [esi + 0x84]
// 00814d91  7ce3                 jl 0x814d76
// 00814d93  33c0                 xor eax, eax
// 00814d95  5f                   pop edi
// 00814d96  5e                   pop esi
// 00814d97  c20400               ret 4
// copied from an identical function in another client (function ?GetToolBar@CXTPCommandBars@@QBEPAVCXTPToolBar@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp