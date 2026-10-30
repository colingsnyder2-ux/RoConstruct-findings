// roc 2009-12 00866e10  unit: CXTPPropertyGridItem  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866e10
//
// 00866e10  6aff                 push -1
// 00866e12  687bf19500           push 0x95f17b
// 00866e17  64a100000000         mov eax, dword ptr fs:[0]
// 00866e1d  50                   push eax
// 00866e1e  51                   push ecx
// 00866e1f  56                   push esi
// 00866e20  57                   push edi
// 00866e21  a10052b600           mov eax, dword ptr [0xb65200]
// 00866e26  33c4                 xor eax, esp
// 00866e28  50                   push eax
// 00866e29  8d442410             lea eax, [esp + 0x10]
// 00866e2d  64a300000000         mov dword ptr fs:[0], eax
// 00866e33  8bf1                 mov esi, ecx
// 00866e35  8974240c             mov dword ptr [esp + 0xc], esi
// 00866e39  8d7e20               lea edi, [esi + 0x20]
// 00866e3c  c706c4ea9f00         mov dword ptr [esi], 0x9feac4
// 00866e42  c707aceb9f00         mov dword ptr [edi], 0x9febac
// 00866e48  c744241809000000     mov dword ptr [esp + 0x18], 9
// 00866e50  e8ebf7ffff           call 0x866640
// 00866e55  8d8eec000000         lea ecx, [esi + 0xec]
// 00866e5b  ff15c0de9800         call dword ptr [0x98dec0]
// 00866e61  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00866e67  ff15c0de9800         call dword ptr [0x98dec0]
// 00866e6d  8d8ee4000000         lea ecx, [esi + 0xe4]
// 00866e73  ff15c0de9800         call dword ptr [0x98dec0]
// 00866e79  8d8eb4000000         lea ecx, [esi + 0xb4]
// 00866e7f  ff15c0de9800         call dword ptr [0x98dec0]
// 00866e85  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00866e8b  ff15c0de9800         call dword ptr [0x98dec0]
// 00866e91  8d8eac000000         lea ecx, [esi + 0xac]
// 00866e97  ff15c0de9800         call dword ptr [0x98dec0]
// 00866e9d  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00866ea3  ff15c0de9800         call dword ptr [0x98dec0]
// 00866ea9  8d8ea4000000         lea ecx, [esi + 0xa4]
// 00866eaf  ff15c0de9800         call dword ptr [0x98dec0]
// 00866eb5  8bcf                 mov ecx, edi
// 00866eb7  c644241800           mov byte ptr [esp + 0x18], 0
// 00866ebc  e87f55fdff           call 0x83c440
// 00866ec1  8bce                 mov ecx, esi
// 00866ec3  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00866ecb  e812d5f8ff           call 0x7f43e2
// 00866ed0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00866ed4  64890d00000000       mov dword ptr fs:[0], ecx
// 00866edb  59                   pop ecx
// 00866edc  5f                   pop edi
// 00866edd  5e                   pop esi
// 00866ede  83c410               add esp, 0x10
// 00866ee1  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItem@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp