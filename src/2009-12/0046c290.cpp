// roc 2009-12 0046c290  unit: Scintilla::CScintillaView  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046c290
//
// 0046c290  64a100000000         mov eax, dword ptr fs:[0]
// 0046c296  6aff                 push -1
// 0046c298  6838d59200           push 0x92d538
// 0046c29d  50                   push eax
// 0046c29e  64892500000000       mov dword ptr fs:[0], esp
// 0046c2a5  56                   push esi
// 0046c2a6  8bf1                 mov esi, ecx
// 0046c2a8  e871783800           call 0x7f3b1e
// 0046c2ad  8b4804               mov ecx, dword ptr [eax + 4]
// 0046c2b0  e84b813800           call 0x7f4400
// 0046c2b5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046c2b9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046c2bd  8b06                 mov eax, dword ptr [esi]
// 0046c2bf  51                   push ecx
// 0046c2c0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046c2c4  52                   push edx
// 0046c2c5  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046c2c9  51                   push ecx
// 0046c2ca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046c2ce  52                   push edx
// 0046c2cf  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 0046c2d5  51                   push ecx
// 0046c2d6  8bce                 mov ecx, esi
// 0046c2d8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0046c2e0  ffd2                 call edx
// 0046c2e2  8d4c2424             lea ecx, [esp + 0x24]
// 0046c2e6  8bf0                 mov esi, eax
// 0046c2e8  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0046c2f0  e8bbebfdff           call 0x44aeb0
// 0046c2f5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046c2f9  8bc6                 mov eax, esi
// 0046c2fb  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c302  5e                   pop esi
// 0046c303  83c40c               add esp, 0xc
// 0046c306  c21400               ret 0x14
// copied from an identical function in another client (function ?FindTextA@CScintillaView@@MAEHPBDHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp