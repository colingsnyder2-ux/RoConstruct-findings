// from server: 100% by auto
// roc 2008-06 00756fc0  unit: CXTPDockingPaneAutoHideWnd  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756fc0
//
// 00756fc0  6aff                 push -1
// 00756fc2  68c8c77e00           push 0x7ec7c8
// 00756fc7  64a100000000         mov eax, dword ptr fs:[0]
// 00756fcd  50                   push eax
// 00756fce  83ec68               sub esp, 0x68
// 00756fd1  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00756fd6  33c4                 xor eax, esp
// 00756fd8  89442464             mov dword ptr [esp + 0x64], eax
// 00756fdc  56                   push esi
// 00756fdd  57                   push edi
// 00756fde  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00756fe3  33c4                 xor eax, esp
// 00756fe5  50                   push eax
// 00756fe6  8d442474             lea eax, [esp + 0x74]
// 00756fea  64a300000000         mov dword ptr fs:[0], eax
// 00756ff0  8bf9                 mov edi, ecx
// 00756ff2  57                   push edi
// 00756ff3  8d4c2420             lea ecx, [esp + 0x20]
// 00756ff7  e8489ff4ff           call 0x6a0f44
// 00756ffc  8b87f8000000         mov eax, dword ptr [edi + 0xf8]
// 00757002  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0075700a  85c0                 test eax, eax
// 0075700c  0f8466010000         je 0x757178
// 00757012  8d4854               lea ecx, [eax + 0x54]
// 00757015  e896640000           call 0x75d4b0
// 0075701a  57                   push edi
// 0075701b  8d4c2410             lea ecx, [esp + 0x10]
// 0075701f  8bf0                 mov esi, eax
// 00757021  e80a0bfaff           call 0x6f7b30
// 00757026  6a33                 push 0x33
// 00757028  8bce                 mov ecx, esi
// 0075702a  e8a1b50000           call 0x7625d0
// 0075702f  50                   push eax
// 00757030  8d442410             lea eax, [esp + 0x10]
// 00757034  50                   push eax
// 00757035  8d4c2424             lea ecx, [esp + 0x24]
// 00757039  e820a3f4ff           call 0x6a135e
// 0075703e  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 00757044  83ff03               cmp edi, 3
// 00757047  0f872b010000         ja 0x757178
// 0075704d  ff24bda8717500       jmp dword ptr [edi*4 + 0x7571a8]
// 00757054  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00757058  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0075705c  6a12                 push 0x12
// 0075705e  8bce                 mov ecx, esi
// 00757060  e86bb50000           call 0x7625d0
// 00757065  50                   push eax
// 00757066  6a12                 push 0x12
// 00757068  8bce                 mov ecx, esi
// 0075706a  e861b50000           call 0x7625d0
// 0075706f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00757073  8b542418             mov edx, dword ptr [esp + 0x18]
// 00757077  50                   push eax
// 00757078  57                   push edi
// 00757079  6a01                 push 1
// 0075707b  51                   push ecx
// 0075707c  4a                   dec edx
// 0075707d  52                   push edx
// 0075707e  8d4c2434             lea ecx, [esp + 0x34]
// 00757082  e8db570600           call 0x7bc862
// 00757087  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0075708b  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0075708f  6a10                 push 0x10
// 00757091  8bce                 mov ecx, esi
// 00757093  e838b50000           call 0x7625d0
// 00757098  50                   push eax
// 00757099  6a10                 push 0x10
// 0075709b  8bce                 mov ecx, esi
// 0075709d  e82eb50000           call 0x7625d0
// 007570a2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007570a6  50                   push eax
// 007570a7  8b442418             mov eax, dword ptr [esp + 0x18]
// 007570ab  57                   push edi
// 007570ac  6a01                 push 1
// 007570ae  50                   push eax
// 007570af  83c1fe               add ecx, -2
// 007570b2  51                   push ecx
// 007570b3  e9b7000000           jmp 0x75716f
// 007570b8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007570bc  2b7c240c             sub edi, dword ptr [esp + 0xc]
// 007570c0  6a12                 push 0x12
// 007570c2  8bce                 mov ecx, esi
// 007570c4  e807b50000           call 0x7625d0
// 007570c9  50                   push eax
// 007570ca  6a12                 push 0x12
// 007570cc  8bce                 mov ecx, esi
// 007570ce  e8fdb40000           call 0x7625d0
// 007570d3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007570d7  50                   push eax
// 007570d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 007570dc  6a01                 push 1
// 007570de  57                   push edi
// 007570df  4a                   dec edx
// 007570e0  52                   push edx
// 007570e1  50                   push eax
// 007570e2  8d4c2434             lea ecx, [esp + 0x34]
// 007570e6  e877570600           call 0x7bc862
// 007570eb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007570ef  2b7c240c             sub edi, dword ptr [esp + 0xc]
// 007570f3  6a10                 push 0x10
// 007570f5  8bce                 mov ecx, esi
// 007570f7  e8d4b40000           call 0x7625d0
// 007570fc  50                   push eax
// 007570fd  6a10                 push 0x10
// 007570ff  8bce                 mov ecx, esi
// 00757101  e8cab40000           call 0x7625d0
// 00757106  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0075710a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075710e  50                   push eax
// 0075710f  6a01                 push 1
// 00757111  57                   push edi
// 00757112  83c1fe               add ecx, -2
// 00757115  51                   push ecx
// 00757116  52                   push edx
// 00757117  eb56                 jmp 0x75716f
// 00757119  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0075711d  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 00757121  6a14                 push 0x14
// 00757123  8bce                 mov ecx, esi
// 00757125  e8a6b40000           call 0x7625d0
// 0075712a  50                   push eax
// 0075712b  6a14                 push 0x14
// 0075712d  8bce                 mov ecx, esi
// 0075712f  e89cb40000           call 0x7625d0
// 00757134  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00757138  50                   push eax
// 00757139  8b442418             mov eax, dword ptr [esp + 0x18]
// 0075713d  57                   push edi
// 0075713e  6a01                 push 1
// 00757140  50                   push eax
// 00757141  41                   inc ecx
// 00757142  51                   push ecx
// 00757143  eb2a                 jmp 0x75716f
// 00757145  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00757149  2b7c240c             sub edi, dword ptr [esp + 0xc]
// 0075714d  6a14                 push 0x14
// 0075714f  8bce                 mov ecx, esi
// 00757151  e87ab40000           call 0x7625d0
// 00757156  50                   push eax
// 00757157  6a14                 push 0x14
// 00757159  8bce                 mov ecx, esi
// 0075715b  e870b40000           call 0x7625d0
// 00757160  8b542414             mov edx, dword ptr [esp + 0x14]
// 00757164  50                   push eax
// 00757165  8b442414             mov eax, dword ptr [esp + 0x14]
// 00757169  6a01                 push 1
// 0075716b  57                   push edi
// 0075716c  42                   inc edx
// 0075716d  52                   push edx
// 0075716e  50                   push eax
// 0075716f  8d4c2434             lea ecx, [esp + 0x34]
// 00757173  e8ea560600           call 0x7bc862
// 00757178  8d4c241c             lea ecx, [esp + 0x1c]
// 0075717c  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 00757184  e8b59df4ff           call 0x6a0f3e
// 00757189  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0075718d  64890d00000000       mov dword ptr fs:[0], ecx
// 00757194  59                   pop ecx
// 00757195  5f                   pop edi
// 00757196  5e                   pop esi
// 00757197  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0075719b  33cc                 xor ecx, esp
// 0075719d  e830acf4ff           call 0x6a1dd2
// 007571a2  83c474               add esp, 0x74
// 007571a5  c3                   ret 
// 007571a6  8bff                 mov edi, edi
// 007571a8  54                   push esp
// 007571a9  7075                 jo 0x757220
// 007571ab  0019                 add byte ptr [ecx], bl
// 007571ad  7175                 jno 0x757224
// 007571af  00b870750045         add byte ptr [eax + 0x45007570], bh
// 007571b5  7175                 jno 0x75722c
// library xtp-11.2.2-lib-strlen/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnPaint@CXTPDockingPaneAutoHideWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
