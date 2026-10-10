// roc 2008-06 0072f520  unit: CXTPControlGallery  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072f520
//
// 0072f520  83ec10               sub esp, 0x10
// 0072f523  56                   push esi
// 0072f524  8bf1                 mov esi, ecx
// 0072f526  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0072f52c  83f8ff               cmp eax, -1
// 0072f52f  750f                 jne 0x72f540
// 0072f531  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0072f537  85c9                 test ecx, ecx
// 0072f539  7405                 je 0x72f540
// 0072f53b  e880c2f7ff           call 0x6ab7c0
// 0072f540  85c0                 test eax, eax
// 0072f542  7507                 jne 0x72f54b
// 0072f544  5e                   pop esi
// 0072f545  83c410               add esp, 0x10
// 0072f548  c20400               ret 4
// 0072f54b  8b06                 mov eax, dword ptr [esi]
// 0072f54d  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0072f553  8bce                 mov ecx, esi
// 0072f555  ffd2                 call edx
// 0072f557  85c0                 test eax, eax
// 0072f559  744c                 je 0x72f5a7
// 0072f55b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072f55f  83f83c               cmp eax, 0x3c
// 0072f562  7512                 jne 0x72f576
// 0072f564  33c0                 xor eax, eax
// 0072f566  39860c020000         cmp dword ptr [esi + 0x20c], eax
// 0072f56c  5e                   pop esi
// 0072f56d  0f9fc0               setg al
// 0072f570  83c410               add esp, 0x10
// 0072f573  c20400               ret 4
// 0072f576  83f83d               cmp eax, 0x3d
// 0072f579  752c                 jne 0x72f5a7
// 0072f57b  8d442404             lea eax, [esp + 4]
// 0072f57f  50                   push eax
// 0072f580  8bce                 mov ecx, esi
// 0072f582  e8b9f8ffff           call 0x72ee40
// 0072f587  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 0072f58d  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0072f591  33c0                 xor eax, eax
// 0072f593  034c2408             add ecx, dword ptr [esp + 8]
// 0072f597  398e0c020000         cmp dword ptr [esi + 0x20c], ecx
// 0072f59d  5e                   pop esi
// 0072f59e  0f9cc0               setl al
// 0072f5a1  83c410               add esp, 0x10
// 0072f5a4  c20400               ret 4
// 0072f5a7  b801000000           mov eax, 1
// 0072f5ac  5e                   pop esi
// 0072f5ad  83c410               add esp, 0x10
// 0072f5b0  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlGallery.cpp (function ?IsScrollButtonEnabled@CXTPControlGallery@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp
