// roc 2012-06 0049f3c0  unit: Scintilla::CScintillaView  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049f3c0
//
// 0049f3c0  64a100000000         mov eax, dword ptr fs:[0]
// 0049f3c6  6aff                 push -1
// 0049f3c8  68c83aaa00           push 0xaa3ac8
// 0049f3cd  50                   push eax
// 0049f3ce  64892500000000       mov dword ptr fs:[0], esp
// 0049f3d5  56                   push esi
// 0049f3d6  8bf1                 mov esi, ecx
// 0049f3d8  e8f52f4e00           call 0x9823d2
// 0049f3dd  8b4804               mov ecx, dword ptr [eax + 4]
// 0049f3e0  e8a5384e00           call 0x982c8a
// 0049f3e5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049f3e9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049f3ed  8b06                 mov eax, dword ptr [esi]
// 0049f3ef  51                   push ecx
// 0049f3f0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049f3f4  52                   push edx
// 0049f3f5  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049f3f9  51                   push ecx
// 0049f3fa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049f3fe  52                   push edx
// 0049f3ff  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 0049f405  51                   push ecx
// 0049f406  8bce                 mov ecx, esi
// 0049f408  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0049f410  ffd2                 call edx
// 0049f412  8d4c2424             lea ecx, [esp + 0x24]
// 0049f416  8bf0                 mov esi, eax
// 0049f418  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0049f420  e85bd1fcff           call 0x46c580
// 0049f425  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049f429  8bc6                 mov eax, esi
// 0049f42b  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f432  5e                   pop esi
// 0049f433  83c40c               add esp, 0xc
// 0049f436  c21400               ret 0x14
// copied from an identical function in another client (function ?FindTextA@CScintillaView@@MAEHPBDHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp