// from server: 100% by auto
// roc 2007-08 0042bad0  unit: VCLuaFunction::?$CComObjectNoLock  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042bad0
//
// 0042bad0  53                   push ebx
// 0042bad1  8bd9                 mov ebx, ecx
// 0042bad3  8b4304               mov eax, dword ptr [ebx + 4]
// 0042bad6  57                   push edi
// 0042bad7  8b38                 mov edi, dword ptr [eax]
// 0042bad9  8900                 mov dword ptr [eax], eax
// 0042badb  8b4304               mov eax, dword ptr [ebx + 4]
// 0042bade  894004               mov dword ptr [eax + 4], eax
// 0042bae1  3b7b04               cmp edi, dword ptr [ebx + 4]
// 0042bae4  c7430800000000       mov dword ptr [ebx + 8], 0
// 0042baeb  7448                 je 0x42bb35
// 0042baed  55                   push ebp
// 0042baee  56                   push esi
// 0042baef  90                   nop 
// 0042baf0  8b770c               mov esi, dword ptr [edi + 0xc]
// 0042baf3  85f6                 test esi, esi
// 0042baf5  8b2f                 mov ebp, dword ptr [edi]
// 0042baf7  742a                 je 0x42bb23
// 0042baf9  8d4604               lea eax, [esi + 4]
// 0042bafc  83c9ff               or ecx, 0xffffffff
// 0042baff  f00fc108             lock xadd dword ptr [eax], ecx
// 0042bb03  751e                 jne 0x42bb23
// 0042bb05  8b16                 mov edx, dword ptr [esi]
// 0042bb07  8b4204               mov eax, dword ptr [edx + 4]
// 0042bb0a  8bce                 mov ecx, esi
// 0042bb0c  ffd0                 call eax
// 0042bb0e  8d4e08               lea ecx, [esi + 8]
// 0042bb11  83caff               or edx, 0xffffffff
// 0042bb14  f00fc111             lock xadd dword ptr [ecx], edx
// 0042bb18  7509                 jne 0x42bb23
// 0042bb1a  8b06                 mov eax, dword ptr [esi]
// 0042bb1c  8b5008               mov edx, dword ptr [eax + 8]
// 0042bb1f  8bce                 mov ecx, esi
// 0042bb21  ffd2                 call edx
// 0042bb23  57                   push edi
// 0042bb24  e839412000           call 0x62fc62
// 0042bb29  83c404               add esp, 4
// 0042bb2c  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 0042bb2f  8bfd                 mov edi, ebp
// 0042bb31  75bd                 jne 0x42baf0
// 0042bb33  5e                   pop esi
// 0042bb34  5d                   pop ebp
// 0042bb35  5f                   pop edi
// 0042bb36  5b                   pop ebx
// 0042bb37  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?clear@?$list@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@V?$allocator@U?$pair@V?$shared_ptr@$$CBV?$w32_regex_traits_implementation@D@re_detail@boost@@@boost@@PBK@std@@@2@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
