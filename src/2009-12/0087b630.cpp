// roc 2009-12 0087b630  unit: CXTPControlGallery  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b630
//
// 0087b630  56                   push esi
// 0087b631  8bf1                 mov esi, ecx
// 0087b633  e888bdffff           call 0x8773c0
// 0087b638  85c0                 test eax, eax
// 0087b63a  7410                 je 0x87b64c
// 0087b63c  8b442408             mov eax, dword ptr [esp + 8]
// 0087b640  50                   push eax
// 0087b641  8bce                 mov ecx, esi
// 0087b643  e848f6fbff           call 0x83ac90
// 0087b648  5e                   pop esi
// 0087b649  c20400               ret 4
// 0087b64c  57                   push edi
// 0087b64d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0087b651  33c0                 xor eax, eax
// 0087b653  3bf8                 cmp edi, eax
// 0087b655  7520                 jne 0x87b677
// 0087b657  8bce                 mov ecx, esi
// 0087b659  898600020000         mov dword ptr [esi + 0x200], eax
// 0087b65f  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 0087b665  e826ffffff           call 0x87b590
// 0087b66a  57                   push edi
// 0087b66b  8bce                 mov ecx, esi
// 0087b66d  e8cecaf7ff           call 0x7f8140
// 0087b672  5f                   pop edi
// 0087b673  5e                   pop esi
// 0087b674  c20400               ret 4
// 0087b677  83ff02               cmp edi, 2
// 0087b67a  7405                 je 0x87b681
// 0087b67c  83ff03               cmp edi, 3
// 0087b67f  7532                 jne 0x87b6b3
// 0087b681  3986fc010000         cmp dword ptr [esi + 0x1fc], eax
// 0087b687  750c                 jne 0x87b695
// 0087b689  8bce                 mov ecx, esi
// 0087b68b  e860bdffff           call 0x8773f0
// 0087b690  83f8ff               cmp eax, -1
// 0087b693  751e                 jne 0x87b6b3
// 0087b695  33c9                 xor ecx, ecx
// 0087b697  83ff03               cmp edi, 3
// 0087b69a  0f95c1               setne cl
// 0087b69d  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 0087b6a1  51                   push ecx
// 0087b6a2  6aff                 push -1
// 0087b6a4  8bce                 mov ecx, esi
// 0087b6a6  e825cfffff           call 0x8785d0
// 0087b6ab  50                   push eax
// 0087b6ac  8bce                 mov ecx, esi
// 0087b6ae  e8ddfbffff           call 0x87b290
// 0087b6b3  57                   push edi
// 0087b6b4  8bce                 mov ecx, esi
// 0087b6b6  e885caf7ff           call 0x7f8140
// 0087b6bb  5f                   pop edi
// 0087b6bc  5e                   pop esi
// 0087b6bd  c20400               ret 4
// copied from an identical function in another client (function ?OnSetSelected@CXTPControlGallery@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp