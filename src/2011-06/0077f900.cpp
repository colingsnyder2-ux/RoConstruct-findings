// roc 2011-06 0077f900  unit: lua_exception  size: 1011 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077f900
//
// 0077f900  51                   push ecx
// 0077f901  53                   push ebx
// 0077f902  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0077f906  55                   push ebp
// 0077f907  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0077f90b  3beb                 cmp ebp, ebx
// 0077f90d  0f8ddc030000         jge 0x77fcef
// 0077f913  56                   push esi
// 0077f914  8b742414             mov esi, dword ptr [esp + 0x14]
// 0077f918  57                   push edi
// 0077f919  eb0d                 jmp 0x77f928
// 0077f91b  eb03                 jmp 0x77f920
// 0077f91d  8d4900               lea ecx, [ecx]
// 0077f920  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0077f924  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0077f928  55                   push ebp
// 0077f929  6a01                 push 1
// 0077f92b  56                   push esi
// 0077f92c  e81f33feff           call 0x762c50
// 0077f931  53                   push ebx
// 0077f932  6a01                 push 1
// 0077f934  56                   push esi
// 0077f935  e81633feff           call 0x762c50
// 0077f93a  6a02                 push 2
// 0077f93c  56                   push esi
// 0077f93d  e80e2cfeff           call 0x762550
// 0077f942  83c420               add esp, 0x20
// 0077f945  85c0                 test eax, eax
// 0077f947  743b                 je 0x77f984
// 0077f949  6a02                 push 2
// 0077f94b  56                   push esi
// 0077f94c  e8cf2bfeff           call 0x762520
// 0077f951  6afe                 push -2
// 0077f953  56                   push esi
// 0077f954  e8c72bfeff           call 0x762520
// 0077f959  6afc                 push -4
// 0077f95b  56                   push esi
// 0077f95c  e8bf2bfeff           call 0x762520
// 0077f961  6a01                 push 1
// 0077f963  6a02                 push 2
// 0077f965  56                   push esi
// 0077f966  e81537feff           call 0x763080
// 0077f96b  6aff                 push -1
// 0077f96d  56                   push esi
// 0077f96e  e8bd2dfeff           call 0x762730
// 0077f973  6afe                 push -2
// 0077f975  56                   push esi
// 0077f976  8bf8                 mov edi, eax
// 0077f978  e8f329feff           call 0x762370
// 0077f97d  83c434               add esp, 0x34
// 0077f980  8bc7                 mov eax, edi
// 0077f982  eb0d                 jmp 0x77f991
// 0077f984  6afe                 push -2
// 0077f986  6aff                 push -1
// 0077f988  56                   push esi
// 0077f989  e8e22cfeff           call 0x762670
// 0077f98e  83c40c               add esp, 0xc
// 0077f991  85c0                 test eax, eax
// 0077f993  7417                 je 0x77f9ac
// 0077f995  55                   push ebp
// 0077f996  6a01                 push 1
// 0077f998  56                   push esi
// 0077f999  e83235feff           call 0x762ed0
// 0077f99e  53                   push ebx
// 0077f99f  6a01                 push 1
// 0077f9a1  56                   push esi
// 0077f9a2  e82935feff           call 0x762ed0
// 0077f9a7  83c418               add esp, 0x18
// 0077f9aa  eb0b                 jmp 0x77f9b7
// 0077f9ac  6afd                 push -3
// 0077f9ae  56                   push esi
// 0077f9af  e8bc29feff           call 0x762370
// 0077f9b4  83c408               add esp, 8
// 0077f9b7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077f9bb  8beb                 mov ebp, ebx
// 0077f9bd  2be8                 sub ebp, eax
// 0077f9bf  83fd01               cmp ebp, 1
// 0077f9c2  0f8425030000         je 0x77fced
// 0077f9c8  03c3                 add eax, ebx
// 0077f9ca  99                   cdq 
// 0077f9cb  2bc2                 sub eax, edx
// 0077f9cd  8bf8                 mov edi, eax
// 0077f9cf  d1ff                 sar edi, 1
// 0077f9d1  57                   push edi
// 0077f9d2  6a01                 push 1
// 0077f9d4  56                   push esi
// 0077f9d5  e87632feff           call 0x762c50
// 0077f9da  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077f9de  50                   push eax
// 0077f9df  6a01                 push 1
// 0077f9e1  56                   push esi
// 0077f9e2  e86932feff           call 0x762c50
// 0077f9e7  6a02                 push 2
// 0077f9e9  56                   push esi
// 0077f9ea  e8612bfeff           call 0x762550
// 0077f9ef  83c420               add esp, 0x20
// 0077f9f2  85c0                 test eax, eax
// 0077f9f4  743f                 je 0x77fa35
// 0077f9f6  6a02                 push 2
// 0077f9f8  56                   push esi
// 0077f9f9  e8222bfeff           call 0x762520
// 0077f9fe  6afd                 push -3
// 0077fa00  56                   push esi
// 0077fa01  e81a2bfeff           call 0x762520
// 0077fa06  6afd                 push -3
// 0077fa08  56                   push esi
// 0077fa09  e8122bfeff           call 0x762520
// 0077fa0e  6a01                 push 1
// 0077fa10  6a02                 push 2
// 0077fa12  56                   push esi
// 0077fa13  e86836feff           call 0x763080
// 0077fa18  6aff                 push -1
// 0077fa1a  56                   push esi
// 0077fa1b  e8102dfeff           call 0x762730
// 0077fa20  6afe                 push -2
// 0077fa22  56                   push esi
// 0077fa23  8bd8                 mov ebx, eax
// 0077fa25  e84629feff           call 0x762370
// 0077fa2a  8bc3                 mov eax, ebx
// 0077fa2c  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0077fa30  83c434               add esp, 0x34
// 0077fa33  eb0d                 jmp 0x77fa42
// 0077fa35  6aff                 push -1
// 0077fa37  6afe                 push -2
// 0077fa39  56                   push esi
// 0077fa3a  e8312cfeff           call 0x762670
// 0077fa3f  83c40c               add esp, 0xc
// 0077fa42  85c0                 test eax, eax
// 0077fa44  741e                 je 0x77fa64
// 0077fa46  57                   push edi
// 0077fa47  6a01                 push 1
// 0077fa49  56                   push esi
// 0077fa4a  e88134feff           call 0x762ed0
// 0077fa4f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0077fa53  51                   push ecx
// 0077fa54  6a01                 push 1
// 0077fa56  56                   push esi
// 0077fa57  e87434feff           call 0x762ed0
// 0077fa5c  83c418               add esp, 0x18
// 0077fa5f  e992000000           jmp 0x77faf6
// 0077fa64  6afe                 push -2
// 0077fa66  56                   push esi
// 0077fa67  e80429feff           call 0x762370
// 0077fa6c  53                   push ebx
// 0077fa6d  6a01                 push 1
// 0077fa6f  56                   push esi
// 0077fa70  e8db31feff           call 0x762c50
// 0077fa75  6a02                 push 2
// 0077fa77  56                   push esi
// 0077fa78  e8d32afeff           call 0x762550
// 0077fa7d  83c41c               add esp, 0x1c
// 0077fa80  85c0                 test eax, eax
// 0077fa82  743f                 je 0x77fac3
// 0077fa84  6a02                 push 2
// 0077fa86  56                   push esi
// 0077fa87  e8942afeff           call 0x762520
// 0077fa8c  6afe                 push -2
// 0077fa8e  56                   push esi
// 0077fa8f  e88c2afeff           call 0x762520
// 0077fa94  6afc                 push -4
// 0077fa96  56                   push esi
// 0077fa97  e8842afeff           call 0x762520
// 0077fa9c  6a01                 push 1
// 0077fa9e  6a02                 push 2
// 0077faa0  56                   push esi
// 0077faa1  e8da35feff           call 0x763080
// 0077faa6  6aff                 push -1
// 0077faa8  56                   push esi
// 0077faa9  e8822cfeff           call 0x762730
// 0077faae  6afe                 push -2
// 0077fab0  56                   push esi
// 0077fab1  8bd8                 mov ebx, eax
// 0077fab3  e8b828feff           call 0x762370
// 0077fab8  8bc3                 mov eax, ebx
// 0077faba  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0077fabe  83c434               add esp, 0x34
// 0077fac1  eb0d                 jmp 0x77fad0
// 0077fac3  6afe                 push -2
// 0077fac5  6aff                 push -1
// 0077fac7  56                   push esi
// 0077fac8  e8a32bfeff           call 0x762670
// 0077facd  83c40c               add esp, 0xc
// 0077fad0  85c0                 test eax, eax
// 0077fad2  7417                 je 0x77faeb
// 0077fad4  57                   push edi
// 0077fad5  6a01                 push 1
// 0077fad7  56                   push esi
// 0077fad8  e8f333feff           call 0x762ed0
// 0077fadd  53                   push ebx
// 0077fade  6a01                 push 1
// 0077fae0  56                   push esi
// 0077fae1  e8ea33feff           call 0x762ed0
// 0077fae6  83c418               add esp, 0x18
// 0077fae9  eb0b                 jmp 0x77faf6
// 0077faeb  6afd                 push -3
// 0077faed  56                   push esi
// 0077faee  e87d28feff           call 0x762370
// 0077faf3  83c408               add esp, 8
// 0077faf6  83fd02               cmp ebp, 2
// 0077faf9  0f84ee010000         je 0x77fced
// 0077faff  57                   push edi
// 0077fb00  6a01                 push 1
// 0077fb02  56                   push esi
// 0077fb03  e84831feff           call 0x762c50
// 0077fb08  6aff                 push -1
// 0077fb0a  56                   push esi
// 0077fb0b  e8102afeff           call 0x762520
// 0077fb10  8d6bff               lea ebp, [ebx - 1]
// 0077fb13  55                   push ebp
// 0077fb14  6a01                 push 1
// 0077fb16  56                   push esi
// 0077fb17  896c2430             mov dword ptr [esp + 0x30], ebp
// 0077fb1b  e83031feff           call 0x762c50
// 0077fb20  57                   push edi
// 0077fb21  6a01                 push 1
// 0077fb23  56                   push esi
// 0077fb24  e8a733feff           call 0x762ed0
// 0077fb29  55                   push ebp
// 0077fb2a  6a01                 push 1
// 0077fb2c  56                   push esi
// 0077fb2d  e89e33feff           call 0x762ed0
// 0077fb32  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0077fb36  83c438               add esp, 0x38
// 0077fb39  8da42400000000       lea esp, [esp]
// 0077fb40  43                   inc ebx
// 0077fb41  53                   push ebx
// 0077fb42  6a01                 push 1
// 0077fb44  56                   push esi
// 0077fb45  e80631feff           call 0x762c50
// 0077fb4a  6a02                 push 2
// 0077fb4c  56                   push esi
// 0077fb4d  e8fe29feff           call 0x762550
// 0077fb52  83c414               add esp, 0x14
// 0077fb55  85c0                 test eax, eax
// 0077fb57  743b                 je 0x77fb94
// 0077fb59  6a02                 push 2
// 0077fb5b  56                   push esi
// 0077fb5c  e8bf29feff           call 0x762520
// 0077fb61  6afe                 push -2
// 0077fb63  56                   push esi
// 0077fb64  e8b729feff           call 0x762520
// 0077fb69  6afc                 push -4
// 0077fb6b  56                   push esi
// 0077fb6c  e8af29feff           call 0x762520
// 0077fb71  6a01                 push 1
// 0077fb73  6a02                 push 2
// 0077fb75  56                   push esi
// 0077fb76  e80535feff           call 0x763080
// 0077fb7b  6aff                 push -1
// 0077fb7d  56                   push esi
// 0077fb7e  e8ad2bfeff           call 0x762730
// 0077fb83  6afe                 push -2
// 0077fb85  56                   push esi
// 0077fb86  8bf8                 mov edi, eax
// 0077fb88  e8e327feff           call 0x762370
// 0077fb8d  83c434               add esp, 0x34
// 0077fb90  8bc7                 mov eax, edi
// 0077fb92  eb0d                 jmp 0x77fba1
// 0077fb94  6afe                 push -2
// 0077fb96  6aff                 push -1
// 0077fb98  56                   push esi
// 0077fb99  e8d22afeff           call 0x762670
// 0077fb9e  83c40c               add esp, 0xc
// 0077fba1  85c0                 test eax, eax
// 0077fba3  742b                 je 0x77fbd0
// 0077fba5  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 0077fba9  7e0e                 jle 0x77fbb9
// 0077fbab  68dc79ab00           push 0xab79dc
// 0077fbb0  56                   push esi
// 0077fbb1  e85a3bfeff           call 0x763710
// 0077fbb6  83c408               add esp, 8
// 0077fbb9  6afe                 push -2
// 0077fbbb  56                   push esi
// 0077fbbc  e8af27feff           call 0x762370
// 0077fbc1  83c408               add esp, 8
// 0077fbc4  e977ffffff           jmp 0x77fb40
// 0077fbc9  8da42400000000       lea esp, [esp]
// 0077fbd0  4d                   dec ebp
// 0077fbd1  55                   push ebp
// 0077fbd2  6a01                 push 1
// 0077fbd4  56                   push esi
// 0077fbd5  e87630feff           call 0x762c50
// 0077fbda  6a02                 push 2
// 0077fbdc  56                   push esi
// 0077fbdd  e86e29feff           call 0x762550
// 0077fbe2  83c414               add esp, 0x14
// 0077fbe5  85c0                 test eax, eax
// 0077fbe7  743b                 je 0x77fc24
// 0077fbe9  6a02                 push 2
// 0077fbeb  56                   push esi
// 0077fbec  e82f29feff           call 0x762520
// 0077fbf1  6afc                 push -4
// 0077fbf3  56                   push esi
// 0077fbf4  e82729feff           call 0x762520
// 0077fbf9  6afd                 push -3
// 0077fbfb  56                   push esi
// 0077fbfc  e81f29feff           call 0x762520
// 0077fc01  6a01                 push 1
// 0077fc03  6a02                 push 2
// 0077fc05  56                   push esi
// 0077fc06  e87534feff           call 0x763080
// 0077fc0b  6aff                 push -1
// 0077fc0d  56                   push esi
// 0077fc0e  e81d2bfeff           call 0x762730
// 0077fc13  6afe                 push -2
// 0077fc15  56                   push esi
// 0077fc16  8bf8                 mov edi, eax
// 0077fc18  e85327feff           call 0x762370
// 0077fc1d  83c434               add esp, 0x34
// 0077fc20  8bc7                 mov eax, edi
// 0077fc22  eb0d                 jmp 0x77fc31
// 0077fc24  6aff                 push -1
// 0077fc26  6afd                 push -3
// 0077fc28  56                   push esi
// 0077fc29  e8422afeff           call 0x762670
// 0077fc2e  83c40c               add esp, 0xc
// 0077fc31  85c0                 test eax, eax
// 0077fc33  7424                 je 0x77fc59
// 0077fc35  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0077fc39  7d0e                 jge 0x77fc49
// 0077fc3b  68dc79ab00           push 0xab79dc
// 0077fc40  56                   push esi
// 0077fc41  e8ca3afeff           call 0x763710
// 0077fc46  83c408               add esp, 8
// 0077fc49  6afe                 push -2
// 0077fc4b  56                   push esi
// 0077fc4c  e81f27feff           call 0x762370
// 0077fc51  83c408               add esp, 8
// 0077fc54  e977ffffff           jmp 0x77fbd0
// 0077fc59  3beb                 cmp ebp, ebx
// 0077fc5b  7c1a                 jl 0x77fc77
// 0077fc5d  53                   push ebx
// 0077fc5e  6a01                 push 1
// 0077fc60  56                   push esi
// 0077fc61  e86a32feff           call 0x762ed0
// 0077fc66  55                   push ebp
// 0077fc67  6a01                 push 1
// 0077fc69  56                   push esi
// 0077fc6a  e86132feff           call 0x762ed0
// 0077fc6f  83c418               add esp, 0x18
// 0077fc72  e9c9feffff           jmp 0x77fb40
// 0077fc77  6afc                 push -4
// 0077fc79  56                   push esi
// 0077fc7a  e8f126feff           call 0x762370
// 0077fc7f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077fc83  57                   push edi
// 0077fc84  6a01                 push 1
// 0077fc86  56                   push esi
// 0077fc87  e8c42ffeff           call 0x762c50
// 0077fc8c  53                   push ebx
// 0077fc8d  6a01                 push 1
// 0077fc8f  56                   push esi
// 0077fc90  e8bb2ffeff           call 0x762c50
// 0077fc95  57                   push edi
// 0077fc96  6a01                 push 1
// 0077fc98  56                   push esi
// 0077fc99  e83232feff           call 0x762ed0
// 0077fc9e  53                   push ebx
// 0077fc9f  6a01                 push 1
// 0077fca1  56                   push esi
// 0077fca2  e82932feff           call 0x762ed0
// 0077fca7  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 0077fcab  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0077fcaf  8bd5                 mov edx, ebp
// 0077fcb1  8bc3                 mov eax, ebx
// 0077fcb3  2bd3                 sub edx, ebx
// 0077fcb5  2bc7                 sub eax, edi
// 0077fcb7  83c438               add esp, 0x38
// 0077fcba  3bc2                 cmp eax, edx
// 0077fcbc  7d0e                 jge 0x77fccc
// 0077fcbe  4b                   dec ebx
// 0077fcbf  8d4b02               lea ecx, [ebx + 2]
// 0077fcc2  8bc7                 mov eax, edi
// 0077fcc4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0077fcc8  8bf9                 mov edi, ecx
// 0077fcca  eb0e                 jmp 0x77fcda
// 0077fccc  8d4301               lea eax, [ebx + 1]
// 0077fccf  8d50fe               lea edx, [eax - 2]
// 0077fcd2  8bdd                 mov ebx, ebp
// 0077fcd4  89542420             mov dword ptr [esp + 0x20], edx
// 0077fcd8  8bea                 mov ebp, edx
// 0077fcda  53                   push ebx
// 0077fcdb  50                   push eax
// 0077fcdc  56                   push esi
// 0077fcdd  e81efcffff           call 0x77f900
// 0077fce2  83c40c               add esp, 0xc
// 0077fce5  3bfd                 cmp edi, ebp
// 0077fce7  0f8c33fcffff         jl 0x77f920
// 0077fced  5f                   pop edi
// 0077fcee  5e                   pop esi
// 0077fcef  5d                   pop ebp
// 0077fcf0  5b                   pop ebx
// 0077fcf1  59                   pop ecx
// 0077fcf2  c3                   ret 
// library lua-5.1.4/ltablib.c (function _auxsort)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
