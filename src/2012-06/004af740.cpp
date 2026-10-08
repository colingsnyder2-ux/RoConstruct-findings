// roc 2012-06 004af740  unit: VerbBinderJob  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004af740
//
// 004af740  6aff                 push -1
// 004af742  683848aa00           push 0xaa4838
// 004af747  64a100000000         mov eax, dword ptr fs:[0]
// 004af74d  50                   push eax
// 004af74e  64892500000000       mov dword ptr fs:[0], esp
// 004af755  51                   push ecx
// 004af756  56                   push esi
// 004af757  57                   push edi
// 004af758  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004af75c  8bf1                 mov esi, ecx
// 004af75e  57                   push edi
// 004af75f  8974240c             mov dword ptr [esp + 0xc], esi
// 004af763  e8a8fdffff           call 0x4af510
// 004af768  8b4744               mov eax, dword ptr [edi + 0x44]
// 004af76b  894644               mov dword ptr [esi + 0x44], eax
// 004af76e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 004af771  894e48               mov dword ptr [esi + 0x48], ecx
// 004af774  8b574c               mov edx, dword ptr [edi + 0x4c]
// 004af777  89564c               mov dword ptr [esi + 0x4c], edx
// 004af77a  8b4750               mov eax, dword ptr [edi + 0x50]
// 004af77d  894650               mov dword ptr [esi + 0x50], eax
// 004af780  8a4f54               mov cl, byte ptr [edi + 0x54]
// 004af783  83c758               add edi, 0x58
// 004af786  884e54               mov byte ptr [esi + 0x54], cl
// 004af789  57                   push edi
// 004af78a  8d4e58               lea ecx, [esi + 0x58]
// 004af78d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004af795  ff154426b200         call dword ptr [0xb22644]
// 004af79b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004af79f  5f                   pop edi
// 004af7a0  8bc6                 mov eax, esi
// 004af7a2  5e                   pop esi
// 004af7a3  64890d00000000       mov dword ptr fs:[0], ecx
// 004af7aa  83c410               add esp, 0x10
// 004af7ad  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
