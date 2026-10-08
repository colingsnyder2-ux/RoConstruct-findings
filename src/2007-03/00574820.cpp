// roc 2007-03 00574820  unit: seg_00570000  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00574820
//
// 00574820  64a100000000         mov eax, dword ptr fs:[0]
// 00574826  6aff                 push -1
// 00574828  68e8397500           push 0x7539e8
// 0057482d  50                   push eax
// 0057482e  64892500000000       mov dword ptr fs:[0], esp
// 00574835  83ec08               sub esp, 8
// 00574838  56                   push esi
// 00574839  8bf1                 mov esi, ecx
// 0057483b  8b4604               mov eax, dword ptr [esi + 4]
// 0057483e  3b4608               cmp eax, dword ptr [esi + 8]
// 00574841  8b0e                 mov ecx, dword ptr [esi]
// 00574843  7d3b                 jge 0x574880
// 00574845  8d04c1               lea eax, [ecx + eax*8]
// 00574848  85c0                 test eax, eax
// 0057484a  741e                 je 0x57486a
// 0057484c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00574850  8b11                 mov edx, dword ptr [ecx]
// 00574852  8910                 mov dword ptr [eax], edx
// 00574854  8b4904               mov ecx, dword ptr [ecx + 4]
// 00574857  85c9                 test ecx, ecx
// 00574859  894804               mov dword ptr [eax + 4], ecx
// 0057485c  740c                 je 0x57486a
// 0057485e  83c104               add ecx, 4
// 00574861  b801000000           mov eax, 1
// 00574866  f00fc101             lock xadd dword ptr [ecx], eax
// 0057486a  83460401             add dword ptr [esi + 4], 1
// 0057486e  5e                   pop esi
// 0057486f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574873  64890d00000000       mov dword ptr fs:[0], ecx
// 0057487a  83c414               add esp, 0x14
// 0057487d  c20400               ret 4
// 00574880  57                   push edi
// 00574881  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00574885  3bf9                 cmp edi, ecx
// 00574887  0f8285000000         jb 0x574912
// 0057488d  8d0cc1               lea ecx, [ecx + eax*8]
// 00574890  3bf9                 cmp edi, ecx
// 00574892  737e                 jae 0x574912
// 00574894  8b17                 mov edx, dword ptr [edi]
// 00574896  8b7f04               mov edi, dword ptr [edi + 4]
// 00574899  85ff                 test edi, edi
// 0057489b  89542408             mov dword ptr [esp + 8], edx
// 0057489f  897c240c             mov dword ptr [esp + 0xc], edi
// 005748a3  740c                 je 0x5748b1
// 005748a5  83c704               add edi, 4
// 005748a8  b801000000           mov eax, 1
// 005748ad  f00fc107             lock xadd dword ptr [edi], eax
// 005748b1  8d4c2408             lea ecx, [esp + 8]
// 005748b5  51                   push ecx
// 005748b6  8bce                 mov ecx, esi
// 005748b8  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005748c0  e85bffffff           call 0x574820
// 005748c5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005748c9  85f6                 test esi, esi
// 005748cb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005748d3  7463                 je 0x574938
// 005748d5  8d5604               lea edx, [esi + 4]
// 005748d8  83c8ff               or eax, 0xffffffff
// 005748db  f00fc102             lock xadd dword ptr [edx], eax
// 005748df  7557                 jne 0x574938
// 005748e1  8b16                 mov edx, dword ptr [esi]
// 005748e3  8b4204               mov eax, dword ptr [edx + 4]
// 005748e6  8bce                 mov ecx, esi
// 005748e8  ffd0                 call eax
// 005748ea  8d4e08               lea ecx, [esi + 8]
// 005748ed  83caff               or edx, 0xffffffff
// 005748f0  f00fc111             lock xadd dword ptr [ecx], edx
// 005748f4  7542                 jne 0x574938
// 005748f6  8b06                 mov eax, dword ptr [esi]
// 005748f8  8b5008               mov edx, dword ptr [eax + 8]
// 005748fb  8bce                 mov ecx, esi
// 005748fd  ffd2                 call edx
// 005748ff  5f                   pop edi
// 00574900  5e                   pop esi
// 00574901  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574905  64890d00000000       mov dword ptr fs:[0], ecx
// 0057490c  83c414               add esp, 0x14
// 0057490f  c20400               ret 4
// 00574912  6a00                 push 0
// 00574914  83c001               add eax, 1
// 00574917  50                   push eax
// 00574918  8bce                 mov ecx, esi
// 0057491a  e811eeffff           call 0x573730
// 0057491f  8b0e                 mov ecx, dword ptr [esi]
// 00574921  8b4604               mov eax, dword ptr [esi + 4]
// 00574924  8b17                 mov edx, dword ptr [edi]
// 00574926  8d44c1f8             lea eax, [ecx + eax*8 - 8]
// 0057492a  83c704               add edi, 4
// 0057492d  57                   push edi
// 0057492e  8d4804               lea ecx, [eax + 4]
// 00574931  8910                 mov dword ptr [eax], edx
// 00574933  e83896e9ff           call 0x40df70
// 00574938  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057493c  5f                   pop edi
// 0057493d  5e                   pop esi
// 0057493e  64890d00000000       mov dword ptr fs:[0], ecx
// 00574945  83c414               add esp, 0x14
// 00574948  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?append@?$Array@V?$shared_ptr@VPartInstance@RBX@@@boost@@@G3D@@QAEXABV?$shared_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
