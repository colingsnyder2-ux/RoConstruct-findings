// roc 2010-06 005b1990  unit: RBX::W4SoundType::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1990
//
// 005b1990  56                   push esi
// 005b1991  6a08                 push 8
// 005b1993  8bf1                 mov esi, ecx
// 005b1995  e806601f00           call 0x7a79a0
// 005b199a  83c404               add esp, 4
// 005b199d  85c0                 test eax, eax
// 005b199f  7411                 je 0x5b19b2
// 005b19a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b19a5  c70034afa200         mov dword ptr [eax], 0xa2af34
// 005b19ab  8b11                 mov edx, dword ptr [ecx]
// 005b19ad  895004               mov dword ptr [eax + 4], edx
// 005b19b0  eb02                 jmp 0x5b19b4
// 005b19b2  33c0                 xor eax, eax
// 005b19b4  8d542408             lea edx, [esp + 8]
// 005b19b8  8bc8                 mov ecx, eax
// 005b19ba  3bd6                 cmp edx, esi
// 005b19bc  7404                 je 0x5b19c2
// 005b19be  8b0e                 mov ecx, dword ptr [esi]
// 005b19c0  8906                 mov dword ptr [esi], eax
// 005b19c2  85c9                 test ecx, ecx
// 005b19c4  7408                 je 0x5b19ce
// 005b19c6  8b01                 mov eax, dword ptr [ecx]
// 005b19c8  8b10                 mov edx, dword ptr [eax]
// 005b19ca  6a01                 push 1
// 005b19cc  ffd2                 call edx
// 005b19ce  8bc6                 mov eax, esi
// 005b19d0  5e                   pop esi
// 005b19d1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
