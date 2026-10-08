// roc 2010-06 009115b0  unit: G3D::GFont  size: 803 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009115b0
//
// 009115b0  6aff                 push -1
// 009115b2  686f159c00           push 0x9c156f
// 009115b7  64a100000000         mov eax, dword ptr fs:[0]
// 009115bd  50                   push eax
// 009115be  64892500000000       mov dword ptr fs:[0], esp
// 009115c5  81ec94000000         sub esp, 0x94
// 009115cb  53                   push ebx
// 009115cc  55                   push ebp
// 009115cd  56                   push esi
// 009115ce  57                   push edi
// 009115cf  68fe08a000           push 0xa008fe
// 009115d4  8d4c241c             lea ecx, [esp + 0x1c]
// 009115d8  ff1510a49e00         call dword ptr [0x9ea410]
// 009115de  33ed                 xor ebp, ebp
// 009115e0  6800bda800           push 0xa8bd00
// 009115e5  8d4c2438             lea ecx, [esp + 0x38]
// 009115e9  89ac24b0000000       mov dword ptr [esp + 0xb0], ebp
// 009115f0  ff1510a49e00         call dword ptr [0x9ea410]
// 009115f6  8b3d88a49e00         mov edi, dword ptr [0x9ea488]
// 009115fc  6850baa800           push 0xa8ba50
// 00911601  50                   push eax
// 00911602  8d442458             lea eax, [esp + 0x58]
// 00911606  50                   push eax
// 00911607  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0091160f  ffd7                 call edi
// 00911611  55                   push ebp
// 00911612  50                   push eax
// 00911613  8d4c242c             lea ecx, [esp + 0x2c]
// 00911617  51                   push ecx
// 00911618  8d542428             lea edx, [esp + 0x28]
// 0091161c  b302                 mov bl, 2
// 0091161e  52                   push edx
// 0091161f  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 00911626  e8d5bec3ff           call 0x54d500
// 0091162b  83c41c               add esp, 0x1c
// 0091162e  8b30                 mov esi, dword ptr [eax]
// 00911630  a1f4cbc200           mov eax, dword ptr [0xc2cbf4]
// 00911635  c68424ac00000003     mov byte ptr [esp + 0xac], 3
// 0091163d  3bf0                 cmp esi, eax
// 0091163f  7449                 je 0x91168a
// 00911641  3bc5                 cmp eax, ebp
// 00911643  7431                 je 0x911676
// 00911645  83c004               add eax, 4
// 00911648  50                   push eax
// 00911649  ff157ca39e00         call dword ptr [0x9ea37c]
// 0091164f  85c0                 test eax, eax
// 00911651  751d                 jne 0x911670
// 00911653  8b0df4cbc200         mov ecx, dword ptr [0xc2cbf4]
// 00911659  e8c224b7ff           call 0x483b20
// 0091165e  8b0df4cbc200         mov ecx, dword ptr [0xc2cbf4]
// 00911664  3bcd                 cmp ecx, ebp
// 00911666  7408                 je 0x911670
// 00911668  8b01                 mov eax, dword ptr [ecx]
// 0091166a  8b10                 mov edx, dword ptr [eax]
// 0091166c  6a01                 push 1
// 0091166e  ffd2                 call edx
// 00911670  892df4cbc200         mov dword ptr [0xc2cbf4], ebp
// 00911676  3bf5                 cmp esi, ebp
// 00911678  7410                 je 0x91168a
// 0091167a  8935f4cbc200         mov dword ptr [0xc2cbf4], esi
// 00911680  83c604               add esi, 4
// 00911683  56                   push esi
// 00911684  ff1580a39e00         call dword ptr [0x9ea380]
// 0091168a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0091168e  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 00911695  3bc5                 cmp eax, ebp
// 00911697  742b                 je 0x9116c4
// 00911699  83c004               add eax, 4
// 0091169c  50                   push eax
// 0091169d  ff157ca39e00         call dword ptr [0x9ea37c]
// 009116a3  85c0                 test eax, eax
// 009116a5  7519                 jne 0x9116c0
// 009116a7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009116ab  e87024b7ff           call 0x483b20
// 009116b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009116b4  3bcd                 cmp ecx, ebp
// 009116b6  7408                 je 0x9116c0
// 009116b8  8b01                 mov eax, dword ptr [ecx]
// 009116ba  8b10                 mov edx, dword ptr [eax]
// 009116bc  6a01                 push 1
// 009116be  ffd2                 call edx
// 009116c0  896c2410             mov dword ptr [esp + 0x10], ebp
// 009116c4  8d4c2450             lea ecx, [esp + 0x50]
// 009116c8  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 009116d0  ff1500a49e00         call dword ptr [0x9ea400]
// 009116d6  8d4c2434             lea ecx, [esp + 0x34]
// 009116da  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 009116e2  ff1500a49e00         call dword ptr [0x9ea400]
// 009116e8  83ceff               or esi, 0xffffffff
// 009116eb  8d4c2418             lea ecx, [esp + 0x18]
// 009116ef  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 009116f6  ff1500a49e00         call dword ptr [0x9ea400]
// 009116fc  68fe08a000           push 0xa008fe
// 00911701  8d4c241c             lea ecx, [esp + 0x1c]
// 00911705  ff1510a49e00         call dword ptr [0x9ea410]
// 0091170b  68f8b8a800           push 0xa8b8f8
// 00911710  8d4c2454             lea ecx, [esp + 0x54]
// 00911714  c78424b000000004000000 mov dword ptr [esp + 0xb0], 4
// 0091171f  ff1510a49e00         call dword ptr [0x9ea410]
// 00911725  6880b6a800           push 0xa8b680
// 0091172a  50                   push eax
// 0091172b  8d44243c             lea eax, [esp + 0x3c]
// 0091172f  50                   push eax
// 00911730  c68424b800000005     mov byte ptr [esp + 0xb8], 5
// 00911738  ffd7                 call edi
// 0091173a  55                   push ebp
// 0091173b  50                   push eax
// 0091173c  8d4c242c             lea ecx, [esp + 0x2c]
// 00911740  51                   push ecx
// 00911741  8d542428             lea edx, [esp + 0x28]
// 00911745  b306                 mov bl, 6
// 00911747  52                   push edx
// 00911748  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 0091174f  e8acbdc3ff           call 0x54d500
// 00911754  83c41c               add esp, 0x1c
// 00911757  8b00                 mov eax, dword ptr [eax]
// 00911759  50                   push eax
// 0091175a  b9f8cbc200           mov ecx, 0xc2cbf8
// 0091175f  c68424b000000007     mov byte ptr [esp + 0xb0], 7
// 00911767  e8b455b7ff           call 0x486d20
// 0091176c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00911770  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 00911777  3bc5                 cmp eax, ebp
// 00911779  742b                 je 0x9117a6
// 0091177b  83c004               add eax, 4
// 0091177e  50                   push eax
// 0091177f  ff157ca39e00         call dword ptr [0x9ea37c]
// 00911785  85c0                 test eax, eax
// 00911787  7519                 jne 0x9117a2
// 00911789  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0091178d  e88e23b7ff           call 0x483b20
// 00911792  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00911796  3bcd                 cmp ecx, ebp
// 00911798  7408                 je 0x9117a2
// 0091179a  8b11                 mov edx, dword ptr [ecx]
// 0091179c  8b02                 mov eax, dword ptr [edx]
// 0091179e  6a01                 push 1
// 009117a0  ffd0                 call eax
// 009117a2  896c2410             mov dword ptr [esp + 0x10], ebp
// 009117a6  8d4c2434             lea ecx, [esp + 0x34]
// 009117aa  c68424ac00000005     mov byte ptr [esp + 0xac], 5
// 009117b2  ff1500a49e00         call dword ptr [0x9ea400]
// 009117b8  8d4c2450             lea ecx, [esp + 0x50]
// 009117bc  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 009117c4  ff1500a49e00         call dword ptr [0x9ea400]
// 009117ca  8d4c2418             lea ecx, [esp + 0x18]
// 009117ce  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 009117d5  ff1500a49e00         call dword ptr [0x9ea400]
// 009117db  6840b4a800           push 0xa8b440
// 009117e0  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009117e7  ff1510a49e00         call dword ptr [0x9ea410]
// 009117ed  68fe08a000           push 0xa008fe
// 009117f2  8d4c2470             lea ecx, [esp + 0x70]
// 009117f6  c78424b000000008000000 mov dword ptr [esp + 0xb0], 8
// 00911801  ff1510a49e00         call dword ptr [0x9ea410]
// 00911807  55                   push ebp
// 00911808  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0091180f  51                   push ecx
// 00911810  8d542474             lea edx, [esp + 0x74]
// 00911814  52                   push edx
// 00911815  8d442420             lea eax, [esp + 0x20]
// 00911819  b309                 mov bl, 9
// 0091181b  50                   push eax
// 0091181c  889c24bc000000       mov byte ptr [esp + 0xbc], bl
// 00911823  e8d8bcc3ff           call 0x54d500
// 00911828  83c410               add esp, 0x10
// 0091182b  8b08                 mov ecx, dword ptr [eax]
// 0091182d  51                   push ecx
// 0091182e  b9fccbc200           mov ecx, 0xc2cbfc
// 00911833  c68424b00000000a     mov byte ptr [esp + 0xb0], 0xa
// 0091183b  e8e054b7ff           call 0x486d20
// 00911840  8b442414             mov eax, dword ptr [esp + 0x14]
// 00911844  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 0091184b  3bc5                 cmp eax, ebp
// 0091184d  742b                 je 0x91187a
// 0091184f  83c004               add eax, 4
// 00911852  50                   push eax
// 00911853  ff157ca39e00         call dword ptr [0x9ea37c]
// 00911859  85c0                 test eax, eax
// 0091185b  7519                 jne 0x911876
// 0091185d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00911861  e8ba22b7ff           call 0x483b20
// 00911866  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0091186a  3bcd                 cmp ecx, ebp
// 0091186c  7408                 je 0x911876
// 0091186e  8b11                 mov edx, dword ptr [ecx]
// 00911870  8b02                 mov eax, dword ptr [edx]
// 00911872  6a01                 push 1
// 00911874  ffd0                 call eax
// 00911876  896c2414             mov dword ptr [esp + 0x14], ebp
// 0091187a  8d4c246c             lea ecx, [esp + 0x6c]
// 0091187e  c68424ac00000008     mov byte ptr [esp + 0xac], 8
// 00911886  ff1500a49e00         call dword ptr [0x9ea400]
// 0091188c  8d8c2488000000       lea ecx, [esp + 0x88]
// 00911893  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 0091189a  ff1500a49e00         call dword ptr [0x9ea400]
// 009118a0  bef4cbc200           mov esi, 0xc2cbf4
// 009118a5  8b0e                 mov ecx, dword ptr [esi]
// 009118a7  8b11                 mov edx, dword ptr [ecx]
// 009118a9  8b4204               mov eax, dword ptr [edx + 4]
// 009118ac  55                   push ebp
// 009118ad  ffd0                 call eax
// 009118af  83c604               add esi, 4
// 009118b2  81fe00ccc200         cmp esi, 0xc2cc00
// 009118b8  7ceb                 jl 0x9118a5
// 009118ba  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 009118c1  5f                   pop edi
// 009118c2  5e                   pop esi
// 009118c3  5d                   pop ebp
// 009118c4  5b                   pop ebx
// 009118c5  64890d00000000       mov dword ptr fs:[0], ecx
// 009118cc  81c4a0000000         add esp, 0xa0
// 009118d2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?makeShadersPS20@ToneMap@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
