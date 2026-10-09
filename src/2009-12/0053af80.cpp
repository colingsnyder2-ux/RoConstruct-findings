// roc 2009-12 0053af80  unit: G3D::VRay::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053af80
//
// 0053af80  83ec08               sub esp, 8
// 0053af83  56                   push esi
// 0053af84  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053af88  57                   push edi
// 0053af89  8bf9                 mov edi, ecx
// 0053af8b  56                   push esi
// 0053af8c  8d4c2410             lea ecx, [esp + 0x10]
// 0053af90  8974240c             mov dword ptr [esp + 0xc], esi
// 0053af94  e8d7dbffff           call 0x538b70
// 0053af99  56                   push esi
// 0053af9a  8d442410             lea eax, [esp + 0x10]
// 0053af9e  56                   push esi
// 0053af9f  50                   push eax
// 0053afa0  e8eb9a3100           call 0x854a90
// 0053afa5  8d4c2414             lea ecx, [esp + 0x14]
// 0053afa9  83c40c               add esp, 0xc
// 0053afac  3bcf                 cmp ecx, edi
// 0053afae  7406                 je 0x53afb6
// 0053afb0  8b542408             mov edx, dword ptr [esp + 8]
// 0053afb4  8917                 mov dword ptr [edi], edx
// 0053afb6  8b7704               mov esi, dword ptr [edi + 4]
// 0053afb9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053afbd  894704               mov dword ptr [edi + 4], eax
// 0053afc0  85f6                 test esi, esi
// 0053afc2  742a                 je 0x53afee
// 0053afc4  8d4e04               lea ecx, [esi + 4]
// 0053afc7  83caff               or edx, 0xffffffff
// 0053afca  f00fc111             lock xadd dword ptr [ecx], edx
// 0053afce  751e                 jne 0x53afee
// 0053afd0  8b06                 mov eax, dword ptr [esi]
// 0053afd2  8b5004               mov edx, dword ptr [eax + 4]
// 0053afd5  8bce                 mov ecx, esi
// 0053afd7  ffd2                 call edx
// 0053afd9  8d4608               lea eax, [esi + 8]
// 0053afdc  83c9ff               or ecx, 0xffffffff
// 0053afdf  f00fc108             lock xadd dword ptr [eax], ecx
// 0053afe3  7509                 jne 0x53afee
// 0053afe5  8b16                 mov edx, dword ptr [esi]
// 0053afe7  8b4208               mov eax, dword ptr [edx + 8]
// 0053afea  8bce                 mov ecx, esi
// 0053afec  ffd0                 call eax
// 0053afee  5f                   pop edi
// 0053afef  5e                   pop esi
// 0053aff0  83c408               add esp, 8
// 0053aff3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
