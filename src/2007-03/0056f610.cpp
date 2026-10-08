// roc 2007-03 0056f610  unit: seg_00560000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056f610
//
// 0056f610  64a100000000         mov eax, dword ptr fs:[0]
// 0056f616  6aff                 push -1
// 0056f618  6838607500           push 0x756038
// 0056f61d  50                   push eax
// 0056f61e  64892500000000       mov dword ptr fs:[0], esp
// 0056f625  83ec28               sub esp, 0x28
// 0056f628  53                   push ebx
// 0056f629  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0056f62d  56                   push esi
// 0056f62e  57                   push edi
// 0056f62f  53                   push ebx
// 0056f630  8bf1                 mov esi, ecx
// 0056f632  e839370400           call 0x5b2d70
// 0056f637  85f6                 test esi, esi
// 0056f639  8bf8                 mov edi, eax
// 0056f63b  7506                 jne 0x56f643
// 0056f63d  ff1544e97700         call dword ptr [0x77e944]
// 0056f643  3b7e04               cmp edi, dword ptr [esi + 4]
// 0056f646  7412                 je 0x56f65a
// 0056f648  8d470c               lea eax, [edi + 0xc]
// 0056f64b  50                   push eax
// 0056f64c  53                   push ebx
// 0056f64d  ff15e0e67700         call dword ptr [0x77e6e0]
// 0056f653  83c408               add esp, 8
// 0056f656  84c0                 test al, al
// 0056f658  7445                 je 0x56f69f
// 0056f65a  53                   push ebx
// 0056f65b  8d4c2418             lea ecx, [esp + 0x18]
// 0056f65f  ff157ce77700         call dword ptr [0x77e77c]
// 0056f665  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0056f66d  8d4c2414             lea ecx, [esp + 0x14]
// 0056f671  51                   push ecx
// 0056f672  57                   push edi
// 0056f673  56                   push esi
// 0056f674  8d542418             lea edx, [esp + 0x18]
// 0056f678  52                   push edx
// 0056f679  8bce                 mov ecx, esi
// 0056f67b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0056f683  e878fdffff           call 0x56f400
// 0056f688  8b30                 mov esi, dword ptr [eax]
// 0056f68a  8b7804               mov edi, dword ptr [eax + 4]
// 0056f68d  8d4c2414             lea ecx, [esp + 0x14]
// 0056f691  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0056f699  ff158ce77700         call dword ptr [0x77e78c]
// 0056f69f  85f6                 test esi, esi
// 0056f6a1  7506                 jne 0x56f6a9
// 0056f6a3  ff1544e97700         call dword ptr [0x77e944]
// 0056f6a9  3b7e04               cmp edi, dword ptr [esi + 4]
// 0056f6ac  7506                 jne 0x56f6b4
// 0056f6ae  ff1544e97700         call dword ptr [0x77e944]
// 0056f6b4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0056f6b8  8d4728               lea eax, [edi + 0x28]
// 0056f6bb  5f                   pop edi
// 0056f6bc  5e                   pop esi
// 0056f6bd  5b                   pop ebx
// 0056f6be  64890d00000000       mov dword ptr fs:[0], ecx
// 0056f6c5  83c434               add esp, 0x34
// 0056f6c8  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@@std@@QAEAAW4CameraType@Camera@RBX@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
