// roc 2009-12 005783d0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005783d0
//
// 005783d0  83ec08               sub esp, 8
// 005783d3  56                   push esi
// 005783d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005783d8  57                   push edi
// 005783d9  8bf9                 mov edi, ecx
// 005783db  56                   push esi
// 005783dc  8d4c2410             lea ecx, [esp + 0x10]
// 005783e0  8974240c             mov dword ptr [esp + 0xc], esi
// 005783e4  e817f9ffff           call 0x577d00
// 005783e9  56                   push esi
// 005783ea  8d442410             lea eax, [esp + 0x10]
// 005783ee  56                   push esi
// 005783ef  50                   push eax
// 005783f0  e89bc62d00           call 0x854a90
// 005783f5  8d4c2414             lea ecx, [esp + 0x14]
// 005783f9  83c40c               add esp, 0xc
// 005783fc  3bcf                 cmp ecx, edi
// 005783fe  7406                 je 0x578406
// 00578400  8b542408             mov edx, dword ptr [esp + 8]
// 00578404  8917                 mov dword ptr [edi], edx
// 00578406  8b7704               mov esi, dword ptr [edi + 4]
// 00578409  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057840d  894704               mov dword ptr [edi + 4], eax
// 00578410  85f6                 test esi, esi
// 00578412  742a                 je 0x57843e
// 00578414  8d4e04               lea ecx, [esi + 4]
// 00578417  83caff               or edx, 0xffffffff
// 0057841a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057841e  751e                 jne 0x57843e
// 00578420  8b06                 mov eax, dword ptr [esi]
// 00578422  8b5004               mov edx, dword ptr [eax + 4]
// 00578425  8bce                 mov ecx, esi
// 00578427  ffd2                 call edx
// 00578429  8d4608               lea eax, [esi + 8]
// 0057842c  83c9ff               or ecx, 0xffffffff
// 0057842f  f00fc108             lock xadd dword ptr [eax], ecx
// 00578433  7509                 jne 0x57843e
// 00578435  8b16                 mov edx, dword ptr [esi]
// 00578437  8b4208               mov eax, dword ptr [edx + 8]
// 0057843a  8bce                 mov ecx, esi
// 0057843c  ffd0                 call eax
// 0057843e  5f                   pop edi
// 0057843f  5e                   pop esi
// 00578440  83c408               add esp, 8
// 00578443  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
