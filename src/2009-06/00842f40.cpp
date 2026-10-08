// roc 2009-06 00842f40  unit: Ogre::RbxSceneNode  size: 803 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00842f40
//
// 00842f40  6aff                 push -1
// 00842f42  689f388800           push 0x88389f
// 00842f47  64a100000000         mov eax, dword ptr fs:[0]
// 00842f4d  50                   push eax
// 00842f4e  64892500000000       mov dword ptr fs:[0], esp
// 00842f55  81ec94000000         sub esp, 0x94
// 00842f5b  53                   push ebx
// 00842f5c  55                   push ebp
// 00842f5d  56                   push esi
// 00842f5e  57                   push edi
// 00842f5f  6816d28a00           push 0x8ad216
// 00842f64  8d4c241c             lea ecx, [esp + 0x1c]
// 00842f68  ff15b4e48900         call dword ptr [0x89e4b4]
// 00842f6e  33ed                 xor ebp, ebp
// 00842f70  6878469200           push 0x924678
// 00842f75  8d4c2438             lea ecx, [esp + 0x38]
// 00842f79  89ac24b0000000       mov dword ptr [esp + 0xb0], ebp
// 00842f80  ff15b4e48900         call dword ptr [0x89e4b4]
// 00842f86  8b3d48e48900         mov edi, dword ptr [0x89e448]
// 00842f8c  68c8439200           push 0x9243c8
// 00842f91  50                   push eax
// 00842f92  8d442458             lea eax, [esp + 0x58]
// 00842f96  50                   push eax
// 00842f97  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 00842f9f  ffd7                 call edi
// 00842fa1  55                   push ebp
// 00842fa2  50                   push eax
// 00842fa3  8d4c242c             lea ecx, [esp + 0x2c]
// 00842fa7  51                   push ecx
// 00842fa8  8d542428             lea edx, [esp + 0x28]
// 00842fac  b302                 mov bl, 2
// 00842fae  52                   push edx
// 00842faf  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 00842fb6  e8057ed2ff           call 0x56adc0
// 00842fbb  83c41c               add esp, 0x1c
// 00842fbe  8b30                 mov esi, dword ptr [eax]
// 00842fc0  a14c89a500           mov eax, dword ptr [0xa5894c]
// 00842fc5  c68424ac00000003     mov byte ptr [esp + 0xac], 3
// 00842fcd  3bf0                 cmp esi, eax
// 00842fcf  7449                 je 0x84301a
// 00842fd1  3bc5                 cmp eax, ebp
// 00842fd3  7431                 je 0x843006
// 00842fd5  83c004               add eax, 4
// 00842fd8  50                   push eax
// 00842fd9  ff15a4e18900         call dword ptr [0x89e1a4]
// 00842fdf  85c0                 test eax, eax
// 00842fe1  751d                 jne 0x843000
// 00842fe3  8b0d4c89a500         mov ecx, dword ptr [0xa5894c]
// 00842fe9  e8921dc0ff           call 0x444d80
// 00842fee  8b0d4c89a500         mov ecx, dword ptr [0xa5894c]
// 00842ff4  3bcd                 cmp ecx, ebp
// 00842ff6  7408                 je 0x843000
// 00842ff8  8b01                 mov eax, dword ptr [ecx]
// 00842ffa  8b10                 mov edx, dword ptr [eax]
// 00842ffc  6a01                 push 1
// 00842ffe  ffd2                 call edx
// 00843000  892d4c89a500         mov dword ptr [0xa5894c], ebp
// 00843006  3bf5                 cmp esi, ebp
// 00843008  7410                 je 0x84301a
// 0084300a  89354c89a500         mov dword ptr [0xa5894c], esi
// 00843010  83c604               add esi, 4
// 00843013  56                   push esi
// 00843014  ff15d0e18900         call dword ptr [0x89e1d0]
// 0084301a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0084301e  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 00843025  3bc5                 cmp eax, ebp
// 00843027  742b                 je 0x843054
// 00843029  83c004               add eax, 4
// 0084302c  50                   push eax
// 0084302d  ff15a4e18900         call dword ptr [0x89e1a4]
// 00843033  85c0                 test eax, eax
// 00843035  7519                 jne 0x843050
// 00843037  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084303b  e8401dc0ff           call 0x444d80
// 00843040  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00843044  3bcd                 cmp ecx, ebp
// 00843046  7408                 je 0x843050
// 00843048  8b01                 mov eax, dword ptr [ecx]
// 0084304a  8b10                 mov edx, dword ptr [eax]
// 0084304c  6a01                 push 1
// 0084304e  ffd2                 call edx
// 00843050  896c2410             mov dword ptr [esp + 0x10], ebp
// 00843054  8d4c2450             lea ecx, [esp + 0x50]
// 00843058  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 00843060  ff15c4e48900         call dword ptr [0x89e4c4]
// 00843066  8d4c2434             lea ecx, [esp + 0x34]
// 0084306a  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 00843072  ff15c4e48900         call dword ptr [0x89e4c4]
// 00843078  83ceff               or esi, 0xffffffff
// 0084307b  8d4c2418             lea ecx, [esp + 0x18]
// 0084307f  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 00843086  ff15c4e48900         call dword ptr [0x89e4c4]
// 0084308c  6816d28a00           push 0x8ad216
// 00843091  8d4c241c             lea ecx, [esp + 0x1c]
// 00843095  ff15b4e48900         call dword ptr [0x89e4b4]
// 0084309b  6870429200           push 0x924270
// 008430a0  8d4c2454             lea ecx, [esp + 0x54]
// 008430a4  c78424b000000004000000 mov dword ptr [esp + 0xb0], 4
// 008430af  ff15b4e48900         call dword ptr [0x89e4b4]
// 008430b5  68f83f9200           push 0x923ff8
// 008430ba  50                   push eax
// 008430bb  8d44243c             lea eax, [esp + 0x3c]
// 008430bf  50                   push eax
// 008430c0  c68424b800000005     mov byte ptr [esp + 0xb8], 5
// 008430c8  ffd7                 call edi
// 008430ca  55                   push ebp
// 008430cb  50                   push eax
// 008430cc  8d4c242c             lea ecx, [esp + 0x2c]
// 008430d0  51                   push ecx
// 008430d1  8d542428             lea edx, [esp + 0x28]
// 008430d5  b306                 mov bl, 6
// 008430d7  52                   push edx
// 008430d8  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 008430df  e8dc7cd2ff           call 0x56adc0
// 008430e4  83c41c               add esp, 0x1c
// 008430e7  8b00                 mov eax, dword ptr [eax]
// 008430e9  50                   push eax
// 008430ea  b95089a500           mov ecx, 0xa58950
// 008430ef  c68424b000000007     mov byte ptr [esp + 0xb0], 7
// 008430f7  e864c7c5ff           call 0x49f860
// 008430fc  8b442410             mov eax, dword ptr [esp + 0x10]
// 00843100  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 00843107  3bc5                 cmp eax, ebp
// 00843109  742b                 je 0x843136
// 0084310b  83c004               add eax, 4
// 0084310e  50                   push eax
// 0084310f  ff15a4e18900         call dword ptr [0x89e1a4]
// 00843115  85c0                 test eax, eax
// 00843117  7519                 jne 0x843132
// 00843119  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084311d  e85e1cc0ff           call 0x444d80
// 00843122  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00843126  3bcd                 cmp ecx, ebp
// 00843128  7408                 je 0x843132
// 0084312a  8b11                 mov edx, dword ptr [ecx]
// 0084312c  8b02                 mov eax, dword ptr [edx]
// 0084312e  6a01                 push 1
// 00843130  ffd0                 call eax
// 00843132  896c2410             mov dword ptr [esp + 0x10], ebp
// 00843136  8d4c2434             lea ecx, [esp + 0x34]
// 0084313a  c68424ac00000005     mov byte ptr [esp + 0xac], 5
// 00843142  ff15c4e48900         call dword ptr [0x89e4c4]
// 00843148  8d4c2450             lea ecx, [esp + 0x50]
// 0084314c  c68424ac00000004     mov byte ptr [esp + 0xac], 4
// 00843154  ff15c4e48900         call dword ptr [0x89e4c4]
// 0084315a  8d4c2418             lea ecx, [esp + 0x18]
// 0084315e  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 00843165  ff15c4e48900         call dword ptr [0x89e4c4]
// 0084316b  68b83d9200           push 0x923db8
// 00843170  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00843177  ff15b4e48900         call dword ptr [0x89e4b4]
// 0084317d  6816d28a00           push 0x8ad216
// 00843182  8d4c2470             lea ecx, [esp + 0x70]
// 00843186  c78424b000000008000000 mov dword ptr [esp + 0xb0], 8
// 00843191  ff15b4e48900         call dword ptr [0x89e4b4]
// 00843197  55                   push ebp
// 00843198  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0084319f  51                   push ecx
// 008431a0  8d542474             lea edx, [esp + 0x74]
// 008431a4  52                   push edx
// 008431a5  8d442420             lea eax, [esp + 0x20]
// 008431a9  b309                 mov bl, 9
// 008431ab  50                   push eax
// 008431ac  889c24bc000000       mov byte ptr [esp + 0xbc], bl
// 008431b3  e8087cd2ff           call 0x56adc0
// 008431b8  83c410               add esp, 0x10
// 008431bb  8b08                 mov ecx, dword ptr [eax]
// 008431bd  51                   push ecx
// 008431be  b95489a500           mov ecx, 0xa58954
// 008431c3  c68424b00000000a     mov byte ptr [esp + 0xb0], 0xa
// 008431cb  e890c6c5ff           call 0x49f860
// 008431d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 008431d4  889c24ac000000       mov byte ptr [esp + 0xac], bl
// 008431db  3bc5                 cmp eax, ebp
// 008431dd  742b                 je 0x84320a
// 008431df  83c004               add eax, 4
// 008431e2  50                   push eax
// 008431e3  ff15a4e18900         call dword ptr [0x89e1a4]
// 008431e9  85c0                 test eax, eax
// 008431eb  7519                 jne 0x843206
// 008431ed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008431f1  e88a1bc0ff           call 0x444d80
// 008431f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008431fa  3bcd                 cmp ecx, ebp
// 008431fc  7408                 je 0x843206
// 008431fe  8b11                 mov edx, dword ptr [ecx]
// 00843200  8b02                 mov eax, dword ptr [edx]
// 00843202  6a01                 push 1
// 00843204  ffd0                 call eax
// 00843206  896c2414             mov dword ptr [esp + 0x14], ebp
// 0084320a  8d4c246c             lea ecx, [esp + 0x6c]
// 0084320e  c68424ac00000008     mov byte ptr [esp + 0xac], 8
// 00843216  ff15c4e48900         call dword ptr [0x89e4c4]
// 0084321c  8d8c2488000000       lea ecx, [esp + 0x88]
// 00843223  89b424ac000000       mov dword ptr [esp + 0xac], esi
// 0084322a  ff15c4e48900         call dword ptr [0x89e4c4]
// 00843230  be4c89a500           mov esi, 0xa5894c
// 00843235  8b0e                 mov ecx, dword ptr [esi]
// 00843237  8b11                 mov edx, dword ptr [ecx]
// 00843239  8b4204               mov eax, dword ptr [edx + 4]
// 0084323c  55                   push ebp
// 0084323d  ffd0                 call eax
// 0084323f  83c604               add esi, 4
// 00843242  81fe5889a500         cmp esi, 0xa58958
// 00843248  7ceb                 jl 0x843235
// 0084324a  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00843251  5f                   pop edi
// 00843252  5e                   pop esi
// 00843253  5d                   pop ebp
// 00843254  5b                   pop ebx
// 00843255  64890d00000000       mov dword ptr fs:[0], ecx
// 0084325c  81c4a0000000         add esp, 0xa0
// 00843262  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?makeShadersPS20@ToneMap@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
