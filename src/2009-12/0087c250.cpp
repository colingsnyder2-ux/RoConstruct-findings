// roc 2009-12 0087c250  unit: CXTPControlGallery  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087c250
//
// 0087c250  56                   push esi
// 0087c251  8bf1                 mov esi, ecx
// 0087c253  e868b1ffff           call 0x8773c0
// 0087c258  85c0                 test eax, eax
// 0087c25a  7415                 je 0x87c271
// 0087c25c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087c260  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087c264  50                   push eax
// 0087c265  51                   push ecx
// 0087c266  8bce                 mov ecx, esi
// 0087c268  e8e3f1fbff           call 0x83b450
// 0087c26d  5e                   pop esi
// 0087c26e  c20800               ret 8
// 0087c271  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087c275  8b442408             mov eax, dword ptr [esp + 8]
// 0087c279  52                   push edx
// 0087c27a  50                   push eax
// 0087c27b  8bce                 mov ecx, esi
// 0087c27d  e80efeffff           call 0x87c090
// 0087c282  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087c286  8b542408             mov edx, dword ptr [esp + 8]
// 0087c28a  51                   push ecx
// 0087c28b  52                   push edx
// 0087c28c  8d8e84010000         lea ecx, [esi + 0x184]
// 0087c292  e8e9ea0600           call 0x8ead80
// 0087c297  3b86dc010000         cmp eax, dword ptr [esi + 0x1dc]
// 0087c29d  740f                 je 0x87c2ae
// 0087c29f  6a01                 push 1
// 0087c2a1  8bce                 mov ecx, esi
// 0087c2a3  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 0087c2a9  e812a4f7ff           call 0x7f66c0
// 0087c2ae  5e                   pop esi
// 0087c2af  c20800               ret 8
// copied from an identical function in another client (function ?OnMouseMove@CXTPControlGallery@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp