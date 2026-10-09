// roc 2011-06 005c5680  unit: RBX::Humanoid::W4Status::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5680
//
// 005c5680  56                   push esi
// 005c5681  6a08                 push 8
// 005c5683  8bf1                 mov esi, ecx
// 005c5685  e8d4492400           call 0x80a05e
// 005c568a  83c404               add esp, 4
// 005c568d  85c0                 test eax, eax
// 005c568f  7411                 je 0x5c56a2
// 005c5691  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c5695  c70060eea800         mov dword ptr [eax], 0xa8ee60
// 005c569b  8b11                 mov edx, dword ptr [ecx]
// 005c569d  895004               mov dword ptr [eax + 4], edx
// 005c56a0  eb02                 jmp 0x5c56a4
// 005c56a2  33c0                 xor eax, eax
// 005c56a4  8d542408             lea edx, [esp + 8]
// 005c56a8  8bc8                 mov ecx, eax
// 005c56aa  3bd6                 cmp edx, esi
// 005c56ac  7404                 je 0x5c56b2
// 005c56ae  8b0e                 mov ecx, dword ptr [esi]
// 005c56b0  8906                 mov dword ptr [esi], eax
// 005c56b2  85c9                 test ecx, ecx
// 005c56b4  7408                 je 0x5c56be
// 005c56b6  8b01                 mov eax, dword ptr [ecx]
// 005c56b8  8b10                 mov edx, dword ptr [eax]
// 005c56ba  6a01                 push 1
// 005c56bc  ffd2                 call edx
// 005c56be  8bc6                 mov eax, esi
// 005c56c0  5e                   pop esi
// 005c56c1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
