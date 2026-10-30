// roc 2009-12 0087b520  unit: CXTPControlGallery  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b520
//
// 0087b520  56                   push esi
// 0087b521  57                   push edi
// 0087b522  8bf1                 mov esi, ecx
// 0087b524  e897beffff           call 0x8773c0
// 0087b529  85c0                 test eax, eax
// 0087b52b  7411                 je 0x87b53e
// 0087b52d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087b531  50                   push eax
// 0087b532  8bce                 mov ecx, esi
// 0087b534  e857b1f7ff           call 0x7f6690
// 0087b539  5f                   pop edi
// 0087b53a  5e                   pop esi
// 0087b53b  c20400               ret 4
// 0087b53e  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0087b544  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0087b54a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0087b54e  83ec10               sub esp, 0x10
// 0087b551  8bc4                 mov eax, esp
// 0087b553  8908                 mov dword ptr [eax], ecx
// 0087b555  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0087b55b  895004               mov dword ptr [eax + 4], edx
// 0087b55e  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 0087b564  894808               mov dword ptr [eax + 8], ecx
// 0087b567  57                   push edi
// 0087b568  8bce                 mov ecx, esi
// 0087b56a  89500c               mov dword ptr [eax + 0xc], edx
// 0087b56d  e85ebfffff           call 0x8774d0
// 0087b572  57                   push edi
// 0087b573  8bce                 mov ecx, esi
// 0087b575  e8f6f0ffff           call 0x87a670
// 0087b57a  83be2c02000000       cmp dword ptr [esi + 0x22c], 0
// 0087b581  7408                 je 0x87b58b
// 0087b583  57                   push edi
// 0087b584  8bce                 mov ecx, esi
// 0087b586  e895bfffff           call 0x877520
// 0087b58b  5f                   pop edi
// 0087b58c  5e                   pop esi
// 0087b58d  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPControlGallery@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp