// roc 2011-06 005c8310  unit: RBX::GuiService::W4SpecialKey::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c8310
//
// 005c8310  56                   push esi
// 005c8311  6a08                 push 8
// 005c8313  8bf1                 mov esi, ecx
// 005c8315  e8441d2400           call 0x80a05e
// 005c831a  83c404               add esp, 4
// 005c831d  85c0                 test eax, eax
// 005c831f  7411                 je 0x5c8332
// 005c8321  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c8325  c70060f1a800         mov dword ptr [eax], 0xa8f160
// 005c832b  8b11                 mov edx, dword ptr [ecx]
// 005c832d  895004               mov dword ptr [eax + 4], edx
// 005c8330  eb02                 jmp 0x5c8334
// 005c8332  33c0                 xor eax, eax
// 005c8334  8d542408             lea edx, [esp + 8]
// 005c8338  8bc8                 mov ecx, eax
// 005c833a  3bd6                 cmp edx, esi
// 005c833c  7404                 je 0x5c8342
// 005c833e  8b0e                 mov ecx, dword ptr [esi]
// 005c8340  8906                 mov dword ptr [esi], eax
// 005c8342  85c9                 test ecx, ecx
// 005c8344  7408                 je 0x5c834e
// 005c8346  8b01                 mov eax, dword ptr [ecx]
// 005c8348  8b10                 mov edx, dword ptr [eax]
// 005c834a  6a01                 push 1
// 005c834c  ffd2                 call edx
// 005c834e  8bc6                 mov eax, esi
// 005c8350  5e                   pop esi
// 005c8351  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
