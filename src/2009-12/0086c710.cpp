// roc 2009-12 0086c710  unit: CXTCaption  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c710
//
// 0086c710  6aff                 push -1
// 0086c712  6833f89500           push 0x95f833
// 0086c717  64a100000000         mov eax, dword ptr fs:[0]
// 0086c71d  50                   push eax
// 0086c71e  81eca8000000         sub esp, 0xa8
// 0086c724  a10052b600           mov eax, dword ptr [0xb65200]
// 0086c729  33c4                 xor eax, esp
// 0086c72b  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 0086c732  56                   push esi
// 0086c733  a10052b600           mov eax, dword ptr [0xb65200]
// 0086c738  33c4                 xor eax, esp
// 0086c73a  50                   push eax
// 0086c73b  8d8424b0000000       lea eax, [esp + 0xb0]
// 0086c742  64a300000000         mov dword ptr fs:[0], eax
// 0086c748  8bf1                 mov esi, ecx
// 0086c74a  56                   push esi
// 0086c74b  8d4c245c             lea ecx, [esp + 0x5c]
// 0086c74f  e89c7af8ff           call 0x7f41f0
// 0086c754  56                   push esi
// 0086c755  8d4c240c             lea ecx, [esp + 0xc]
// 0086c759  c78424bc00000000000000 mov dword ptr [esp + 0xbc], 0
// 0086c764  e867ebfdff           call 0x84b2d0
// 0086c769  8d442458             lea eax, [esp + 0x58]
// 0086c76d  50                   push eax
// 0086c76e  8d4c242c             lea ecx, [esp + 0x2c]
// 0086c772  e889ecfdff           call 0x84b400
// 0086c777  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0086c77d  51                   push ecx
// 0086c77e  c68424bc00000001     mov byte ptr [esp + 0xbc], 1
// 0086c786  ff1584cc9800         call dword ptr [0x98cc84]
// 0086c78c  85c0                 test eax, eax
// 0086c78e  743b                 je 0x86c7cb
// 0086c790  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0086c796  52                   push edx
// 0086c797  ff1564ca9800         call dword ptr [0x98ca64]
// 0086c79d  85c0                 test eax, eax
// 0086c79f  742a                 je 0x86c7cb
// 0086c7a1  8d86dc000000         lea eax, [esi + 0xdc]
// 0086c7a7  50                   push eax
// 0086c7a8  8d4c241c             lea ecx, [esp + 0x1c]
// 0086c7ac  e8bfeafdff           call 0x84b270
// 0086c7b1  8d4c2418             lea ecx, [esp + 0x18]
// 0086c7b5  51                   push ecx
// 0086c7b6  8bce                 mov ecx, esi
// 0086c7b8  e81b80f8ff           call 0x7f47d8
// 0086c7bd  8d542418             lea edx, [esp + 0x18]
// 0086c7c1  52                   push edx
// 0086c7c2  8d4c242c             lea ecx, [esp + 0x2c]
// 0086c7c6  e8e9a20b00           call 0x926ab4
// 0086c7cb  8b06                 mov eax, dword ptr [esi]
// 0086c7cd  8b806c010000         mov eax, dword ptr [eax + 0x16c]
// 0086c7d3  8d4c2408             lea ecx, [esp + 8]
// 0086c7d7  51                   push ecx
// 0086c7d8  8d54242c             lea edx, [esp + 0x2c]
// 0086c7dc  52                   push edx
// 0086c7dd  8bce                 mov ecx, esi
// 0086c7df  ffd0                 call eax
// 0086c7e1  8b16                 mov edx, dword ptr [esi]
// 0086c7e3  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 0086c7e9  8d442428             lea eax, [esp + 0x28]
// 0086c7ed  50                   push eax
// 0086c7ee  8bce                 mov ecx, esi
// 0086c7f0  ffd2                 call edx
// 0086c7f2  8b06                 mov eax, dword ptr [esi]
// 0086c7f4  8b8074010000         mov eax, dword ptr [eax + 0x174]
// 0086c7fa  8d4c2408             lea ecx, [esp + 8]
// 0086c7fe  51                   push ecx
// 0086c7ff  8d54242c             lea edx, [esp + 0x2c]
// 0086c803  52                   push edx
// 0086c804  8bce                 mov ecx, esi
// 0086c806  ffd0                 call eax
// 0086c808  8d4c2428             lea ecx, [esp + 0x28]
// 0086c80c  c68424b800000000     mov byte ptr [esp + 0xb8], 0
// 0086c814  e827edfdff           call 0x84b540
// 0086c819  8d4c2458             lea ecx, [esp + 0x58]
// 0086c81d  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 0086c828  e8bd79f8ff           call 0x7f41ea
// 0086c82d  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0086c834  64890d00000000       mov dword ptr fs:[0], ecx
// 0086c83b  59                   pop ecx
// 0086c83c  5e                   pop esi
// 0086c83d  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0086c844  33cc                 xor ecx, esp
// 0086c846  e84f8bf8ff           call 0x7f539a
// 0086c84b  81c4b4000000         add esp, 0xb4
// 0086c851  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTCaption@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp