// roc 2007-08 00570270  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570270
//
// 00570270  83ec08               sub esp, 8
// 00570273  57                   push edi
// 00570274  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00570278  85ff                 test edi, edi
// 0057027a  7509                 jne 0x570285
// 0057027c  33c0                 xor eax, eax
// 0057027e  5f                   pop edi
// 0057027f  83c408               add esp, 8
// 00570282  c20400               ret 4
// 00570285  8b4704               mov eax, dword ptr [edi + 4]
// 00570288  85c0                 test eax, eax
// 0057028a  74f0                 je 0x57027c
// 0057028c  53                   push ebx
// 0057028d  55                   push ebp
// 0057028e  894c2418             mov dword ptr [esp + 0x18], ecx
// 00570292  56                   push esi
// 00570293  8d4c241c             lea ecx, [esp + 0x1c]
// 00570297  51                   push ecx
// 00570298  8d542414             lea edx, [esp + 0x14]
// 0057029c  52                   push edx
// 0057029d  8bc8                 mov ecx, eax
// 0057029f  e85cffffff           call 0x570200
// 005702a4  8b30                 mov esi, dword ptr [eax]
// 005702a6  85f6                 test esi, esi
// 005702a8  8b5804               mov ebx, dword ptr [eax + 4]
// 005702ab  8b4704               mov eax, dword ptr [edi + 4]
// 005702ae  8b7804               mov edi, dword ptr [eax + 4]
// 005702b1  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005702b7  7404                 je 0x5702bd
// 005702b9  3bf0                 cmp esi, eax
// 005702bb  7402                 je 0x5702bf
// 005702bd  ffd5                 call ebp
// 005702bf  3bdf                 cmp ebx, edi
// 005702c1  750c                 jne 0x5702cf
// 005702c3  5e                   pop esi
// 005702c4  5d                   pop ebp
// 005702c5  5b                   pop ebx
// 005702c6  33c0                 xor eax, eax
// 005702c8  5f                   pop edi
// 005702c9  83c408               add esp, 8
// 005702cc  c20400               ret 4
// 005702cf  85f6                 test esi, esi
// 005702d1  7502                 jne 0x5702d5
// 005702d3  ffd5                 call ebp
// 005702d5  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005702d8  7502                 jne 0x5702dc
// 005702da  ffd5                 call ebp
// 005702dc  8b4310               mov eax, dword ptr [ebx + 0x10]
// 005702df  5e                   pop esi
// 005702e0  5d                   pop ebp
// 005702e1  5b                   pop ebx
// 005702e2  5f                   pop edi
// 005702e3  83c408               add esp, 8
// 005702e6  c20400               ret 4
// library openrbx-client/App\reflection\signal.cpp (function ?findSignalInstance@SignalDescriptor@Reflection@RBX@@IBEPAVSignalInstance@23@PBVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
