// roc 2010-06 005b0180  unit: RBX::Humanoid::W4Status::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b0180
//
// 005b0180  56                   push esi
// 005b0181  6a08                 push 8
// 005b0183  8bf1                 mov esi, ecx
// 005b0185  e816781f00           call 0x7a79a0
// 005b018a  83c404               add esp, 4
// 005b018d  85c0                 test eax, eax
// 005b018f  7411                 je 0x5b01a2
// 005b0191  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b0195  c700b4ada200         mov dword ptr [eax], 0xa2adb4
// 005b019b  8b11                 mov edx, dword ptr [ecx]
// 005b019d  895004               mov dword ptr [eax + 4], edx
// 005b01a0  eb02                 jmp 0x5b01a4
// 005b01a2  33c0                 xor eax, eax
// 005b01a4  8d542408             lea edx, [esp + 8]
// 005b01a8  8bc8                 mov ecx, eax
// 005b01aa  3bd6                 cmp edx, esi
// 005b01ac  7404                 je 0x5b01b2
// 005b01ae  8b0e                 mov ecx, dword ptr [esi]
// 005b01b0  8906                 mov dword ptr [esi], eax
// 005b01b2  85c9                 test ecx, ecx
// 005b01b4  7408                 je 0x5b01be
// 005b01b6  8b01                 mov eax, dword ptr [ecx]
// 005b01b8  8b10                 mov edx, dword ptr [eax]
// 005b01ba  6a01                 push 1
// 005b01bc  ffd2                 call edx
// 005b01be  8bc6                 mov eax, esi
// 005b01c0  5e                   pop esi
// 005b01c1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
