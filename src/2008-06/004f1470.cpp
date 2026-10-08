// roc 2008-06 004f1470  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f1470
//
// 004f1470  64a100000000         mov eax, dword ptr fs:[0]
// 004f1476  6aff                 push -1
// 004f1478  68d8ad7c00           push 0x7cadd8
// 004f147d  50                   push eax
// 004f147e  64892500000000       mov dword ptr fs:[0], esp
// 004f1485  53                   push ebx
// 004f1486  55                   push ebp
// 004f1487  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004f148b  807d2100             cmp byte ptr [ebp + 0x21], 0
// 004f148f  56                   push esi
// 004f1490  57                   push edi
// 004f1491  8bd9                 mov ebx, ecx
// 004f1493  8bf5                 mov esi, ebp
// 004f1495  7548                 jne 0x4f14df
// 004f1497  8b4608               mov eax, dword ptr [esi + 8]
// 004f149a  50                   push eax
// 004f149b  8bcb                 mov ecx, ebx
// 004f149d  e8ceffffff           call 0x4f1470
// 004f14a2  8b36                 mov esi, dword ptr [esi]
// 004f14a4  8d7d18               lea edi, [ebp + 0x18]
// 004f14a7  897c2420             mov dword ptr [esp + 0x20], edi
// 004f14ab  c707ec6f8200         mov dword ptr [edi], 0x826fec
// 004f14b1  8bcf                 mov ecx, edi
// 004f14b3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004f14bb  e880f3ffff           call 0x4f0840
// 004f14c0  55                   push ebp
// 004f14c1  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004f14c9  c707946e8200         mov dword ptr [edi], 0x826e94
// 004f14cf  e8a6f11a00           call 0x6a067a
// 004f14d4  83c404               add esp, 4
// 004f14d7  807e2100             cmp byte ptr [esi + 0x21], 0
// 004f14db  8bee                 mov ebp, esi
// 004f14dd  74b8                 je 0x4f1497
// 004f14df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f14e3  5f                   pop edi
// 004f14e4  5e                   pop esi
// 004f14e5  5d                   pop ebp
// 004f14e6  64890d00000000       mov dword ptr fs:[0], ecx
// 004f14ed  5b                   pop ebx
// 004f14ee  83c40c               add esp, 0xc
// 004f14f1  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
