// roc 2009-12 0053b110  unit: G3D::VRay::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053b110
//
// 0053b110  83ec08               sub esp, 8
// 0053b113  56                   push esi
// 0053b114  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053b118  57                   push edi
// 0053b119  8bf9                 mov edi, ecx
// 0053b11b  56                   push esi
// 0053b11c  8d4c2410             lea ecx, [esp + 0x10]
// 0053b120  8974240c             mov dword ptr [esp + 0xc], esi
// 0053b124  e867dbffff           call 0x538c90
// 0053b129  56                   push esi
// 0053b12a  8d442410             lea eax, [esp + 0x10]
// 0053b12e  56                   push esi
// 0053b12f  50                   push eax
// 0053b130  e85b993100           call 0x854a90
// 0053b135  8d4c2414             lea ecx, [esp + 0x14]
// 0053b139  83c40c               add esp, 0xc
// 0053b13c  3bcf                 cmp ecx, edi
// 0053b13e  7406                 je 0x53b146
// 0053b140  8b542408             mov edx, dword ptr [esp + 8]
// 0053b144  8917                 mov dword ptr [edi], edx
// 0053b146  8b7704               mov esi, dword ptr [edi + 4]
// 0053b149  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053b14d  894704               mov dword ptr [edi + 4], eax
// 0053b150  85f6                 test esi, esi
// 0053b152  742a                 je 0x53b17e
// 0053b154  8d4e04               lea ecx, [esi + 4]
// 0053b157  83caff               or edx, 0xffffffff
// 0053b15a  f00fc111             lock xadd dword ptr [ecx], edx
// 0053b15e  751e                 jne 0x53b17e
// 0053b160  8b06                 mov eax, dword ptr [esi]
// 0053b162  8b5004               mov edx, dword ptr [eax + 4]
// 0053b165  8bce                 mov ecx, esi
// 0053b167  ffd2                 call edx
// 0053b169  8d4608               lea eax, [esi + 8]
// 0053b16c  83c9ff               or ecx, 0xffffffff
// 0053b16f  f00fc108             lock xadd dword ptr [eax], ecx
// 0053b173  7509                 jne 0x53b17e
// 0053b175  8b16                 mov edx, dword ptr [esi]
// 0053b177  8b4208               mov eax, dword ptr [edx + 8]
// 0053b17a  8bce                 mov ecx, esi
// 0053b17c  ffd0                 call eax
// 0053b17e  5f                   pop edi
// 0053b17f  5e                   pop esi
// 0053b180  83c408               add esp, 8
// 0053b183  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
