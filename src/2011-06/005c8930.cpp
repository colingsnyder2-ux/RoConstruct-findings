// roc 2011-06 005c8930  unit: boost::any::placeholder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c8930
//
// 005c8930  56                   push esi
// 005c8931  6a08                 push 8
// 005c8933  8bf1                 mov esi, ecx
// 005c8935  e824172400           call 0x80a05e
// 005c893a  83c404               add esp, 4
// 005c893d  85c0                 test eax, eax
// 005c893f  7411                 je 0x5c8952
// 005c8941  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c8945  c700c0f1a800         mov dword ptr [eax], 0xa8f1c0
// 005c894b  8b11                 mov edx, dword ptr [ecx]
// 005c894d  895004               mov dword ptr [eax + 4], edx
// 005c8950  eb02                 jmp 0x5c8954
// 005c8952  33c0                 xor eax, eax
// 005c8954  8d542408             lea edx, [esp + 8]
// 005c8958  8bc8                 mov ecx, eax
// 005c895a  3bd6                 cmp edx, esi
// 005c895c  7404                 je 0x5c8962
// 005c895e  8b0e                 mov ecx, dword ptr [esi]
// 005c8960  8906                 mov dword ptr [esi], eax
// 005c8962  85c9                 test ecx, ecx
// 005c8964  7408                 je 0x5c896e
// 005c8966  8b01                 mov eax, dword ptr [ecx]
// 005c8968  8b10                 mov edx, dword ptr [eax]
// 005c896a  6a01                 push 1
// 005c896c  ffd2                 call edx
// 005c896e  8bc6                 mov eax, esi
// 005c8970  5e                   pop esi
// 005c8971  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
