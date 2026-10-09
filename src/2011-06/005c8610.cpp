// roc 2011-06 005c8610  unit: RBX::GuiService::W4CenterDialogType::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c8610
//
// 005c8610  56                   push esi
// 005c8611  6a08                 push 8
// 005c8613  8bf1                 mov esi, ecx
// 005c8615  e8441a2400           call 0x80a05e
// 005c861a  83c404               add esp, 4
// 005c861d  85c0                 test eax, eax
// 005c861f  7411                 je 0x5c8632
// 005c8621  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c8625  c70090f1a800         mov dword ptr [eax], 0xa8f190
// 005c862b  8b11                 mov edx, dword ptr [ecx]
// 005c862d  895004               mov dword ptr [eax + 4], edx
// 005c8630  eb02                 jmp 0x5c8634
// 005c8632  33c0                 xor eax, eax
// 005c8634  8d542408             lea edx, [esp + 8]
// 005c8638  8bc8                 mov ecx, eax
// 005c863a  3bd6                 cmp edx, esi
// 005c863c  7404                 je 0x5c8642
// 005c863e  8b0e                 mov ecx, dword ptr [esi]
// 005c8640  8906                 mov dword ptr [esi], eax
// 005c8642  85c9                 test ecx, ecx
// 005c8644  7408                 je 0x5c864e
// 005c8646  8b01                 mov eax, dword ptr [ecx]
// 005c8648  8b10                 mov edx, dword ptr [eax]
// 005c864a  6a01                 push 1
// 005c864c  ffd2                 call edx
// 005c864e  8bc6                 mov eax, esi
// 005c8650  5e                   pop esi
// 005c8651  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
