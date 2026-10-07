// roc 2008-06 006256b0  unit: lua_exception  size: 1011 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006256b0
//
// 006256b0  51                   push ecx
// 006256b1  53                   push ebx
// 006256b2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006256b6  55                   push ebp
// 006256b7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006256bb  3beb                 cmp ebp, ebx
// 006256bd  0f8ddc030000         jge 0x625a9f
// 006256c3  56                   push esi
// 006256c4  8b742414             mov esi, dword ptr [esp + 0x14]
// 006256c8  57                   push edi
// 006256c9  eb0d                 jmp 0x6256d8
// 006256cb  eb03                 jmp 0x6256d0
// 006256cd  8d4900               lea ecx, [ecx]
// 006256d0  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006256d4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006256d8  55                   push ebp
// 006256d9  6a01                 push 1
// 006256db  56                   push esi
// 006256dc  e84fcefeff           call 0x612530
// 006256e1  53                   push ebx
// 006256e2  6a01                 push 1
// 006256e4  56                   push esi
// 006256e5  e846cefeff           call 0x612530
// 006256ea  6a02                 push 2
// 006256ec  56                   push esi
// 006256ed  e80ec7feff           call 0x611e00
// 006256f2  83c420               add esp, 0x20
// 006256f5  85c0                 test eax, eax
// 006256f7  743b                 je 0x625734
// 006256f9  6a02                 push 2
// 006256fb  56                   push esi
// 006256fc  e8cfc6feff           call 0x611dd0
// 00625701  6afe                 push -2
// 00625703  56                   push esi
// 00625704  e8c7c6feff           call 0x611dd0
// 00625709  6afc                 push -4
// 0062570b  56                   push esi
// 0062570c  e8bfc6feff           call 0x611dd0
// 00625711  6a01                 push 1
// 00625713  6a02                 push 2
// 00625715  56                   push esi
// 00625716  e805d2feff           call 0x612920
// 0062571b  6aff                 push -1
// 0062571d  56                   push esi
// 0062571e  e8bdc8feff           call 0x611fe0
// 00625723  6afe                 push -2
// 00625725  56                   push esi
// 00625726  8bf8                 mov edi, eax
// 00625728  e8f3c4feff           call 0x611c20
// 0062572d  83c434               add esp, 0x34
// 00625730  8bc7                 mov eax, edi
// 00625732  eb0d                 jmp 0x625741
// 00625734  6afe                 push -2
// 00625736  6aff                 push -1
// 00625738  56                   push esi
// 00625739  e8e2c7feff           call 0x611f20
// 0062573e  83c40c               add esp, 0xc
// 00625741  85c0                 test eax, eax
// 00625743  7417                 je 0x62575c
// 00625745  55                   push ebp
// 00625746  6a01                 push 1
// 00625748  56                   push esi
// 00625749  e832d0feff           call 0x612780
// 0062574e  53                   push ebx
// 0062574f  6a01                 push 1
// 00625751  56                   push esi
// 00625752  e829d0feff           call 0x612780
// 00625757  83c418               add esp, 0x18
// 0062575a  eb0b                 jmp 0x625767
// 0062575c  6afd                 push -3
// 0062575e  56                   push esi
// 0062575f  e8bcc4feff           call 0x611c20
// 00625764  83c408               add esp, 8
// 00625767  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062576b  8beb                 mov ebp, ebx
// 0062576d  2be8                 sub ebp, eax
// 0062576f  83fd01               cmp ebp, 1
// 00625772  0f8425030000         je 0x625a9d
// 00625778  03c3                 add eax, ebx
// 0062577a  99                   cdq 
// 0062577b  2bc2                 sub eax, edx
// 0062577d  8bf8                 mov edi, eax
// 0062577f  d1ff                 sar edi, 1
// 00625781  57                   push edi
// 00625782  6a01                 push 1
// 00625784  56                   push esi
// 00625785  e8a6cdfeff           call 0x612530
// 0062578a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062578e  50                   push eax
// 0062578f  6a01                 push 1
// 00625791  56                   push esi
// 00625792  e899cdfeff           call 0x612530
// 00625797  6a02                 push 2
// 00625799  56                   push esi
// 0062579a  e861c6feff           call 0x611e00
// 0062579f  83c420               add esp, 0x20
// 006257a2  85c0                 test eax, eax
// 006257a4  743f                 je 0x6257e5
// 006257a6  6a02                 push 2
// 006257a8  56                   push esi
// 006257a9  e822c6feff           call 0x611dd0
// 006257ae  6afd                 push -3
// 006257b0  56                   push esi
// 006257b1  e81ac6feff           call 0x611dd0
// 006257b6  6afd                 push -3
// 006257b8  56                   push esi
// 006257b9  e812c6feff           call 0x611dd0
// 006257be  6a01                 push 1
// 006257c0  6a02                 push 2
// 006257c2  56                   push esi
// 006257c3  e858d1feff           call 0x612920
// 006257c8  6aff                 push -1
// 006257ca  56                   push esi
// 006257cb  e810c8feff           call 0x611fe0
// 006257d0  6afe                 push -2
// 006257d2  56                   push esi
// 006257d3  8bd8                 mov ebx, eax
// 006257d5  e846c4feff           call 0x611c20
// 006257da  8bc3                 mov eax, ebx
// 006257dc  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 006257e0  83c434               add esp, 0x34
// 006257e3  eb0d                 jmp 0x6257f2
// 006257e5  6aff                 push -1
// 006257e7  6afe                 push -2
// 006257e9  56                   push esi
// 006257ea  e831c7feff           call 0x611f20
// 006257ef  83c40c               add esp, 0xc
// 006257f2  85c0                 test eax, eax
// 006257f4  741e                 je 0x625814
// 006257f6  57                   push edi
// 006257f7  6a01                 push 1
// 006257f9  56                   push esi
// 006257fa  e881cffeff           call 0x612780
// 006257ff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00625803  51                   push ecx
// 00625804  6a01                 push 1
// 00625806  56                   push esi
// 00625807  e874cffeff           call 0x612780
// 0062580c  83c418               add esp, 0x18
// 0062580f  e992000000           jmp 0x6258a6
// 00625814  6afe                 push -2
// 00625816  56                   push esi
// 00625817  e804c4feff           call 0x611c20
// 0062581c  53                   push ebx
// 0062581d  6a01                 push 1
// 0062581f  56                   push esi
// 00625820  e80bcdfeff           call 0x612530
// 00625825  6a02                 push 2
// 00625827  56                   push esi
// 00625828  e8d3c5feff           call 0x611e00
// 0062582d  83c41c               add esp, 0x1c
// 00625830  85c0                 test eax, eax
// 00625832  743f                 je 0x625873
// 00625834  6a02                 push 2
// 00625836  56                   push esi
// 00625837  e894c5feff           call 0x611dd0
// 0062583c  6afe                 push -2
// 0062583e  56                   push esi
// 0062583f  e88cc5feff           call 0x611dd0
// 00625844  6afc                 push -4
// 00625846  56                   push esi
// 00625847  e884c5feff           call 0x611dd0
// 0062584c  6a01                 push 1
// 0062584e  6a02                 push 2
// 00625850  56                   push esi
// 00625851  e8cad0feff           call 0x612920
// 00625856  6aff                 push -1
// 00625858  56                   push esi
// 00625859  e882c7feff           call 0x611fe0
// 0062585e  6afe                 push -2
// 00625860  56                   push esi
// 00625861  8bd8                 mov ebx, eax
// 00625863  e8b8c3feff           call 0x611c20
// 00625868  8bc3                 mov eax, ebx
// 0062586a  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0062586e  83c434               add esp, 0x34
// 00625871  eb0d                 jmp 0x625880
// 00625873  6afe                 push -2
// 00625875  6aff                 push -1
// 00625877  56                   push esi
// 00625878  e8a3c6feff           call 0x611f20
// 0062587d  83c40c               add esp, 0xc
// 00625880  85c0                 test eax, eax
// 00625882  7417                 je 0x62589b
// 00625884  57                   push edi
// 00625885  6a01                 push 1
// 00625887  56                   push esi
// 00625888  e8f3cefeff           call 0x612780
// 0062588d  53                   push ebx
// 0062588e  6a01                 push 1
// 00625890  56                   push esi
// 00625891  e8eacefeff           call 0x612780
// 00625896  83c418               add esp, 0x18
// 00625899  eb0b                 jmp 0x6258a6
// 0062589b  6afd                 push -3
// 0062589d  56                   push esi
// 0062589e  e87dc3feff           call 0x611c20
// 006258a3  83c408               add esp, 8
// 006258a6  83fd02               cmp ebp, 2
// 006258a9  0f84ee010000         je 0x625a9d
// 006258af  57                   push edi
// 006258b0  6a01                 push 1
// 006258b2  56                   push esi
// 006258b3  e878ccfeff           call 0x612530
// 006258b8  6aff                 push -1
// 006258ba  56                   push esi
// 006258bb  e810c5feff           call 0x611dd0
// 006258c0  8d6bff               lea ebp, [ebx - 1]
// 006258c3  55                   push ebp
// 006258c4  6a01                 push 1
// 006258c6  56                   push esi
// 006258c7  896c2430             mov dword ptr [esp + 0x30], ebp
// 006258cb  e860ccfeff           call 0x612530
// 006258d0  57                   push edi
// 006258d1  6a01                 push 1
// 006258d3  56                   push esi
// 006258d4  e8a7cefeff           call 0x612780
// 006258d9  55                   push ebp
// 006258da  6a01                 push 1
// 006258dc  56                   push esi
// 006258dd  e89ecefeff           call 0x612780
// 006258e2  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 006258e6  83c438               add esp, 0x38
// 006258e9  8da42400000000       lea esp, [esp]
// 006258f0  43                   inc ebx
// 006258f1  53                   push ebx
// 006258f2  6a01                 push 1
// 006258f4  56                   push esi
// 006258f5  e836ccfeff           call 0x612530
// 006258fa  6a02                 push 2
// 006258fc  56                   push esi
// 006258fd  e8fec4feff           call 0x611e00
// 00625902  83c414               add esp, 0x14
// 00625905  85c0                 test eax, eax
// 00625907  743b                 je 0x625944
// 00625909  6a02                 push 2
// 0062590b  56                   push esi
// 0062590c  e8bfc4feff           call 0x611dd0
// 00625911  6afe                 push -2
// 00625913  56                   push esi
// 00625914  e8b7c4feff           call 0x611dd0
// 00625919  6afc                 push -4
// 0062591b  56                   push esi
// 0062591c  e8afc4feff           call 0x611dd0
// 00625921  6a01                 push 1
// 00625923  6a02                 push 2
// 00625925  56                   push esi
// 00625926  e8f5cffeff           call 0x612920
// 0062592b  6aff                 push -1
// 0062592d  56                   push esi
// 0062592e  e8adc6feff           call 0x611fe0
// 00625933  6afe                 push -2
// 00625935  56                   push esi
// 00625936  8bf8                 mov edi, eax
// 00625938  e8e3c2feff           call 0x611c20
// 0062593d  83c434               add esp, 0x34
// 00625940  8bc7                 mov eax, edi
// 00625942  eb0d                 jmp 0x625951
// 00625944  6afe                 push -2
// 00625946  6aff                 push -1
// 00625948  56                   push esi
// 00625949  e8d2c5feff           call 0x611f20
// 0062594e  83c40c               add esp, 0xc
// 00625951  85c0                 test eax, eax
// 00625953  742b                 je 0x625980
// 00625955  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00625959  7e0e                 jle 0x625969
// 0062595b  68f04d8400           push 0x844df0
// 00625960  56                   push esi
// 00625961  e8fab2feff           call 0x610c60
// 00625966  83c408               add esp, 8
// 00625969  6afe                 push -2
// 0062596b  56                   push esi
// 0062596c  e8afc2feff           call 0x611c20
// 00625971  83c408               add esp, 8
// 00625974  e977ffffff           jmp 0x6258f0
// 00625979  8da42400000000       lea esp, [esp]
// 00625980  4d                   dec ebp
// 00625981  55                   push ebp
// 00625982  6a01                 push 1
// 00625984  56                   push esi
// 00625985  e8a6cbfeff           call 0x612530
// 0062598a  6a02                 push 2
// 0062598c  56                   push esi
// 0062598d  e86ec4feff           call 0x611e00
// 00625992  83c414               add esp, 0x14
// 00625995  85c0                 test eax, eax
// 00625997  743b                 je 0x6259d4
// 00625999  6a02                 push 2
// 0062599b  56                   push esi
// 0062599c  e82fc4feff           call 0x611dd0
// 006259a1  6afc                 push -4
// 006259a3  56                   push esi
// 006259a4  e827c4feff           call 0x611dd0
// 006259a9  6afd                 push -3
// 006259ab  56                   push esi
// 006259ac  e81fc4feff           call 0x611dd0
// 006259b1  6a01                 push 1
// 006259b3  6a02                 push 2
// 006259b5  56                   push esi
// 006259b6  e865cffeff           call 0x612920
// 006259bb  6aff                 push -1
// 006259bd  56                   push esi
// 006259be  e81dc6feff           call 0x611fe0
// 006259c3  6afe                 push -2
// 006259c5  56                   push esi
// 006259c6  8bf8                 mov edi, eax
// 006259c8  e853c2feff           call 0x611c20
// 006259cd  83c434               add esp, 0x34
// 006259d0  8bc7                 mov eax, edi
// 006259d2  eb0d                 jmp 0x6259e1
// 006259d4  6aff                 push -1
// 006259d6  6afd                 push -3
// 006259d8  56                   push esi
// 006259d9  e842c5feff           call 0x611f20
// 006259de  83c40c               add esp, 0xc
// 006259e1  85c0                 test eax, eax
// 006259e3  7424                 je 0x625a09
// 006259e5  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 006259e9  7d0e                 jge 0x6259f9
// 006259eb  68f04d8400           push 0x844df0
// 006259f0  56                   push esi
// 006259f1  e86ab2feff           call 0x610c60
// 006259f6  83c408               add esp, 8
// 006259f9  6afe                 push -2
// 006259fb  56                   push esi
// 006259fc  e81fc2feff           call 0x611c20
// 00625a01  83c408               add esp, 8
// 00625a04  e977ffffff           jmp 0x625980
// 00625a09  3beb                 cmp ebp, ebx
// 00625a0b  7c1a                 jl 0x625a27
// 00625a0d  53                   push ebx
// 00625a0e  6a01                 push 1
// 00625a10  56                   push esi
// 00625a11  e86acdfeff           call 0x612780
// 00625a16  55                   push ebp
// 00625a17  6a01                 push 1
// 00625a19  56                   push esi
// 00625a1a  e861cdfeff           call 0x612780
// 00625a1f  83c418               add esp, 0x18
// 00625a22  e9c9feffff           jmp 0x6258f0
// 00625a27  6afc                 push -4
// 00625a29  56                   push esi
// 00625a2a  e8f1c1feff           call 0x611c20
// 00625a2f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00625a33  57                   push edi
// 00625a34  6a01                 push 1
// 00625a36  56                   push esi
// 00625a37  e8f4cafeff           call 0x612530
// 00625a3c  53                   push ebx
// 00625a3d  6a01                 push 1
// 00625a3f  56                   push esi
// 00625a40  e8ebcafeff           call 0x612530
// 00625a45  57                   push edi
// 00625a46  6a01                 push 1
// 00625a48  56                   push esi
// 00625a49  e832cdfeff           call 0x612780
// 00625a4e  53                   push ebx
// 00625a4f  6a01                 push 1
// 00625a51  56                   push esi
// 00625a52  e829cdfeff           call 0x612780
// 00625a57  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00625a5b  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00625a5f  8bd5                 mov edx, ebp
// 00625a61  8bc3                 mov eax, ebx
// 00625a63  2bd3                 sub edx, ebx
// 00625a65  2bc7                 sub eax, edi
// 00625a67  83c438               add esp, 0x38
// 00625a6a  3bc2                 cmp eax, edx
// 00625a6c  7d0e                 jge 0x625a7c
// 00625a6e  4b                   dec ebx
// 00625a6f  8d4b02               lea ecx, [ebx + 2]
// 00625a72  8bc7                 mov eax, edi
// 00625a74  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00625a78  8bf9                 mov edi, ecx
// 00625a7a  eb0e                 jmp 0x625a8a
// 00625a7c  8d4301               lea eax, [ebx + 1]
// 00625a7f  8d50fe               lea edx, [eax - 2]
// 00625a82  8bdd                 mov ebx, ebp
// 00625a84  89542420             mov dword ptr [esp + 0x20], edx
// 00625a88  8bea                 mov ebp, edx
// 00625a8a  53                   push ebx
// 00625a8b  50                   push eax
// 00625a8c  56                   push esi
// 00625a8d  e81efcffff           call 0x6256b0
// 00625a92  83c40c               add esp, 0xc
// 00625a95  3bfd                 cmp edi, ebp
// 00625a97  0f8c33fcffff         jl 0x6256d0
// 00625a9d  5f                   pop edi
// 00625a9e  5e                   pop esi
// 00625a9f  5d                   pop ebp
// 00625aa0  5b                   pop ebx
// 00625aa1  59                   pop ecx
// 00625aa2  c3                   ret 
// library lua-5.1.4/ltablib.c (function _auxsort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
