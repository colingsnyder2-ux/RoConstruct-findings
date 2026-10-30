// roc 2009-12 00804d50  unit: CXTPCommandBar  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804d50
//
// 00804d50  56                   push esi
// 00804d51  8bf1                 mov esi, ecx
// 00804d53  83be0001000006       cmp dword ptr [esi + 0x100], 6
// 00804d5a  7412                 je 0x804d6e
// 00804d5c  e86ff7ffff           call 0x8044d0
// 00804d61  85c0                 test eax, eax
// 00804d63  7409                 je 0x804d6e
// 00804d65  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00804d68  56                   push esi
// 00804d69  e802b00600           call 0x86fd70
// 00804d6e  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 00804d75  7412                 je 0x804d89
// 00804d77  8b06                 mov eax, dword ptr [esi]
// 00804d79  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00804d7f  6a00                 push 0
// 00804d81  6a01                 push 1
// 00804d83  6a00                 push 0
// 00804d85  8bce                 mov ecx, esi
// 00804d87  ffd2                 call edx
// 00804d89  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00804d8f  e89c900800           call 0x88de30
// 00804d94  8bce                 mov ecx, esi
// 00804d96  5e                   pop esi
// 00804d97  e980f5feff           jmp 0x7f431c
// copied from an identical function in another client (function ?OnDestroy@CXTPCommandBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp