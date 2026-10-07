// roc 2011-06 004f9e70  unit: RBX::Network::Replicator::ChangePropertyItem  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f9e70
//
// 004f9e70  83ec08               sub esp, 8
// 004f9e73  56                   push esi
// 004f9e74  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f9e78  57                   push edi
// 004f9e79  8bf9                 mov edi, ecx
// 004f9e7b  56                   push esi
// 004f9e7c  8d4c2410             lea ecx, [esp + 0x10]
// 004f9e80  8974240c             mov dword ptr [esp + 0xc], esi
// 004f9e84  e857f9fcff           call 0x4c97e0
// 004f9e89  56                   push esi
// 004f9e8a  8d442410             lea eax, [esp + 0x10]
// 004f9e8e  56                   push esi
// 004f9e8f  50                   push eax
// 004f9e90  e8ab173700           call 0x86b640
// 004f9e95  8d4c2414             lea ecx, [esp + 0x14]
// 004f9e99  83c40c               add esp, 0xc
// 004f9e9c  3bcf                 cmp ecx, edi
// 004f9e9e  7406                 je 0x4f9ea6
// 004f9ea0  8b542408             mov edx, dword ptr [esp + 8]
// 004f9ea4  8917                 mov dword ptr [edi], edx
// 004f9ea6  8b7704               mov esi, dword ptr [edi + 4]
// 004f9ea9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f9ead  894704               mov dword ptr [edi + 4], eax
// 004f9eb0  85f6                 test esi, esi
// 004f9eb2  742a                 je 0x4f9ede
// 004f9eb4  8d4e04               lea ecx, [esi + 4]
// 004f9eb7  83caff               or edx, 0xffffffff
// 004f9eba  f00fc111             lock xadd dword ptr [ecx], edx
// 004f9ebe  751e                 jne 0x4f9ede
// 004f9ec0  8b06                 mov eax, dword ptr [esi]
// 004f9ec2  8b5004               mov edx, dword ptr [eax + 4]
// 004f9ec5  8bce                 mov ecx, esi
// 004f9ec7  ffd2                 call edx
// 004f9ec9  8d4608               lea eax, [esi + 8]
// 004f9ecc  83c9ff               or ecx, 0xffffffff
// 004f9ecf  f00fc108             lock xadd dword ptr [eax], ecx
// 004f9ed3  7509                 jne 0x4f9ede
// 004f9ed5  8b16                 mov edx, dword ptr [esi]
// 004f9ed7  8b4208               mov eax, dword ptr [edx + 8]
// 004f9eda  8bce                 mov ecx, esi
// 004f9edc  ffd0                 call eax
// 004f9ede  5f                   pop edi
// 004f9edf  5e                   pop esi
// 004f9ee0  83c408               add esp, 8
// 004f9ee3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
