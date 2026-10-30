// roc 2009-12 00878b30  unit: CXTPControlGallery  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878b30
//
// 00878b30  83ec10               sub esp, 0x10
// 00878b33  56                   push esi
// 00878b34  8bf1                 mov esi, ecx
// 00878b36  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00878b3c  83f8ff               cmp eax, -1
// 00878b3f  750f                 jne 0x878b50
// 00878b41  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00878b47  85c9                 test ecx, ecx
// 00878b49  7405                 je 0x878b50
// 00878b4b  e860daf7ff           call 0x7f65b0
// 00878b50  85c0                 test eax, eax
// 00878b52  7507                 jne 0x878b5b
// 00878b54  5e                   pop esi
// 00878b55  83c410               add esp, 0x10
// 00878b58  c20400               ret 4
// 00878b5b  8b06                 mov eax, dword ptr [esi]
// 00878b5d  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 00878b63  8bce                 mov ecx, esi
// 00878b65  ffd2                 call edx
// 00878b67  85c0                 test eax, eax
// 00878b69  744c                 je 0x878bb7
// 00878b6b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00878b6f  83f83c               cmp eax, 0x3c
// 00878b72  7512                 jne 0x878b86
// 00878b74  33c0                 xor eax, eax
// 00878b76  39860c020000         cmp dword ptr [esi + 0x20c], eax
// 00878b7c  5e                   pop esi
// 00878b7d  0f9fc0               setg al
// 00878b80  83c410               add esp, 0x10
// 00878b83  c20400               ret 4
// 00878b86  83f83d               cmp eax, 0x3d
// 00878b89  752c                 jne 0x878bb7
// 00878b8b  8d442404             lea eax, [esp + 4]
// 00878b8f  50                   push eax
// 00878b90  8bce                 mov ecx, esi
// 00878b92  e8b9f8ffff           call 0x878450
// 00878b97  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 00878b9d  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00878ba1  33c0                 xor eax, eax
// 00878ba3  034c2408             add ecx, dword ptr [esp + 8]
// 00878ba7  398e0c020000         cmp dword ptr [esi + 0x20c], ecx
// 00878bad  5e                   pop esi
// 00878bae  0f9cc0               setl al
// 00878bb1  83c410               add esp, 0x10
// 00878bb4  c20400               ret 4
// 00878bb7  b801000000           mov eax, 1
// 00878bbc  5e                   pop esi
// 00878bbd  83c410               add esp, 0x10
// 00878bc0  c20400               ret 4
// copied from an identical function in another client (function ?IsScrollButtonEnabled@CXTPControlGallery@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp