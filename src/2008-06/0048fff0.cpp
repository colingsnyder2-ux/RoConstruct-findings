// roc 2008-06 0048fff0  unit: RBX::VBodyColors::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fff0
//
// 0048fff0  6aff                 push -1
// 0048fff2  68a9677c00           push 0x7c67a9
// 0048fff7  64a100000000         mov eax, dword ptr fs:[0]
// 0048fffd  50                   push eax
// 0048fffe  64892500000000       mov dword ptr fs:[0], esp
// 00490005  83ec0c               sub esp, 0xc
// 00490008  8d442404             lea eax, [esp + 4]
// 0049000c  50                   push eax
// 0049000d  c744240400000000     mov dword ptr [esp + 4], 0
// 00490015  e856ffffff           call 0x48ff70
// 0049001a  8b08                 mov ecx, dword ptr [eax]
// 0049001c  83c404               add esp, 4
// 0049001f  85c9                 test ecx, ecx
// 00490021  7405                 je 0x490028
// 00490023  83c110               add ecx, 0x10
// 00490026  eb02                 jmp 0x49002a
// 00490028  33c9                 xor ecx, ecx
// 0049002a  56                   push esi
// 0049002b  57                   push edi
// 0049002c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00490030  890f                 mov dword ptr [edi], ecx
// 00490032  8b4004               mov eax, dword ptr [eax + 4]
// 00490035  894704               mov dword ptr [edi + 4], eax
// 00490038  85c0                 test eax, eax
// 0049003a  740c                 je 0x490048
// 0049003c  83c004               add eax, 4
// 0049003f  b901000000           mov ecx, 1
// 00490044  f00fc108             lock xadd dword ptr [eax], ecx
// 00490048  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049004c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00490054  c744240801000000     mov dword ptr [esp + 8], 1
// 0049005c  85f6                 test esi, esi
// 0049005e  742a                 je 0x49008a
// 00490060  8d5604               lea edx, [esi + 4]
// 00490063  83c8ff               or eax, 0xffffffff
// 00490066  f00fc102             lock xadd dword ptr [edx], eax
// 0049006a  751e                 jne 0x49008a
// 0049006c  8b16                 mov edx, dword ptr [esi]
// 0049006e  8b4204               mov eax, dword ptr [edx + 4]
// 00490071  8bce                 mov ecx, esi
// 00490073  ffd0                 call eax
// 00490075  8d4e08               lea ecx, [esi + 8]
// 00490078  83caff               or edx, 0xffffffff
// 0049007b  f00fc111             lock xadd dword ptr [ecx], edx
// 0049007f  7509                 jne 0x49008a
// 00490081  8b06                 mov eax, dword ptr [esi]
// 00490083  8b5008               mov edx, dword ptr [eax + 8]
// 00490086  8bce                 mov ecx, esi
// 00490088  ffd2                 call edx
// 0049008a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049008e  8bc7                 mov eax, edi
// 00490090  5f                   pop edi
// 00490091  5e                   pop esi
// 00490092  64890d00000000       mov dword ptr fs:[0], ecx
// 00490099  83c418               add esp, 0x18
// 0049009c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
