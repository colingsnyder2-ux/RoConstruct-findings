// roc 2010-06 0046fd90  unit: Scintilla::CScintillaView  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046fd90
//
// 0046fd90  64a100000000         mov eax, dword ptr fs:[0]
// 0046fd96  6aff                 push -1
// 0046fd98  68c8459800           push 0x9845c8
// 0046fd9d  50                   push eax
// 0046fd9e  64892500000000       mov dword ptr fs:[0], esp
// 0046fda5  56                   push esi
// 0046fda6  8bf1                 mov esi, ecx
// 0046fda8  e8b17e3300           call 0x7a7c5e
// 0046fdad  8b4804               mov ecx, dword ptr [eax + 4]
// 0046fdb0  e88b873300           call 0x7a8540
// 0046fdb5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046fdb9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046fdbd  8b06                 mov eax, dword ptr [esi]
// 0046fdbf  51                   push ecx
// 0046fdc0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046fdc4  52                   push edx
// 0046fdc5  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046fdc9  51                   push ecx
// 0046fdca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046fdce  52                   push edx
// 0046fdcf  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 0046fdd5  51                   push ecx
// 0046fdd6  8bce                 mov ecx, esi
// 0046fdd8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0046fde0  ffd2                 call edx
// 0046fde2  8d4c2424             lea ecx, [esp + 0x24]
// 0046fde6  8bf0                 mov esi, eax
// 0046fde8  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0046fdf0  e83bc8fdff           call 0x44c630
// 0046fdf5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046fdf9  8bc6                 mov eax, esi
// 0046fdfb  64890d00000000       mov dword ptr fs:[0], ecx
// 0046fe02  5e                   pop esi
// 0046fe03  83c40c               add esp, 0xc
// 0046fe06  c21400               ret 0x14
// copied from an identical function in another client (function ?FindTextA@CScintillaView@@MAEHPBDHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp