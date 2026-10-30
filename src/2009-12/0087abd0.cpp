// roc 2009-12 0087abd0  unit: CXTPControlGallery  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087abd0
//
// 0087abd0  83ec10               sub esp, 0x10
// 0087abd3  56                   push esi
// 0087abd4  57                   push edi
// 0087abd5  8d442408             lea eax, [esp + 8]
// 0087abd9  50                   push eax
// 0087abda  8bf1                 mov esi, ecx
// 0087abdc  e86fd8ffff           call 0x878450
// 0087abe1  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 0087abe7  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0087abeb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087abef  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0087abf3  8d0411               lea eax, [ecx + edx]
// 0087abf6  3bf8                 cmp edi, eax
// 0087abf8  7e02                 jle 0x87abfc
// 0087abfa  8bf8                 mov edi, eax
// 0087abfc  85ff                 test edi, edi
// 0087abfe  7d02                 jge 0x87ac02
// 0087ac00  33ff                 xor edi, edi
// 0087ac02  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 0087ac09  742d                 je 0x87ac38
// 0087ac0b  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0087ac11  c786ec01000000000000 mov dword ptr [esi + 0x1ec], 0
// 0087ac1b  85c0                 test eax, eax
// 0087ac1d  7403                 je 0x87ac22
// 0087ac1f  8b4020               mov eax, dword ptr [eax + 0x20]
// 0087ac22  68325b0000           push 0x5b32
// 0087ac27  50                   push eax
// 0087ac28  ff15d0cb9800         call dword ptr [0x98cbd0]
// 0087ac2e  c7860c020000ffffffff mov dword ptr [esi + 0x20c], 0xffffffff
// 0087ac38  39be0c020000         cmp dword ptr [esi + 0x20c], edi
// 0087ac3e  7424                 je 0x87ac64
// 0087ac40  8bce                 mov ecx, esi
// 0087ac42  89be0c020000         mov dword ptr [esi + 0x20c], edi
// 0087ac48  e8b3f7ffff           call 0x87a400
// 0087ac4d  8b06                 mov eax, dword ptr [esi]
// 0087ac4f  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0087ac55  8bce                 mov ecx, esi
// 0087ac57  ffd2                 call edx
// 0087ac59  6a00                 push 0
// 0087ac5b  6a00                 push 0
// 0087ac5d  8bce                 mov ecx, esi
// 0087ac5f  e8bcd5ffff           call 0x878220
// 0087ac64  5f                   pop edi
// 0087ac65  5e                   pop esi
// 0087ac66  83c410               add esp, 0x10
// 0087ac69  c20400               ret 4
// copied from an identical function in another client (function ?SetScrollPos@CXTPControlGallery@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp