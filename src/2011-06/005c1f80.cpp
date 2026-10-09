// roc 2011-06 005c1f80  unit: RBX::Controller::W4Button::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c1f80
//
// 005c1f80  56                   push esi
// 005c1f81  6a08                 push 8
// 005c1f83  8bf1                 mov esi, ecx
// 005c1f85  e8d4802400           call 0x80a05e
// 005c1f8a  83c404               add esp, 4
// 005c1f8d  85c0                 test eax, eax
// 005c1f8f  7411                 je 0x5c1fa2
// 005c1f91  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c1f95  c700a0eaa800         mov dword ptr [eax], 0xa8eaa0
// 005c1f9b  8b11                 mov edx, dword ptr [ecx]
// 005c1f9d  895004               mov dword ptr [eax + 4], edx
// 005c1fa0  eb02                 jmp 0x5c1fa4
// 005c1fa2  33c0                 xor eax, eax
// 005c1fa4  8d542408             lea edx, [esp + 8]
// 005c1fa8  8bc8                 mov ecx, eax
// 005c1faa  3bd6                 cmp edx, esi
// 005c1fac  7404                 je 0x5c1fb2
// 005c1fae  8b0e                 mov ecx, dword ptr [esi]
// 005c1fb0  8906                 mov dword ptr [esi], eax
// 005c1fb2  85c9                 test ecx, ecx
// 005c1fb4  7408                 je 0x5c1fbe
// 005c1fb6  8b01                 mov eax, dword ptr [ecx]
// 005c1fb8  8b10                 mov edx, dword ptr [eax]
// 005c1fba  6a01                 push 1
// 005c1fbc  ffd2                 call edx
// 005c1fbe  8bc6                 mov eax, esi
// 005c1fc0  5e                   pop esi
// 005c1fc1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
