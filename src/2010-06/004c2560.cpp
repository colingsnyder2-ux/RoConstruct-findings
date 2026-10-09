// roc 2010-06 004c2560  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c2560
//
// 004c2560  56                   push esi
// 004c2561  6a08                 push 8
// 004c2563  8bf1                 mov esi, ecx
// 004c2565  e836542e00           call 0x7a79a0
// 004c256a  83c404               add esp, 4
// 004c256d  85c0                 test eax, eax
// 004c256f  7411                 je 0x4c2582
// 004c2571  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c2575  c7008891a100         mov dword ptr [eax], 0xa19188
// 004c257b  8b11                 mov edx, dword ptr [ecx]
// 004c257d  895004               mov dword ptr [eax + 4], edx
// 004c2580  eb02                 jmp 0x4c2584
// 004c2582  33c0                 xor eax, eax
// 004c2584  8d542408             lea edx, [esp + 8]
// 004c2588  8bc8                 mov ecx, eax
// 004c258a  3bd6                 cmp edx, esi
// 004c258c  7404                 je 0x4c2592
// 004c258e  8b0e                 mov ecx, dword ptr [esi]
// 004c2590  8906                 mov dword ptr [esi], eax
// 004c2592  85c9                 test ecx, ecx
// 004c2594  7408                 je 0x4c259e
// 004c2596  8b01                 mov eax, dword ptr [ecx]
// 004c2598  8b10                 mov edx, dword ptr [eax]
// 004c259a  6a01                 push 1
// 004c259c  ffd2                 call edx
// 004c259e  8bc6                 mov eax, esi
// 004c25a0  5e                   pop esi
// 004c25a1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
