// roc 2011-06 005c5c80  unit: RBX::DataModel::W4Genre::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5c80
//
// 005c5c80  56                   push esi
// 005c5c81  6a08                 push 8
// 005c5c83  8bf1                 mov esi, ecx
// 005c5c85  e8d4432400           call 0x80a05e
// 005c5c8a  83c404               add esp, 4
// 005c5c8d  85c0                 test eax, eax
// 005c5c8f  7411                 je 0x5c5ca2
// 005c5c91  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c5c95  c700c0eea800         mov dword ptr [eax], 0xa8eec0
// 005c5c9b  8b11                 mov edx, dword ptr [ecx]
// 005c5c9d  895004               mov dword ptr [eax + 4], edx
// 005c5ca0  eb02                 jmp 0x5c5ca4
// 005c5ca2  33c0                 xor eax, eax
// 005c5ca4  8d542408             lea edx, [esp + 8]
// 005c5ca8  8bc8                 mov ecx, eax
// 005c5caa  3bd6                 cmp edx, esi
// 005c5cac  7404                 je 0x5c5cb2
// 005c5cae  8b0e                 mov ecx, dword ptr [esi]
// 005c5cb0  8906                 mov dword ptr [esi], eax
// 005c5cb2  85c9                 test ecx, ecx
// 005c5cb4  7408                 je 0x5c5cbe
// 005c5cb6  8b01                 mov eax, dword ptr [ecx]
// 005c5cb8  8b10                 mov edx, dword ptr [eax]
// 005c5cba  6a01                 push 1
// 005c5cbc  ffd2                 call edx
// 005c5cbe  8bc6                 mov eax, esi
// 005c5cc0  5e                   pop esi
// 005c5cc1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
