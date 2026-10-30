// roc 2011-06 00875690  unit: CXTPToolTipContextToolTip  size: 1159 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875690
//
// 00875690  6aff                 push -1
// 00875692  68a87ca000           push 0xa07ca8
// 00875697  64a100000000         mov eax, dword ptr fs:[0]
// 0087569d  50                   push eax
// 0087569e  81ec5c020000         sub esp, 0x25c
// 008756a4  a12058c900           mov eax, dword ptr [0xc95820]
// 008756a9  33c4                 xor eax, esp
// 008756ab  89842458020000       mov dword ptr [esp + 0x258], eax
// 008756b2  53                   push ebx
// 008756b3  55                   push ebp
// 008756b4  56                   push esi
// 008756b5  57                   push edi
// 008756b6  a12058c900           mov eax, dword ptr [0xc95820]
// 008756bb  33c4                 xor eax, esp
// 008756bd  50                   push eax
// 008756be  8d842470020000       lea eax, [esp + 0x270]
// 008756c5  64a300000000         mov dword ptr fs:[0], eax
// 008756cb  8b842484020000       mov eax, dword ptr [esp + 0x284]
// 008756d2  8bbc2480020000       mov edi, dword ptr [esp + 0x280]
// 008756d9  8bf1                 mov esi, ecx
// 008756db  68a000a800           push 0xa800a0
// 008756e0  8d4c2418             lea ecx, [esp + 0x18]
// 008756e4  89442420             mov dword ptr [esp + 0x20], eax
// 008756e8  ff15002ea400         call dword ptr [0xa42e00]
// 008756ee  33db                 xor ebx, ebx
// 008756f0  68d43bab00           push 0xab3bd4
// 008756f5  8d4c241c             lea ecx, [esp + 0x1c]
// 008756f9  899c247c020000       mov dword ptr [esp + 0x27c], ebx
// 00875700  ff15002ea400         call dword ptr [0xa42e00]
// 00875706  8bce                 mov ecx, esi
// 00875708  c684247802000001     mov byte ptr [esp + 0x278], 1
// 00875710  e8dbfcffff           call 0x8753f0
// 00875715  8d8c2418010000       lea ecx, [esp + 0x118]
// 0087571c  e81f9ef9ff           call 0x80f540
// 00875721  6a3c                 push 0x3c
// 00875723  8d8c24bc010000       lea ecx, [esp + 0x1bc]
// 0087572a  51                   push ecx
// 0087572b  8d9424a4000000       lea edx, [esp + 0xa4]
// 00875732  6a3c                 push 0x3c
// 00875734  52                   push edx
// 00875735  ff153c0aa400         call dword ptr [0xa40a3c]
// 0087573b  8b2ddc09a400         mov ebp, dword ptr [0xa409dc]
// 00875741  83c410               add esp, 0x10
// 00875744  3bfb                 cmp edi, ebx
// 00875746  7438                 je 0x875780
// 00875748  57                   push edi
// 00875749  8bce                 mov ecx, esi
// 0087574b  e870fbffff           call 0x8752c0
// 00875750  85c0                 test eax, eax
// 00875752  746e                 je 0x8757c2
// 00875754  57                   push edi
// 00875755  8d8424bc000000       lea eax, [esp + 0xbc]
// 0087575c  6a20                 push 0x20
// 0087575e  50                   push eax
// 0087575f  ffd5                 call ebp
// 00875761  57                   push edi
// 00875762  8d8c2420020000       lea ecx, [esp + 0x220]
// 00875769  6a20                 push 0x20
// 0087576b  51                   push ecx
// 0087576c  ffd5                 call ebp
// 0087576e  57                   push edi
// 0087576f  8d9424ac010000       lea edx, [esp + 0x1ac]
// 00875776  6a20                 push 0x20
// 00875778  52                   push edx
// 00875779  ffd5                 call ebp
// 0087577b  83c424               add esp, 0x24
// 0087577e  eb42                 jmp 0x8757c2
// 00875780  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 00875786  743a                 je 0x8757c2
// 00875788  80bc24cf01000002     cmp byte ptr [esp + 0x1cf], 2
// 00875790  7730                 ja 0x8757c2
// 00875792  8d4c2414             lea ecx, [esp + 0x14]
// 00875796  ff15c82da400         call dword ptr [0xa42dc8]
// 0087579c  50                   push eax
// 0087579d  8bce                 mov ecx, esi
// 0087579f  e81cfbffff           call 0x8752c0
// 008757a4  85c0                 test eax, eax
// 008757a6  741a                 je 0x8757c2
// 008757a8  8d4c2414             lea ecx, [esp + 0x14]
// 008757ac  ff15c82da400         call dword ptr [0xa42dc8]
// 008757b2  50                   push eax
// 008757b3  8d8424bc000000       lea eax, [esp + 0xbc]
// 008757ba  6a20                 push 0x20
// 008757bc  50                   push eax
// 008757bd  ffd5                 call ebp
// 008757bf  83c40c               add esp, 0xc
// 008757c2  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008757c9  51                   push ecx
// 008757ca  8d4c2424             lea ecx, [esp + 0x24]
// 008757ce  e89df7ffff           call 0x874f70
// 008757d3  6aff                 push -1
// 008757d5  6aff                 push -1
// 008757d7  6aff                 push -1
// 008757d9  6aff                 push -1
// 008757db  8d96dc000000         lea edx, [esi + 0xdc]
// 008757e1  52                   push edx
// 008757e2  8d442434             lea eax, [esp + 0x34]
// 008757e6  50                   push eax
// 008757e7  8bce                 mov ecx, esi
// 008757e9  e8e2fcffff           call 0x8754d0
// 008757ee  85c0                 test eax, eax
// 008757f0  751b                 jne 0x87580d
// 008757f2  8d4c2418             lea ecx, [esp + 0x18]
// 008757f6  ff15082ea400         call dword ptr [0xa42e08]
// 008757fc  8d4c2414             lea ecx, [esp + 0x14]
// 00875800  ff15082ea400         call dword ptr [0xa42e08]
// 00875806  33c0                 xor eax, eax
// 00875808  e9e0020000           jmp 0x875aed
// 0087580d  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00875814  51                   push ecx
// 00875815  8d4c2424             lea ecx, [esp + 0x24]
// 00875819  e852f7ffff           call 0x874f70
// 0087581e  6aff                 push -1
// 00875820  6aff                 push -1
// 00875822  6aff                 push -1
// 00875824  68bc020000           push 0x2bc
// 00875829  8d96e4000000         lea edx, [esi + 0xe4]
// 0087582f  52                   push edx
// 00875830  8d442434             lea eax, [esp + 0x34]
// 00875834  50                   push eax
// 00875835  8bce                 mov ecx, esi
// 00875837  e894fcffff           call 0x8754d0
// 0087583c  85c0                 test eax, eax
// 0087583e  74b2                 je 0x8757f2
// 00875840  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00875847  51                   push ecx
// 00875848  8d4c2424             lea ecx, [esp + 0x24]
// 0087584c  e81ff7ffff           call 0x874f70
// 00875851  6aff                 push -1
// 00875853  6aff                 push -1
// 00875855  6a01                 push 1
// 00875857  6aff                 push -1
// 00875859  8d96ec000000         lea edx, [esi + 0xec]
// 0087585f  52                   push edx
// 00875860  8d442434             lea eax, [esp + 0x34]
// 00875864  50                   push eax
// 00875865  8bce                 mov ecx, esi
// 00875867  e864fcffff           call 0x8754d0
// 0087586c  85c0                 test eax, eax
// 0087586e  7482                 je 0x8757f2
// 00875870  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00875874  3bfb                 cmp edi, ebx
// 00875876  7419                 je 0x875891
// 00875878  57                   push edi
// 00875879  8bce                 mov ecx, esi
// 0087587b  e840faffff           call 0x8752c0
// 00875880  85c0                 test eax, eax
// 00875882  7453                 je 0x8758d7
// 00875884  57                   push edi
// 00875885  6a20                 push 0x20
// 00875887  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 0087588e  51                   push ecx
// 0087588f  eb41                 jmp 0x8758d2
// 00875891  8d9424d4010000       lea edx, [esp + 0x1d4]
// 00875898  52                   push edx
// 00875899  8d4c2418             lea ecx, [esp + 0x18]
// 0087589d  ff150820a400         call dword ptr [0xa42008]
// 008758a3  85c0                 test eax, eax
// 008758a5  7430                 je 0x8758d7
// 008758a7  8d4c2418             lea ecx, [esp + 0x18]
// 008758ab  ff15c82da400         call dword ptr [0xa42dc8]
// 008758b1  50                   push eax
// 008758b2  8bce                 mov ecx, esi
// 008758b4  e807faffff           call 0x8752c0
// 008758b9  85c0                 test eax, eax
// 008758bb  741a                 je 0x8758d7
// 008758bd  8d4c2418             lea ecx, [esp + 0x18]
// 008758c1  ff15c82da400         call dword ptr [0xa42dc8]
// 008758c7  50                   push eax
// 008758c8  6a20                 push 0x20
// 008758ca  8d8424c0000000       lea eax, [esp + 0xc0]
// 008758d1  50                   push eax
// 008758d2  ffd5                 call ebp
// 008758d4  83c40c               add esp, 0xc
// 008758d7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008758de  51                   push ecx
// 008758df  8d4c2424             lea ecx, [esp + 0x24]
// 008758e3  e888f6ffff           call 0x874f70
// 008758e8  688c0a0000           push 0xa8c
// 008758ed  6884030000           push 0x384
// 008758f2  6aff                 push -1
// 008758f4  6aff                 push -1
// 008758f6  8d96f4000000         lea edx, [esi + 0xf4]
// 008758fc  52                   push edx
// 008758fd  8d442434             lea eax, [esp + 0x34]
// 00875901  50                   push eax
// 00875902  8bce                 mov ecx, esi
// 00875904  e8c7fbffff           call 0x8754d0
// 00875909  85c0                 test eax, eax
// 0087590b  0f84e1feffff         je 0x8757f2
// 00875911  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00875918  51                   push ecx
// 00875919  8d4c2424             lea ecx, [esp + 0x24]
// 0087591d  e84ef6ffff           call 0x874f70
// 00875922  688c0a0000           push 0xa8c
// 00875927  6884030000           push 0x384
// 0087592c  6aff                 push -1
// 0087592e  68bc020000           push 0x2bc
// 00875933  8d96fc000000         lea edx, [esi + 0xfc]
// 00875939  52                   push edx
// 0087593a  8d442434             lea eax, [esp + 0x34]
// 0087593e  50                   push eax
// 0087593f  8bce                 mov ecx, esi
// 00875941  e88afbffff           call 0x8754d0
// 00875946  85c0                 test eax, eax
// 00875948  0f84a4feffff         je 0x8757f2
// 0087594e  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 00875955  e8f6f5ffff           call 0x874f50
// 0087595a  53                   push ebx
// 0087595b  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00875962  51                   push ecx
// 00875963  6a3c                 push 0x3c
// 00875965  6a1f                 push 0x1f
// 00875967  ff155c1ba400         call dword ptr [0xa41b5c]
// 0087596d  6aff                 push -1
// 0087596f  6aff                 push -1
// 00875971  6aff                 push -1
// 00875973  6aff                 push -1
// 00875975  8d9604010000         lea edx, [esi + 0x104]
// 0087597b  52                   push edx
// 0087597c  8d8424ec000000       lea eax, [esp + 0xec]
// 00875983  50                   push eax
// 00875984  8bce                 mov ecx, esi
// 00875986  e845fbffff           call 0x8754d0
// 0087598b  85c0                 test eax, eax
// 0087598d  0f845ffeffff         je 0x8757f2
// 00875993  6aff                 push -1
// 00875995  6aff                 push -1
// 00875997  6aff                 push -1
// 00875999  68bc020000           push 0x2bc
// 0087599e  8d8e0c010000         lea ecx, [esi + 0x10c]
// 008759a4  51                   push ecx
// 008759a5  8d9424ec000000       lea edx, [esp + 0xec]
// 008759ac  52                   push edx
// 008759ad  8bce                 mov ecx, esi
// 008759af  e81cfbffff           call 0x8754d0
// 008759b4  85c0                 test eax, eax
// 008759b6  0f8436feffff         je 0x8757f2
// 008759bc  8d8424f4010000       lea eax, [esp + 0x1f4]
// 008759c3  50                   push eax
// 008759c4  8d4c2424             lea ecx, [esp + 0x24]
// 008759c8  e8a3f5ffff           call 0x874f70
// 008759cd  6aff                 push -1
// 008759cf  6aff                 push -1
// 008759d1  6aff                 push -1
// 008759d3  6aff                 push -1
// 008759d5  8d8e1c010000         lea ecx, [esi + 0x11c]
// 008759db  51                   push ecx
// 008759dc  8d542434             lea edx, [esp + 0x34]
// 008759e0  52                   push edx
// 008759e1  8bce                 mov ecx, esi
// 008759e3  e8e8faffff           call 0x8754d0
// 008759e8  85c0                 test eax, eax
// 008759ea  0f8402feffff         je 0x8757f2
// 008759f0  8d842474010000       lea eax, [esp + 0x174]
// 008759f7  50                   push eax
// 008759f8  8d4c2424             lea ecx, [esp + 0x24]
// 008759fc  e86ff5ffff           call 0x874f70
// 00875a01  6aff                 push -1
// 00875a03  6aff                 push -1
// 00875a05  6aff                 push -1
// 00875a07  6aff                 push -1
// 00875a09  8d8e24010000         lea ecx, [esi + 0x124]
// 00875a0f  51                   push ecx
// 00875a10  8d542434             lea edx, [esp + 0x34]
// 00875a14  52                   push edx
// 00875a15  8bce                 mov ecx, esi
// 00875a17  e8b4faffff           call 0x8754d0
// 00875a1c  85c0                 test eax, eax
// 00875a1e  0f84cefdffff         je 0x8757f2
// 00875a24  8b8424d8000000       mov eax, dword ptr [esp + 0xd8]
// 00875a2b  8b0d6c1bac00         mov ecx, dword ptr [0xac1b6c]
// 00875a31  8b15701bac00         mov edx, dword ptr [0xac1b70]
// 00875a37  89442460             mov dword ptr [esp + 0x60], eax
// 00875a3b  33c0                 xor eax, eax
// 00875a3d  89842484000000       mov dword ptr [esp + 0x84], eax
// 00875a44  89842488000000       mov dword ptr [esp + 0x88], eax
// 00875a4b  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00875a52  89842490000000       mov dword ptr [esp + 0x90], eax
// 00875a59  89842494000000       mov dword ptr [esp + 0x94], eax
// 00875a60  89842498000000       mov dword ptr [esp + 0x98], eax
// 00875a67  8d442460             lea eax, [esp + 0x60]
// 00875a6b  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00875a6f  50                   push eax
// 00875a70  8d4c2424             lea ecx, [esp + 0x24]
// 00875a74  895c2468             mov dword ptr [esp + 0x68], ebx
// 00875a78  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00875a7c  895c2470             mov dword ptr [esp + 0x70], ebx
// 00875a80  895c2474             mov dword ptr [esp + 0x74], ebx
// 00875a84  885c2478             mov byte ptr [esp + 0x78], bl
// 00875a88  885c2479             mov byte ptr [esp + 0x79], bl
// 00875a8c  885c247a             mov byte ptr [esp + 0x7a], bl
// 00875a90  c644247b01           mov byte ptr [esp + 0x7b], 1
// 00875a95  885c247c             mov byte ptr [esp + 0x7c], bl
// 00875a99  885c247d             mov byte ptr [esp + 0x7d], bl
// 00875a9d  885c247e             mov byte ptr [esp + 0x7e], bl
// 00875aa1  885c247f             mov byte ptr [esp + 0x7f], bl
// 00875aa5  89942484000000       mov dword ptr [esp + 0x84], edx
// 00875aac  e8bff4ffff           call 0x874f70
// 00875ab1  6aff                 push -1
// 00875ab3  6aff                 push -1
// 00875ab5  6aff                 push -1
// 00875ab7  6aff                 push -1
// 00875ab9  8d8e14010000         lea ecx, [esi + 0x114]
// 00875abf  51                   push ecx
// 00875ac0  8d542434             lea edx, [esp + 0x34]
// 00875ac4  52                   push edx
// 00875ac5  8bce                 mov ecx, esi
// 00875ac7  e804faffff           call 0x8754d0
// 00875acc  8d4c2418             lea ecx, [esp + 0x18]
// 00875ad0  85c0                 test eax, eax
// 00875ad2  0f841efdffff         je 0x8757f6
// 00875ad8  ff15082ea400         call dword ptr [0xa42e08]
// 00875ade  8d4c2414             lea ecx, [esp + 0x14]
// 00875ae2  ff15082ea400         call dword ptr [0xa42e08]
// 00875ae8  b801000000           mov eax, 1
// 00875aed  8b8c2470020000       mov ecx, dword ptr [esp + 0x270]
// 00875af4  64890d00000000       mov dword ptr fs:[0], ecx
// 00875afb  59                   pop ecx
// 00875afc  5f                   pop edi
// 00875afd  5e                   pop esi
// 00875afe  5d                   pop ebp
// 00875aff  5b                   pop ebx
// 00875b00  8b8c2458020000       mov ecx, dword ptr [esp + 0x258]
// 00875b07  33cc                 xor ecx, esp
// 00875b09  e8e95df9ff           call 0x80b8f7
// 00875b0e  81c468020000         add esp, 0x268
// 00875b14  c20800               ret 8
// copied from an identical function in another client (function ?LoadSysFonts@CXTAuxData@@QAEHPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source/Controls/XTGlobal.cpp