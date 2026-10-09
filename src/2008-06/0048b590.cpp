// roc 2008-06 0048b590  unit: boost::any::placeholder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b590
//
// 0048b590  56                   push esi
// 0048b591  6a08                 push 8
// 0048b593  8bf1                 mov esi, ecx
// 0048b595  e886532100           call 0x6a0920
// 0048b59a  83c404               add esp, 4
// 0048b59d  85c0                 test eax, eax
// 0048b59f  7411                 je 0x48b5b2
// 0048b5a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048b5a5  c700c4168200         mov dword ptr [eax], 0x8216c4
// 0048b5ab  8b11                 mov edx, dword ptr [ecx]
// 0048b5ad  895004               mov dword ptr [eax + 4], edx
// 0048b5b0  eb02                 jmp 0x48b5b4
// 0048b5b2  33c0                 xor eax, eax
// 0048b5b4  8d542408             lea edx, [esp + 8]
// 0048b5b8  8bc8                 mov ecx, eax
// 0048b5ba  3bd6                 cmp edx, esi
// 0048b5bc  7404                 je 0x48b5c2
// 0048b5be  8b0e                 mov ecx, dword ptr [esi]
// 0048b5c0  8906                 mov dword ptr [esi], eax
// 0048b5c2  85c9                 test ecx, ecx
// 0048b5c4  7408                 je 0x48b5ce
// 0048b5c6  8b01                 mov eax, dword ptr [ecx]
// 0048b5c8  8b10                 mov edx, dword ptr [eax]
// 0048b5ca  6a01                 push 1
// 0048b5cc  ffd2                 call edx
// 0048b5ce  8bc6                 mov eax, esi
// 0048b5d0  5e                   pop esi
// 0048b5d1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
