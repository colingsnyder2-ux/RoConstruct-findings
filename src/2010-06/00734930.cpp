// from server: 100% by auto
// roc 2010-06 00734930  unit: seg_00730000  size: 1011 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734930
//
// 00734930  51                   push ecx
// 00734931  53                   push ebx
// 00734932  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00734936  55                   push ebp
// 00734937  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0073493b  3beb                 cmp ebp, ebx
// 0073493d  0f8ddc030000         jge 0x734d1f
// 00734943  56                   push esi
// 00734944  8b742414             mov esi, dword ptr [esp + 0x14]
// 00734948  57                   push edi
// 00734949  eb0d                 jmp 0x734958
// 0073494b  eb03                 jmp 0x734950
// 0073494d  8d4900               lea ecx, [ecx]
// 00734950  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00734954  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00734958  55                   push ebp
// 00734959  6a01                 push 1
// 0073495b  56                   push esi
// 0073495c  e8dfcefeff           call 0x721840
// 00734961  53                   push ebx
// 00734962  6a01                 push 1
// 00734964  56                   push esi
// 00734965  e8d6cefeff           call 0x721840
// 0073496a  6a02                 push 2
// 0073496c  56                   push esi
// 0073496d  e8cec7feff           call 0x721140
// 00734972  83c420               add esp, 0x20
// 00734975  85c0                 test eax, eax
// 00734977  743b                 je 0x7349b4
// 00734979  6a02                 push 2
// 0073497b  56                   push esi
// 0073497c  e88fc7feff           call 0x721110
// 00734981  6afe                 push -2
// 00734983  56                   push esi
// 00734984  e887c7feff           call 0x721110
// 00734989  6afc                 push -4
// 0073498b  56                   push esi
// 0073498c  e87fc7feff           call 0x721110
// 00734991  6a01                 push 1
// 00734993  6a02                 push 2
// 00734995  56                   push esi
// 00734996  e8d5d2feff           call 0x721c70
// 0073499b  6aff                 push -1
// 0073499d  56                   push esi
// 0073499e  e87dc9feff           call 0x721320
// 007349a3  6afe                 push -2
// 007349a5  56                   push esi
// 007349a6  8bf8                 mov edi, eax
// 007349a8  e8b3c5feff           call 0x720f60
// 007349ad  83c434               add esp, 0x34
// 007349b0  8bc7                 mov eax, edi
// 007349b2  eb0d                 jmp 0x7349c1
// 007349b4  6afe                 push -2
// 007349b6  6aff                 push -1
// 007349b8  56                   push esi
// 007349b9  e8a2c8feff           call 0x721260
// 007349be  83c40c               add esp, 0xc
// 007349c1  85c0                 test eax, eax
// 007349c3  7417                 je 0x7349dc
// 007349c5  55                   push ebp
// 007349c6  6a01                 push 1
// 007349c8  56                   push esi
// 007349c9  e8f2d0feff           call 0x721ac0
// 007349ce  53                   push ebx
// 007349cf  6a01                 push 1
// 007349d1  56                   push esi
// 007349d2  e8e9d0feff           call 0x721ac0
// 007349d7  83c418               add esp, 0x18
// 007349da  eb0b                 jmp 0x7349e7
// 007349dc  6afd                 push -3
// 007349de  56                   push esi
// 007349df  e87cc5feff           call 0x720f60
// 007349e4  83c408               add esp, 8
// 007349e7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007349eb  8beb                 mov ebp, ebx
// 007349ed  2be8                 sub ebp, eax
// 007349ef  83fd01               cmp ebp, 1
// 007349f2  0f8425030000         je 0x734d1d
// 007349f8  03c3                 add eax, ebx
// 007349fa  99                   cdq 
// 007349fb  2bc2                 sub eax, edx
// 007349fd  8bf8                 mov edi, eax
// 007349ff  d1ff                 sar edi, 1
// 00734a01  57                   push edi
// 00734a02  6a01                 push 1
// 00734a04  56                   push esi
// 00734a05  e836cefeff           call 0x721840
// 00734a0a  8b442428             mov eax, dword ptr [esp + 0x28]
// 00734a0e  50                   push eax
// 00734a0f  6a01                 push 1
// 00734a11  56                   push esi
// 00734a12  e829cefeff           call 0x721840
// 00734a17  6a02                 push 2
// 00734a19  56                   push esi
// 00734a1a  e821c7feff           call 0x721140
// 00734a1f  83c420               add esp, 0x20
// 00734a22  85c0                 test eax, eax
// 00734a24  743f                 je 0x734a65
// 00734a26  6a02                 push 2
// 00734a28  56                   push esi
// 00734a29  e8e2c6feff           call 0x721110
// 00734a2e  6afd                 push -3
// 00734a30  56                   push esi
// 00734a31  e8dac6feff           call 0x721110
// 00734a36  6afd                 push -3
// 00734a38  56                   push esi
// 00734a39  e8d2c6feff           call 0x721110
// 00734a3e  6a01                 push 1
// 00734a40  6a02                 push 2
// 00734a42  56                   push esi
// 00734a43  e828d2feff           call 0x721c70
// 00734a48  6aff                 push -1
// 00734a4a  56                   push esi
// 00734a4b  e8d0c8feff           call 0x721320
// 00734a50  6afe                 push -2
// 00734a52  56                   push esi
// 00734a53  8bd8                 mov ebx, eax
// 00734a55  e806c5feff           call 0x720f60
// 00734a5a  8bc3                 mov eax, ebx
// 00734a5c  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00734a60  83c434               add esp, 0x34
// 00734a63  eb0d                 jmp 0x734a72
// 00734a65  6aff                 push -1
// 00734a67  6afe                 push -2
// 00734a69  56                   push esi
// 00734a6a  e8f1c7feff           call 0x721260
// 00734a6f  83c40c               add esp, 0xc
// 00734a72  85c0                 test eax, eax
// 00734a74  741e                 je 0x734a94
// 00734a76  57                   push edi
// 00734a77  6a01                 push 1
// 00734a79  56                   push esi
// 00734a7a  e841d0feff           call 0x721ac0
// 00734a7f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00734a83  51                   push ecx
// 00734a84  6a01                 push 1
// 00734a86  56                   push esi
// 00734a87  e834d0feff           call 0x721ac0
// 00734a8c  83c418               add esp, 0x18
// 00734a8f  e992000000           jmp 0x734b26
// 00734a94  6afe                 push -2
// 00734a96  56                   push esi
// 00734a97  e8c4c4feff           call 0x720f60
// 00734a9c  53                   push ebx
// 00734a9d  6a01                 push 1
// 00734a9f  56                   push esi
// 00734aa0  e89bcdfeff           call 0x721840
// 00734aa5  6a02                 push 2
// 00734aa7  56                   push esi
// 00734aa8  e893c6feff           call 0x721140
// 00734aad  83c41c               add esp, 0x1c
// 00734ab0  85c0                 test eax, eax
// 00734ab2  743f                 je 0x734af3
// 00734ab4  6a02                 push 2
// 00734ab6  56                   push esi
// 00734ab7  e854c6feff           call 0x721110
// 00734abc  6afe                 push -2
// 00734abe  56                   push esi
// 00734abf  e84cc6feff           call 0x721110
// 00734ac4  6afc                 push -4
// 00734ac6  56                   push esi
// 00734ac7  e844c6feff           call 0x721110
// 00734acc  6a01                 push 1
// 00734ace  6a02                 push 2
// 00734ad0  56                   push esi
// 00734ad1  e89ad1feff           call 0x721c70
// 00734ad6  6aff                 push -1
// 00734ad8  56                   push esi
// 00734ad9  e842c8feff           call 0x721320
// 00734ade  6afe                 push -2
// 00734ae0  56                   push esi
// 00734ae1  8bd8                 mov ebx, eax
// 00734ae3  e878c4feff           call 0x720f60
// 00734ae8  8bc3                 mov eax, ebx
// 00734aea  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00734aee  83c434               add esp, 0x34
// 00734af1  eb0d                 jmp 0x734b00
// 00734af3  6afe                 push -2
// 00734af5  6aff                 push -1
// 00734af7  56                   push esi
// 00734af8  e863c7feff           call 0x721260
// 00734afd  83c40c               add esp, 0xc
// 00734b00  85c0                 test eax, eax
// 00734b02  7417                 je 0x734b1b
// 00734b04  57                   push edi
// 00734b05  6a01                 push 1
// 00734b07  56                   push esi
// 00734b08  e8b3cffeff           call 0x721ac0
// 00734b0d  53                   push ebx
// 00734b0e  6a01                 push 1
// 00734b10  56                   push esi
// 00734b11  e8aacffeff           call 0x721ac0
// 00734b16  83c418               add esp, 0x18
// 00734b19  eb0b                 jmp 0x734b26
// 00734b1b  6afd                 push -3
// 00734b1d  56                   push esi
// 00734b1e  e83dc4feff           call 0x720f60
// 00734b23  83c408               add esp, 8
// 00734b26  83fd02               cmp ebp, 2
// 00734b29  0f84ee010000         je 0x734d1d
// 00734b2f  57                   push edi
// 00734b30  6a01                 push 1
// 00734b32  56                   push esi
// 00734b33  e808cdfeff           call 0x721840
// 00734b38  6aff                 push -1
// 00734b3a  56                   push esi
// 00734b3b  e8d0c5feff           call 0x721110
// 00734b40  8d6bff               lea ebp, [ebx - 1]
// 00734b43  55                   push ebp
// 00734b44  6a01                 push 1
// 00734b46  56                   push esi
// 00734b47  896c2430             mov dword ptr [esp + 0x30], ebp
// 00734b4b  e8f0ccfeff           call 0x721840
// 00734b50  57                   push edi
// 00734b51  6a01                 push 1
// 00734b53  56                   push esi
// 00734b54  e867cffeff           call 0x721ac0
// 00734b59  55                   push ebp
// 00734b5a  6a01                 push 1
// 00734b5c  56                   push esi
// 00734b5d  e85ecffeff           call 0x721ac0
// 00734b62  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00734b66  83c438               add esp, 0x38
// 00734b69  8da42400000000       lea esp, [esp]
// 00734b70  43                   inc ebx
// 00734b71  53                   push ebx
// 00734b72  6a01                 push 1
// 00734b74  56                   push esi
// 00734b75  e8c6ccfeff           call 0x721840
// 00734b7a  6a02                 push 2
// 00734b7c  56                   push esi
// 00734b7d  e8bec5feff           call 0x721140
// 00734b82  83c414               add esp, 0x14
// 00734b85  85c0                 test eax, eax
// 00734b87  743b                 je 0x734bc4
// 00734b89  6a02                 push 2
// 00734b8b  56                   push esi
// 00734b8c  e87fc5feff           call 0x721110
// 00734b91  6afe                 push -2
// 00734b93  56                   push esi
// 00734b94  e877c5feff           call 0x721110
// 00734b99  6afc                 push -4
// 00734b9b  56                   push esi
// 00734b9c  e86fc5feff           call 0x721110
// 00734ba1  6a01                 push 1
// 00734ba3  6a02                 push 2
// 00734ba5  56                   push esi
// 00734ba6  e8c5d0feff           call 0x721c70
// 00734bab  6aff                 push -1
// 00734bad  56                   push esi
// 00734bae  e86dc7feff           call 0x721320
// 00734bb3  6afe                 push -2
// 00734bb5  56                   push esi
// 00734bb6  8bf8                 mov edi, eax
// 00734bb8  e8a3c3feff           call 0x720f60
// 00734bbd  83c434               add esp, 0x34
// 00734bc0  8bc7                 mov eax, edi
// 00734bc2  eb0d                 jmp 0x734bd1
// 00734bc4  6afe                 push -2
// 00734bc6  6aff                 push -1
// 00734bc8  56                   push esi
// 00734bc9  e892c6feff           call 0x721260
// 00734bce  83c40c               add esp, 0xc
// 00734bd1  85c0                 test eax, eax
// 00734bd3  742b                 je 0x734c00
// 00734bd5  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00734bd9  7e0e                 jle 0x734be9
// 00734bdb  68ccdfa400           push 0xa4dfcc
// 00734be0  56                   push esi
// 00734be1  e8bad8feff           call 0x7224a0
// 00734be6  83c408               add esp, 8
// 00734be9  6afe                 push -2
// 00734beb  56                   push esi
// 00734bec  e86fc3feff           call 0x720f60
// 00734bf1  83c408               add esp, 8
// 00734bf4  e977ffffff           jmp 0x734b70
// 00734bf9  8da42400000000       lea esp, [esp]
// 00734c00  4d                   dec ebp
// 00734c01  55                   push ebp
// 00734c02  6a01                 push 1
// 00734c04  56                   push esi
// 00734c05  e836ccfeff           call 0x721840
// 00734c0a  6a02                 push 2
// 00734c0c  56                   push esi
// 00734c0d  e82ec5feff           call 0x721140
// 00734c12  83c414               add esp, 0x14
// 00734c15  85c0                 test eax, eax
// 00734c17  743b                 je 0x734c54
// 00734c19  6a02                 push 2
// 00734c1b  56                   push esi
// 00734c1c  e8efc4feff           call 0x721110
// 00734c21  6afc                 push -4
// 00734c23  56                   push esi
// 00734c24  e8e7c4feff           call 0x721110
// 00734c29  6afd                 push -3
// 00734c2b  56                   push esi
// 00734c2c  e8dfc4feff           call 0x721110
// 00734c31  6a01                 push 1
// 00734c33  6a02                 push 2
// 00734c35  56                   push esi
// 00734c36  e835d0feff           call 0x721c70
// 00734c3b  6aff                 push -1
// 00734c3d  56                   push esi
// 00734c3e  e8ddc6feff           call 0x721320
// 00734c43  6afe                 push -2
// 00734c45  56                   push esi
// 00734c46  8bf8                 mov edi, eax
// 00734c48  e813c3feff           call 0x720f60
// 00734c4d  83c434               add esp, 0x34
// 00734c50  8bc7                 mov eax, edi
// 00734c52  eb0d                 jmp 0x734c61
// 00734c54  6aff                 push -1
// 00734c56  6afd                 push -3
// 00734c58  56                   push esi
// 00734c59  e802c6feff           call 0x721260
// 00734c5e  83c40c               add esp, 0xc
// 00734c61  85c0                 test eax, eax
// 00734c63  7424                 je 0x734c89
// 00734c65  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00734c69  7d0e                 jge 0x734c79
// 00734c6b  68ccdfa400           push 0xa4dfcc
// 00734c70  56                   push esi
// 00734c71  e82ad8feff           call 0x7224a0
// 00734c76  83c408               add esp, 8
// 00734c79  6afe                 push -2
// 00734c7b  56                   push esi
// 00734c7c  e8dfc2feff           call 0x720f60
// 00734c81  83c408               add esp, 8
// 00734c84  e977ffffff           jmp 0x734c00
// 00734c89  3beb                 cmp ebp, ebx
// 00734c8b  7c1a                 jl 0x734ca7
// 00734c8d  53                   push ebx
// 00734c8e  6a01                 push 1
// 00734c90  56                   push esi
// 00734c91  e82acefeff           call 0x721ac0
// 00734c96  55                   push ebp
// 00734c97  6a01                 push 1
// 00734c99  56                   push esi
// 00734c9a  e821cefeff           call 0x721ac0
// 00734c9f  83c418               add esp, 0x18
// 00734ca2  e9c9feffff           jmp 0x734b70
// 00734ca7  6afc                 push -4
// 00734ca9  56                   push esi
// 00734caa  e8b1c2feff           call 0x720f60
// 00734caf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00734cb3  57                   push edi
// 00734cb4  6a01                 push 1
// 00734cb6  56                   push esi
// 00734cb7  e884cbfeff           call 0x721840
// 00734cbc  53                   push ebx
// 00734cbd  6a01                 push 1
// 00734cbf  56                   push esi
// 00734cc0  e87bcbfeff           call 0x721840
// 00734cc5  57                   push edi
// 00734cc6  6a01                 push 1
// 00734cc8  56                   push esi
// 00734cc9  e8f2cdfeff           call 0x721ac0
// 00734cce  53                   push ebx
// 00734ccf  6a01                 push 1
// 00734cd1  56                   push esi
// 00734cd2  e8e9cdfeff           call 0x721ac0
// 00734cd7  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00734cdb  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00734cdf  8bd5                 mov edx, ebp
// 00734ce1  8bc3                 mov eax, ebx
// 00734ce3  2bd3                 sub edx, ebx
// 00734ce5  2bc7                 sub eax, edi
// 00734ce7  83c438               add esp, 0x38
// 00734cea  3bc2                 cmp eax, edx
// 00734cec  7d0e                 jge 0x734cfc
// 00734cee  4b                   dec ebx
// 00734cef  8d4b02               lea ecx, [ebx + 2]
// 00734cf2  8bc7                 mov eax, edi
// 00734cf4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00734cf8  8bf9                 mov edi, ecx
// 00734cfa  eb0e                 jmp 0x734d0a
// 00734cfc  8d4301               lea eax, [ebx + 1]
// 00734cff  8d50fe               lea edx, [eax - 2]
// 00734d02  8bdd                 mov ebx, ebp
// 00734d04  89542420             mov dword ptr [esp + 0x20], edx
// 00734d08  8bea                 mov ebp, edx
// 00734d0a  53                   push ebx
// 00734d0b  50                   push eax
// 00734d0c  56                   push esi
// 00734d0d  e81efcffff           call 0x734930
// 00734d12  83c40c               add esp, 0xc
// 00734d15  3bfd                 cmp edi, ebp
// 00734d17  0f8c33fcffff         jl 0x734950
// 00734d1d  5f                   pop edi
// 00734d1e  5e                   pop esi
// 00734d1f  5d                   pop ebp
// 00734d20  5b                   pop ebx
// 00734d21  59                   pop ecx
// 00734d22  c3                   ret 
// library lua-5.1.4/ltablib.c (function _auxsort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
