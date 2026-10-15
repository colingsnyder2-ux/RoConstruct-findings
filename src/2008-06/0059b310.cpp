// roc 2008-06 0059b310  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b310
//
// 0059b310  64a100000000         mov eax, dword ptr fs:[0]
// 0059b316  6aff                 push -1
// 0059b318  6868917d00           push 0x7d9168
// 0059b31d  50                   push eax
// 0059b31e  64892500000000       mov dword ptr fs:[0], esp
// 0059b325  83ec08               sub esp, 8
// 0059b328  56                   push esi
// 0059b329  8bf1                 mov esi, ecx
// 0059b32b  8b4604               mov eax, dword ptr [esi + 4]
// 0059b32e  3b4608               cmp eax, dword ptr [esi + 8]
// 0059b331  8b0e                 mov ecx, dword ptr [esi]
// 0059b333  7d3a                 jge 0x59b36f
// 0059b335  8d04c1               lea eax, [ecx + eax*8]
// 0059b338  85c0                 test eax, eax
// 0059b33a  741e                 je 0x59b35a
// 0059b33c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059b340  8b11                 mov edx, dword ptr [ecx]
// 0059b342  8910                 mov dword ptr [eax], edx
// 0059b344  8b4904               mov ecx, dword ptr [ecx + 4]
// 0059b347  894804               mov dword ptr [eax + 4], ecx
// 0059b34a  85c9                 test ecx, ecx
// 0059b34c  740c                 je 0x59b35a
// 0059b34e  83c104               add ecx, 4
// 0059b351  b801000000           mov eax, 1
// 0059b356  f00fc101             lock xadd dword ptr [ecx], eax
// 0059b35a  ff4604               inc dword ptr [esi + 4]
// 0059b35d  5e                   pop esi
// 0059b35e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b362  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b369  83c414               add esp, 0x14
// 0059b36c  c20400               ret 4
// 0059b36f  57                   push edi
// 0059b370  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0059b374  3bf9                 cmp edi, ecx
// 0059b376  0f8285000000         jb 0x59b401
// 0059b37c  8d0cc1               lea ecx, [ecx + eax*8]
// 0059b37f  3bf9                 cmp edi, ecx
// 0059b381  737e                 jae 0x59b401
// 0059b383  8b17                 mov edx, dword ptr [edi]
// 0059b385  8b7f04               mov edi, dword ptr [edi + 4]
// 0059b388  89542408             mov dword ptr [esp + 8], edx
// 0059b38c  897c240c             mov dword ptr [esp + 0xc], edi
// 0059b390  85ff                 test edi, edi
// 0059b392  740c                 je 0x59b3a0
// 0059b394  83c704               add edi, 4
// 0059b397  b801000000           mov eax, 1
// 0059b39c  f00fc107             lock xadd dword ptr [edi], eax
// 0059b3a0  8d4c2408             lea ecx, [esp + 8]
// 0059b3a4  51                   push ecx
// 0059b3a5  8bce                 mov ecx, esi
// 0059b3a7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0059b3af  e85cffffff           call 0x59b310
// 0059b3b4  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059b3b8  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0059b3c0  85f6                 test esi, esi
// 0059b3c2  7461                 je 0x59b425
// 0059b3c4  8d5604               lea edx, [esi + 4]
// 0059b3c7  83c8ff               or eax, 0xffffffff
// 0059b3ca  f00fc102             lock xadd dword ptr [edx], eax
// 0059b3ce  7555                 jne 0x59b425
// 0059b3d0  8b16                 mov edx, dword ptr [esi]
// 0059b3d2  8b4204               mov eax, dword ptr [edx + 4]
// 0059b3d5  8bce                 mov ecx, esi
// 0059b3d7  ffd0                 call eax
// 0059b3d9  8d4e08               lea ecx, [esi + 8]
// 0059b3dc  83caff               or edx, 0xffffffff
// 0059b3df  f00fc111             lock xadd dword ptr [ecx], edx
// 0059b3e3  7540                 jne 0x59b425
// 0059b3e5  8b06                 mov eax, dword ptr [esi]
// 0059b3e7  8b5008               mov edx, dword ptr [eax + 8]
// 0059b3ea  8bce                 mov ecx, esi
// 0059b3ec  ffd2                 call edx
// 0059b3ee  5f                   pop edi
// 0059b3ef  5e                   pop esi
// 0059b3f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b3f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b3fb  83c414               add esp, 0x14
// 0059b3fe  c20400               ret 4
// 0059b401  6a00                 push 0
// 0059b403  40                   inc eax
// 0059b404  50                   push eax
// 0059b405  8bce                 mov ecx, esi
// 0059b407  e8f4edffff           call 0x59a200
// 0059b40c  8b0e                 mov ecx, dword ptr [esi]
// 0059b40e  8b4604               mov eax, dword ptr [esi + 4]
// 0059b411  8b17                 mov edx, dword ptr [edi]
// 0059b413  8d44c1f8             lea eax, [ecx + eax*8 - 8]
// 0059b417  83c704               add edi, 4
// 0059b41a  57                   push edi
// 0059b41b  8d4804               lea ecx, [eax + 4]
// 0059b41e  8910                 mov dword ptr [eax], edx
// 0059b420  e88b71e6ff           call 0x4025b0
// 0059b425  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059b429  5f                   pop edi
// 0059b42a  5e                   pop esi
// 0059b42b  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b432  83c414               add esp, 0x14
// 0059b435  c20400               ret 4
// library rbxgs/roc_owner_array_members_805ee075da00f9ea.cpp (function ?append@?$Array@V?$shared_ptr@VPartInstance@RBX@@@boost@@@G3D@@QAEXABV?$shared_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_owner_array_members_805ee075da00f9ea.cpp
