// roc 2010-06 004b3070  unit: boost::any::N::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b3070
//
// 004b3070  56                   push esi
// 004b3071  6a10                 push 0x10
// 004b3073  8bf1                 mov esi, ecx
// 004b3075  e826492f00           call 0x7a79a0
// 004b307a  83c404               add esp, 4
// 004b307d  85c0                 test eax, eax
// 004b307f  7411                 je 0x4b3092
// 004b3081  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b3085  c7009084a100         mov dword ptr [eax], 0xa18490
// 004b308b  dd01                 fld qword ptr [ecx]
// 004b308d  dd5808               fstp qword ptr [eax + 8]
// 004b3090  eb02                 jmp 0x4b3094
// 004b3092  33c0                 xor eax, eax
// 004b3094  8d542408             lea edx, [esp + 8]
// 004b3098  8bc8                 mov ecx, eax
// 004b309a  3bd6                 cmp edx, esi
// 004b309c  7404                 je 0x4b30a2
// 004b309e  8b0e                 mov ecx, dword ptr [esi]
// 004b30a0  8906                 mov dword ptr [esi], eax
// 004b30a2  85c9                 test ecx, ecx
// 004b30a4  7408                 je 0x4b30ae
// 004b30a6  8b01                 mov eax, dword ptr [ecx]
// 004b30a8  8b10                 mov edx, dword ptr [eax]
// 004b30aa  6a01                 push 1
// 004b30ac  ffd2                 call edx
// 004b30ae  8bc6                 mov eax, esi
// 004b30b0  5e                   pop esi
// 004b30b1  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4N@any@boost@@QAEAAV01@ABN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
