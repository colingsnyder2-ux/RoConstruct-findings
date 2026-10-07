// roc 2011-06 00733e50  unit: RBX::TextureContentProvider::VCachedImg::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00733e50
//
// 00733e50  83ec08               sub esp, 8
// 00733e53  56                   push esi
// 00733e54  8b742410             mov esi, dword ptr [esp + 0x10]
// 00733e58  57                   push edi
// 00733e59  8bf9                 mov edi, ecx
// 00733e5b  56                   push esi
// 00733e5c  8d4c2410             lea ecx, [esp + 0x10]
// 00733e60  8974240c             mov dword ptr [esp + 0xc], esi
// 00733e64  e8a7fcffff           call 0x733b10
// 00733e69  56                   push esi
// 00733e6a  8d442410             lea eax, [esp + 0x10]
// 00733e6e  56                   push esi
// 00733e6f  50                   push eax
// 00733e70  e8cb771300           call 0x86b640
// 00733e75  8d4c2414             lea ecx, [esp + 0x14]
// 00733e79  83c40c               add esp, 0xc
// 00733e7c  3bcf                 cmp ecx, edi
// 00733e7e  7406                 je 0x733e86
// 00733e80  8b542408             mov edx, dword ptr [esp + 8]
// 00733e84  8917                 mov dword ptr [edi], edx
// 00733e86  8b7704               mov esi, dword ptr [edi + 4]
// 00733e89  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00733e8d  894704               mov dword ptr [edi + 4], eax
// 00733e90  85f6                 test esi, esi
// 00733e92  742a                 je 0x733ebe
// 00733e94  8d4e04               lea ecx, [esi + 4]
// 00733e97  83caff               or edx, 0xffffffff
// 00733e9a  f00fc111             lock xadd dword ptr [ecx], edx
// 00733e9e  751e                 jne 0x733ebe
// 00733ea0  8b06                 mov eax, dword ptr [esi]
// 00733ea2  8b5004               mov edx, dword ptr [eax + 4]
// 00733ea5  8bce                 mov ecx, esi
// 00733ea7  ffd2                 call edx
// 00733ea9  8d4608               lea eax, [esi + 8]
// 00733eac  83c9ff               or ecx, 0xffffffff
// 00733eaf  f00fc108             lock xadd dword ptr [eax], ecx
// 00733eb3  7509                 jne 0x733ebe
// 00733eb5  8b16                 mov edx, dword ptr [esi]
// 00733eb7  8b4208               mov eax, dword ptr [edx + 8]
// 00733eba  8bce                 mov ecx, esi
// 00733ebc  ffd0                 call eax
// 00733ebe  5f                   pop edi
// 00733ebf  5e                   pop esi
// 00733ec0  83c408               add esp, 8
// 00733ec3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
