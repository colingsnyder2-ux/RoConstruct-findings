// roc 2011-06 0048c6d0  unit: Scintilla::CScintillaView  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048c6d0
//
// 0048c6d0  64a100000000         mov eax, dword ptr fs:[0]
// 0048c6d6  6aff                 push -1
// 0048c6d8  68985e9d00           push 0x9d5e98
// 0048c6dd  50                   push eax
// 0048c6de  64892500000000       mov dword ptr fs:[0], esp
// 0048c6e5  56                   push esi
// 0048c6e6  8bf1                 mov esi, ecx
// 0048c6e8  e82fdc3700           call 0x80a31c
// 0048c6ed  8b4804               mov ecx, dword ptr [eax + 4]
// 0048c6f0  e80fe53700           call 0x80ac04
// 0048c6f5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0048c6f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0048c6fd  8b06                 mov eax, dword ptr [esi]
// 0048c6ff  51                   push ecx
// 0048c700  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048c704  52                   push edx
// 0048c705  8b542420             mov edx, dword ptr [esp + 0x20]
// 0048c709  51                   push ecx
// 0048c70a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0048c70e  52                   push edx
// 0048c70f  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 0048c715  51                   push ecx
// 0048c716  8bce                 mov ecx, esi
// 0048c718  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0048c720  ffd2                 call edx
// 0048c722  8d4c2424             lea ecx, [esp + 0x24]
// 0048c726  8bf0                 mov esi, eax
// 0048c728  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0048c730  e8fbc0fcff           call 0x458830
// 0048c735  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048c739  8bc6                 mov eax, esi
// 0048c73b  64890d00000000       mov dword ptr fs:[0], ecx
// 0048c742  5e                   pop esi
// 0048c743  83c40c               add esp, 0xc
// 0048c746  c21400               ret 0x14
// copied from an identical function in another client (function ?FindTextA@CScintillaView@@MAEHPBDHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp