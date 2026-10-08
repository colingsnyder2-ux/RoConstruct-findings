// roc 2011-06 0049a530  unit: VerbBinderJob  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049a530
//
// 0049a530  6aff                 push -1
// 0049a532  68486c9d00           push 0x9d6c48
// 0049a537  64a100000000         mov eax, dword ptr fs:[0]
// 0049a53d  50                   push eax
// 0049a53e  64892500000000       mov dword ptr fs:[0], esp
// 0049a545  51                   push ecx
// 0049a546  56                   push esi
// 0049a547  57                   push edi
// 0049a548  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0049a54c  8bf1                 mov esi, ecx
// 0049a54e  57                   push edi
// 0049a54f  8974240c             mov dword ptr [esp + 0xc], esi
// 0049a553  e8c8fdffff           call 0x49a320
// 0049a558  8b4744               mov eax, dword ptr [edi + 0x44]
// 0049a55b  894644               mov dword ptr [esi + 0x44], eax
// 0049a55e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0049a561  894e48               mov dword ptr [esi + 0x48], ecx
// 0049a564  8b574c               mov edx, dword ptr [edi + 0x4c]
// 0049a567  89564c               mov dword ptr [esi + 0x4c], edx
// 0049a56a  8b4750               mov eax, dword ptr [edi + 0x50]
// 0049a56d  894650               mov dword ptr [esi + 0x50], eax
// 0049a570  8a4f54               mov cl, byte ptr [edi + 0x54]
// 0049a573  83c758               add edi, 0x58
// 0049a576  884e54               mov byte ptr [esi + 0x54], cl
// 0049a579  57                   push edi
// 0049a57a  8d4e58               lea ecx, [esi + 0x58]
// 0049a57d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049a585  ff15c804a400         call dword ptr [0xa404c8]
// 0049a58b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049a58f  5f                   pop edi
// 0049a590  8bc6                 mov eax, esi
// 0049a592  5e                   pop esi
// 0049a593  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a59a  83c410               add esp, 0x10
// 0049a59d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
