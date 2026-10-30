// roc 2009-12 00804a30  unit: CXTPCommandBar  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804a30
//
// 00804a30  56                   push esi
// 00804a31  57                   push edi
// 00804a32  8bf1                 mov esi, ecx
// 00804a34  33d2                 xor edx, edx
// 00804a36  e8350ecdff           call 0x4d5870
// 00804a3b  85c0                 test eax, eax
// 00804a3d  7e20                 jle 0x804a5f
// 00804a3f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00804a43  52                   push edx
// 00804a44  8bce                 mov ecx, esi
// 00804a46  e80542c2ff           call 0x428c50
// 00804a4b  39b8d8000000         cmp dword ptr [eax + 0xd8], edi
// 00804a51  740e                 je 0x804a61
// 00804a53  8bce                 mov ecx, esi
// 00804a55  42                   inc edx
// 00804a56  e8150ecdff           call 0x4d5870
// 00804a5b  3bd0                 cmp edx, eax
// 00804a5d  7ce4                 jl 0x804a43
// 00804a5f  33c0                 xor eax, eax
// 00804a61  5f                   pop edi
// 00804a62  5e                   pop esi
// 00804a63  c20400               ret 4
// copied from an identical function in another client (function ?FindCommandBar@CXTPCommandBarList@@QBEPAVCXTPCommandBar@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp