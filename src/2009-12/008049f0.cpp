// roc 2009-12 008049f0  unit: CXTPCommandBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008049f0
//
// 008049f0  56                   push esi
// 008049f1  57                   push edi
// 008049f2  8bf1                 mov esi, ecx
// 008049f4  33d2                 xor edx, edx
// 008049f6  e8750ecdff           call 0x4d5870
// 008049fb  85c0                 test eax, eax
// 008049fd  7e1c                 jle 0x804a1b
// 008049ff  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00804a03  52                   push edx
// 00804a04  8bce                 mov ecx, esi
// 00804a06  e84542c2ff           call 0x428c50
// 00804a0b  3bc7                 cmp eax, edi
// 00804a0d  7413                 je 0x804a22
// 00804a0f  8bce                 mov ecx, esi
// 00804a11  42                   inc edx
// 00804a12  e8590ecdff           call 0x4d5870
// 00804a17  3bd0                 cmp edx, eax
// 00804a19  7ce8                 jl 0x804a03
// 00804a1b  5f                   pop edi
// 00804a1c  33c0                 xor eax, eax
// 00804a1e  5e                   pop esi
// 00804a1f  c20400               ret 4
// 00804a22  5f                   pop edi
// 00804a23  b801000000           mov eax, 1
// 00804a28  5e                   pop esi
// 00804a29  c20400               ret 4
// copied from an identical function in another client (function ?Lookup@CXTPCommandBarList@@QBEHPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp