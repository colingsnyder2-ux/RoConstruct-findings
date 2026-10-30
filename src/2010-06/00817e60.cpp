// roc 2010-06 00817e60  unit: CXTPToolTipContextToolTip  size: 1159 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00817e60
//
// 00817e60  6aff                 push -1
// 00817e62  68684b9b00           push 0x9b4b68
// 00817e67  64a100000000         mov eax, dword ptr fs:[0]
// 00817e6d  50                   push eax
// 00817e6e  81ec5c020000         sub esp, 0x25c
// 00817e74  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00817e79  33c4                 xor eax, esp
// 00817e7b  89842458020000       mov dword ptr [esp + 0x258], eax
// 00817e82  53                   push ebx
// 00817e83  55                   push ebp
// 00817e84  56                   push esi
// 00817e85  57                   push edi
// 00817e86  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00817e8b  33c4                 xor eax, esp
// 00817e8d  50                   push eax
// 00817e8e  8d842470020000       lea eax, [esp + 0x270]
// 00817e95  64a300000000         mov dword ptr fs:[0], eax
// 00817e9b  8b842484020000       mov eax, dword ptr [esp + 0x284]
// 00817ea2  8bbc2480020000       mov edi, dword ptr [esp + 0x280]
// 00817ea9  8bf1                 mov esi, ecx
// 00817eab  68500da200           push 0xa20d50
// 00817eb0  8d4c2418             lea ecx, [esp + 0x18]
// 00817eb4  89442420             mov dword ptr [esp + 0x20], eax
// 00817eb8  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00817ebe  33db                 xor ebx, ebx
// 00817ec0  688cfca500           push 0xa5fc8c
// 00817ec5  8d4c241c             lea ecx, [esp + 0x1c]
// 00817ec9  899c247c020000       mov dword ptr [esp + 0x27c], ebx
// 00817ed0  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00817ed6  8bce                 mov ecx, esi
// 00817ed8  c684247802000001     mov byte ptr [esp + 0x278], 1
// 00817ee0  e8dbfcffff           call 0x817bc0
// 00817ee5  8d8c2418010000       lea ecx, [esp + 0x118]
// 00817eec  e8fff7ffff           call 0x8176f0
// 00817ef1  6a3c                 push 0x3c
// 00817ef3  8d8c24bc010000       lea ecx, [esp + 0x1bc]
// 00817efa  51                   push ecx
// 00817efb  8d9424a4000000       lea edx, [esp + 0xa4]
// 00817f02  6a3c                 push 0x3c
// 00817f04  52                   push edx
// 00817f05  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 00817f0b  8b2d78a89e00         mov ebp, dword ptr [0x9ea878]
// 00817f11  83c410               add esp, 0x10
// 00817f14  3bfb                 cmp edi, ebx
// 00817f16  7438                 je 0x817f50
// 00817f18  57                   push edi
// 00817f19  8bce                 mov ecx, esi
// 00817f1b  e870fbffff           call 0x817a90
// 00817f20  85c0                 test eax, eax
// 00817f22  746e                 je 0x817f92
// 00817f24  57                   push edi
// 00817f25  8d8424bc000000       lea eax, [esp + 0xbc]
// 00817f2c  6a20                 push 0x20
// 00817f2e  50                   push eax
// 00817f2f  ffd5                 call ebp
// 00817f31  57                   push edi
// 00817f32  8d8c2420020000       lea ecx, [esp + 0x220]
// 00817f39  6a20                 push 0x20
// 00817f3b  51                   push ecx
// 00817f3c  ffd5                 call ebp
// 00817f3e  57                   push edi
// 00817f3f  8d9424ac010000       lea edx, [esp + 0x1ac]
// 00817f46  6a20                 push 0x20
// 00817f48  52                   push edx
// 00817f49  ffd5                 call ebp
// 00817f4b  83c424               add esp, 0x24
// 00817f4e  eb42                 jmp 0x817f92
// 00817f50  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 00817f56  743a                 je 0x817f92
// 00817f58  80bc24cf01000002     cmp byte ptr [esp + 0x1cf], 2
// 00817f60  7730                 ja 0x817f92
// 00817f62  8d4c2414             lea ecx, [esp + 0x14]
// 00817f66  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00817f6c  50                   push eax
// 00817f6d  8bce                 mov ecx, esi
// 00817f6f  e81cfbffff           call 0x817a90
// 00817f74  85c0                 test eax, eax
// 00817f76  741a                 je 0x817f92
// 00817f78  8d4c2414             lea ecx, [esp + 0x14]
// 00817f7c  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00817f82  50                   push eax
// 00817f83  8d8424bc000000       lea eax, [esp + 0xbc]
// 00817f8a  6a20                 push 0x20
// 00817f8c  50                   push eax
// 00817f8d  ffd5                 call ebp
// 00817f8f  83c40c               add esp, 0xc
// 00817f92  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00817f99  51                   push ecx
// 00817f9a  8d4c2424             lea ecx, [esp + 0x24]
// 00817f9e  e89df7ffff           call 0x817740
// 00817fa3  6aff                 push -1
// 00817fa5  6aff                 push -1
// 00817fa7  6aff                 push -1
// 00817fa9  6aff                 push -1
// 00817fab  8d96dc000000         lea edx, [esi + 0xdc]
// 00817fb1  52                   push edx
// 00817fb2  8d442434             lea eax, [esp + 0x34]
// 00817fb6  50                   push eax
// 00817fb7  8bce                 mov ecx, esi
// 00817fb9  e8e2fcffff           call 0x817ca0
// 00817fbe  85c0                 test eax, eax
// 00817fc0  751b                 jne 0x817fdd
// 00817fc2  8d4c2418             lea ecx, [esp + 0x18]
// 00817fc6  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00817fcc  8d4c2414             lea ecx, [esp + 0x14]
// 00817fd0  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00817fd6  33c0                 xor eax, eax
// 00817fd8  e9e0020000           jmp 0x8182bd
// 00817fdd  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00817fe4  51                   push ecx
// 00817fe5  8d4c2424             lea ecx, [esp + 0x24]
// 00817fe9  e852f7ffff           call 0x817740
// 00817fee  6aff                 push -1
// 00817ff0  6aff                 push -1
// 00817ff2  6aff                 push -1
// 00817ff4  68bc020000           push 0x2bc
// 00817ff9  8d96e4000000         lea edx, [esi + 0xe4]
// 00817fff  52                   push edx
// 00818000  8d442434             lea eax, [esp + 0x34]
// 00818004  50                   push eax
// 00818005  8bce                 mov ecx, esi
// 00818007  e894fcffff           call 0x817ca0
// 0081800c  85c0                 test eax, eax
// 0081800e  74b2                 je 0x817fc2
// 00818010  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00818017  51                   push ecx
// 00818018  8d4c2424             lea ecx, [esp + 0x24]
// 0081801c  e81ff7ffff           call 0x817740
// 00818021  6aff                 push -1
// 00818023  6aff                 push -1
// 00818025  6a01                 push 1
// 00818027  6aff                 push -1
// 00818029  8d96ec000000         lea edx, [esi + 0xec]
// 0081802f  52                   push edx
// 00818030  8d442434             lea eax, [esp + 0x34]
// 00818034  50                   push eax
// 00818035  8bce                 mov ecx, esi
// 00818037  e864fcffff           call 0x817ca0
// 0081803c  85c0                 test eax, eax
// 0081803e  7482                 je 0x817fc2
// 00818040  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00818044  3bfb                 cmp edi, ebx
// 00818046  7419                 je 0x818061
// 00818048  57                   push edi
// 00818049  8bce                 mov ecx, esi
// 0081804b  e840faffff           call 0x817a90
// 00818050  85c0                 test eax, eax
// 00818052  7453                 je 0x8180a7
// 00818054  57                   push edi
// 00818055  6a20                 push 0x20
// 00818057  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 0081805e  51                   push ecx
// 0081805f  eb41                 jmp 0x8180a2
// 00818061  8d9424d4010000       lea edx, [esp + 0x1d4]
// 00818068  52                   push edx
// 00818069  8d4c2418             lea ecx, [esp + 0x18]
// 0081806d  ff1528c09e00         call dword ptr [0x9ec028]
// 00818073  85c0                 test eax, eax
// 00818075  7430                 je 0x8180a7
// 00818077  8d4c2418             lea ecx, [esp + 0x18]
// 0081807b  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00818081  50                   push eax
// 00818082  8bce                 mov ecx, esi
// 00818084  e807faffff           call 0x817a90
// 00818089  85c0                 test eax, eax
// 0081808b  741a                 je 0x8180a7
// 0081808d  8d4c2418             lea ecx, [esp + 0x18]
// 00818091  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00818097  50                   push eax
// 00818098  6a20                 push 0x20
// 0081809a  8d8424c0000000       lea eax, [esp + 0xc0]
// 008180a1  50                   push eax
// 008180a2  ffd5                 call ebp
// 008180a4  83c40c               add esp, 0xc
// 008180a7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008180ae  51                   push ecx
// 008180af  8d4c2424             lea ecx, [esp + 0x24]
// 008180b3  e888f6ffff           call 0x817740
// 008180b8  688c0a0000           push 0xa8c
// 008180bd  6884030000           push 0x384
// 008180c2  6aff                 push -1
// 008180c4  6aff                 push -1
// 008180c6  8d96f4000000         lea edx, [esi + 0xf4]
// 008180cc  52                   push edx
// 008180cd  8d442434             lea eax, [esp + 0x34]
// 008180d1  50                   push eax
// 008180d2  8bce                 mov ecx, esi
// 008180d4  e8c7fbffff           call 0x817ca0
// 008180d9  85c0                 test eax, eax
// 008180db  0f84e1feffff         je 0x817fc2
// 008180e1  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008180e8  51                   push ecx
// 008180e9  8d4c2424             lea ecx, [esp + 0x24]
// 008180ed  e84ef6ffff           call 0x817740
// 008180f2  688c0a0000           push 0xa8c
// 008180f7  6884030000           push 0x384
// 008180fc  6aff                 push -1
// 008180fe  68bc020000           push 0x2bc
// 00818103  8d96fc000000         lea edx, [esi + 0xfc]
// 00818109  52                   push edx
// 0081810a  8d442434             lea eax, [esp + 0x34]
// 0081810e  50                   push eax
// 0081810f  8bce                 mov ecx, esi
// 00818111  e88afbffff           call 0x817ca0
// 00818116  85c0                 test eax, eax
// 00818118  0f84a4feffff         je 0x817fc2
// 0081811e  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 00818125  e8f6f5ffff           call 0x817720
// 0081812a  53                   push ebx
// 0081812b  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00818132  51                   push ecx
// 00818133  6a3c                 push 0x3c
// 00818135  6a1f                 push 0x1f
// 00818137  ff1594ba9e00         call dword ptr [0x9eba94]
// 0081813d  6aff                 push -1
// 0081813f  6aff                 push -1
// 00818141  6aff                 push -1
// 00818143  6aff                 push -1
// 00818145  8d9604010000         lea edx, [esi + 0x104]
// 0081814b  52                   push edx
// 0081814c  8d8424ec000000       lea eax, [esp + 0xec]
// 00818153  50                   push eax
// 00818154  8bce                 mov ecx, esi
// 00818156  e845fbffff           call 0x817ca0
// 0081815b  85c0                 test eax, eax
// 0081815d  0f845ffeffff         je 0x817fc2
// 00818163  6aff                 push -1
// 00818165  6aff                 push -1
// 00818167  6aff                 push -1
// 00818169  68bc020000           push 0x2bc
// 0081816e  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00818174  51                   push ecx
// 00818175  8d9424ec000000       lea edx, [esp + 0xec]
// 0081817c  52                   push edx
// 0081817d  8bce                 mov ecx, esi
// 0081817f  e81cfbffff           call 0x817ca0
// 00818184  85c0                 test eax, eax
// 00818186  0f8436feffff         je 0x817fc2
// 0081818c  8d8424f4010000       lea eax, [esp + 0x1f4]
// 00818193  50                   push eax
// 00818194  8d4c2424             lea ecx, [esp + 0x24]
// 00818198  e8a3f5ffff           call 0x817740
// 0081819d  6aff                 push -1
// 0081819f  6aff                 push -1
// 008181a1  6aff                 push -1
// 008181a3  6aff                 push -1
// 008181a5  8d8e1c010000         lea ecx, [esi + 0x11c]
// 008181ab  51                   push ecx
// 008181ac  8d542434             lea edx, [esp + 0x34]
// 008181b0  52                   push edx
// 008181b1  8bce                 mov ecx, esi
// 008181b3  e8e8faffff           call 0x817ca0
// 008181b8  85c0                 test eax, eax
// 008181ba  0f8402feffff         je 0x817fc2
// 008181c0  8d842474010000       lea eax, [esp + 0x174]
// 008181c7  50                   push eax
// 008181c8  8d4c2424             lea ecx, [esp + 0x24]
// 008181cc  e86ff5ffff           call 0x817740
// 008181d1  6aff                 push -1
// 008181d3  6aff                 push -1
// 008181d5  6aff                 push -1
// 008181d7  6aff                 push -1
// 008181d9  8d8e24010000         lea ecx, [esi + 0x124]
// 008181df  51                   push ecx
// 008181e0  8d542434             lea edx, [esp + 0x34]
// 008181e4  52                   push edx
// 008181e5  8bce                 mov ecx, esi
// 008181e7  e8b4faffff           call 0x817ca0
// 008181ec  85c0                 test eax, eax
// 008181ee  0f84cefdffff         je 0x817fc2
// 008181f4  8b8424d8000000       mov eax, dword ptr [esp + 0xd8]
// 008181fb  8b0d0c5fa500         mov ecx, dword ptr [0xa55f0c]
// 00818201  8b15105fa500         mov edx, dword ptr [0xa55f10]
// 00818207  89442460             mov dword ptr [esp + 0x60], eax
// 0081820b  33c0                 xor eax, eax
// 0081820d  89842484000000       mov dword ptr [esp + 0x84], eax
// 00818214  89842488000000       mov dword ptr [esp + 0x88], eax
// 0081821b  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00818222  89842490000000       mov dword ptr [esp + 0x90], eax
// 00818229  89842494000000       mov dword ptr [esp + 0x94], eax
// 00818230  89842498000000       mov dword ptr [esp + 0x98], eax
// 00818237  8d442460             lea eax, [esp + 0x60]
// 0081823b  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0081823f  50                   push eax
// 00818240  8d4c2424             lea ecx, [esp + 0x24]
// 00818244  895c2468             mov dword ptr [esp + 0x68], ebx
// 00818248  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0081824c  895c2470             mov dword ptr [esp + 0x70], ebx
// 00818250  895c2474             mov dword ptr [esp + 0x74], ebx
// 00818254  885c2478             mov byte ptr [esp + 0x78], bl
// 00818258  885c2479             mov byte ptr [esp + 0x79], bl
// 0081825c  885c247a             mov byte ptr [esp + 0x7a], bl
// 00818260  c644247b01           mov byte ptr [esp + 0x7b], 1
// 00818265  885c247c             mov byte ptr [esp + 0x7c], bl
// 00818269  885c247d             mov byte ptr [esp + 0x7d], bl
// 0081826d  885c247e             mov byte ptr [esp + 0x7e], bl
// 00818271  885c247f             mov byte ptr [esp + 0x7f], bl
// 00818275  89942484000000       mov dword ptr [esp + 0x84], edx
// 0081827c  e8bff4ffff           call 0x817740
// 00818281  6aff                 push -1
// 00818283  6aff                 push -1
// 00818285  6aff                 push -1
// 00818287  6aff                 push -1
// 00818289  8d8e14010000         lea ecx, [esi + 0x114]
// 0081828f  51                   push ecx
// 00818290  8d542434             lea edx, [esp + 0x34]
// 00818294  52                   push edx
// 00818295  8bce                 mov ecx, esi
// 00818297  e804faffff           call 0x817ca0
// 0081829c  8d4c2418             lea ecx, [esp + 0x18]
// 008182a0  85c0                 test eax, eax
// 008182a2  0f841efdffff         je 0x817fc6
// 008182a8  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008182ae  8d4c2414             lea ecx, [esp + 0x14]
// 008182b2  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008182b8  b801000000           mov eax, 1
// 008182bd  8b8c2470020000       mov ecx, dword ptr [esp + 0x270]
// 008182c4  64890d00000000       mov dword ptr fs:[0], ecx
// 008182cb  59                   pop ecx
// 008182cc  5f                   pop edi
// 008182cd  5e                   pop esi
// 008182ce  5d                   pop ebp
// 008182cf  5b                   pop ebx
// 008182d0  8b8c2458020000       mov ecx, dword ptr [esp + 0x258]
// 008182d7  33cc                 xor ecx, esp
// 008182d9  e8f611f9ff           call 0x7a94d4
// 008182de  81c468020000         add esp, 0x268
// 008182e4  c20800               ret 8
// copied from an identical function in another client (function ?LoadSysFonts@CXTAuxData@@QAEHPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source/Controls/XTGlobal.cpp