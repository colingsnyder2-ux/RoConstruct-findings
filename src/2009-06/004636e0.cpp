// roc 2009-06 004636e0  unit: Scintilla::CScintillaView  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004636e0
//
// 004636e0  64a100000000         mov eax, dword ptr fs:[0]
// 004636e6  6aff                 push -1
// 004636e8  68582c8500           push 0x852c58
// 004636ed  50                   push eax
// 004636ee  64892500000000       mov dword ptr fs:[0], esp
// 004636f5  56                   push esi
// 004636f6  8bf1                 mov esi, ecx
// 004636f8  e8f9552b00           call 0x718cf6
// 004636fd  8b4804               mov ecx, dword ptr [eax + 4]
// 00463700  e8cd5e2b00           call 0x7195d2
// 00463705  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00463709  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046370d  8b06                 mov eax, dword ptr [esi]
// 0046370f  51                   push ecx
// 00463710  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00463714  52                   push edx
// 00463715  8b542420             mov edx, dword ptr [esp + 0x20]
// 00463719  51                   push ecx
// 0046371a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046371e  52                   push edx
// 0046371f  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 00463725  51                   push ecx
// 00463726  8bce                 mov ecx, esi
// 00463728  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00463730  ffd2                 call edx
// 00463732  8d4c2424             lea ecx, [esp + 0x24]
// 00463736  8bf0                 mov esi, eax
// 00463738  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00463740  e8ab14feff           call 0x444bf0
// 00463745  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00463749  8bc6                 mov eax, esi
// 0046374b  64890d00000000       mov dword ptr fs:[0], ecx
// 00463752  5e                   pop esi
// 00463753  83c40c               add esp, 0xc
// 00463756  c21400               ret 0x14
// copied from an identical function in another client (function ?FindTextA@CScintillaView@@MAEHPBDHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp