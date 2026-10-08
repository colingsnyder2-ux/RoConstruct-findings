// from server: 100% by auto
// roc 2007-08 006ca9b0  unit: CXTPDockContext  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ca9b0
//
// 006ca9b0  8b542408             mov edx, dword ptr [esp + 8]
// 006ca9b4  83ec30               sub esp, 0x30
// 006ca9b7  53                   push ebx
// 006ca9b8  55                   push ebp
// 006ca9b9  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 006ca9bd  56                   push esi
// 006ca9be  8bf1                 mov esi, ecx
// 006ca9c0  8b460c               mov eax, dword ptr [esi + 0xc]
// 006ca9c3  8bcd                 mov ecx, ebp
// 006ca9c5  57                   push edi
// 006ca9c6  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006ca9c9  2bc8                 sub ecx, eax
// 006ca9cb  8b4608               mov eax, dword ptr [esi + 8]
// 006ca9ce  2bd7                 sub edx, edi
// 006ca9d0  83f80a               cmp eax, 0xa
// 006ca9d3  740a                 je 0x6ca9df
// 006ca9d5  83f80d               cmp eax, 0xd
// 006ca9d8  7405                 je 0x6ca9df
// 006ca9da  83f810               cmp eax, 0x10
// 006ca9dd  7503                 jne 0x6ca9e2
// 006ca9df  014e40               add dword ptr [esi + 0x40], ecx
// 006ca9e2  83f80b               cmp eax, 0xb
// 006ca9e5  740a                 je 0x6ca9f1
// 006ca9e7  83f80e               cmp eax, 0xe
// 006ca9ea  7405                 je 0x6ca9f1
// 006ca9ec  83f811               cmp eax, 0x11
// 006ca9ef  7503                 jne 0x6ca9f4
// 006ca9f1  014e48               add dword ptr [esi + 0x48], ecx
// 006ca9f4  83f80c               cmp eax, 0xc
// 006ca9f7  740a                 je 0x6caa03
// 006ca9f9  83f80e               cmp eax, 0xe
// 006ca9fc  7405                 je 0x6caa03
// 006ca9fe  83f80d               cmp eax, 0xd
// 006caa01  7503                 jne 0x6caa06
// 006caa03  015644               add dword ptr [esi + 0x44], edx
// 006caa06  83f80f               cmp eax, 0xf
// 006caa09  740a                 je 0x6caa15
// 006caa0b  83f811               cmp eax, 0x11
// 006caa0e  7405                 je 0x6caa15
// 006caa10  83f810               cmp eax, 0x10
// 006caa13  7503                 jne 0x6caa18
// 006caa15  01564c               add dword ptr [esi + 0x4c], edx
// 006caa18  8b4e04               mov ecx, dword ptr [esi + 4]
// 006caa1b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006caa1e  8d442410             lea eax, [esp + 0x10]
// 006caa22  50                   push eax
// 006caa23  52                   push edx
// 006caa24  ff15d4ed7700         call dword ptr [0x77edd4]
// 006caa2a  8b4648               mov eax, dword ptr [esi + 0x48]
// 006caa2d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006caa31  2b4640               sub eax, dword ptr [esi + 0x40]
// 006caa34  8b564c               mov edx, dword ptr [esi + 0x4c]
// 006caa37  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 006caa3b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006caa3f  2b5644               sub edx, dword ptr [esi + 0x44]
// 006caa42  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 006caa46  3bc8                 cmp ecx, eax
// 006caa48  8d7e40               lea edi, [esi + 0x40]
// 006caa4b  7504                 jne 0x6caa51
// 006caa4d  3bda                 cmp ebx, edx
// 006caa4f  745e                 je 0x6caaaf
// 006caa51  8b4604               mov eax, dword ptr [esi + 4]
// 006caa54  50                   push eax
// 006caa55  8d4c2424             lea ecx, [esp + 0x24]
// 006caa59  51                   push ecx
// 006caa5a  e85177faff           call 0x6721b0
// 006caa5f  8bc8                 mov ecx, eax
// 006caa61  e8ea72faff           call 0x671d50
// 006caa66  57                   push edi
// 006caa67  50                   push eax
// 006caa68  8d542438             lea edx, [esp + 0x38]
// 006caa6c  52                   push edx
// 006caa6d  ff155cee7700         call dword ptr [0x77ee5c]
// 006caa73  85c0                 test eax, eax
// 006caa75  7438                 je 0x6caaaf
// 006caa77  8b4608               mov eax, dword ptr [esi + 8]
// 006caa7a  8b0f                 mov ecx, dword ptr [edi]
// 006caa7c  8b5704               mov edx, dword ptr [edi + 4]
// 006caa7f  50                   push eax
// 006caa80  83ec10               sub esp, 0x10
// 006caa83  8bc4                 mov eax, esp
// 006caa85  8908                 mov dword ptr [eax], ecx
// 006caa87  8b4f08               mov ecx, dword ptr [edi + 8]
// 006caa8a  895004               mov dword ptr [eax + 4], edx
// 006caa8d  8b570c               mov edx, dword ptr [edi + 0xc]
// 006caa90  894808               mov dword ptr [eax + 8], ecx
// 006caa93  8b4e04               mov ecx, dword ptr [esi + 4]
// 006caa96  89500c               mov dword ptr [eax + 0xc], edx
// 006caa99  e8623f0500           call 0x71ea00
// 006caa9e  8b4e04               mov ecx, dword ptr [esi + 4]
// 006caaa1  8b01                 mov eax, dword ptr [ecx]
// 006caaa3  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 006caaa9  6a01                 push 1
// 006caaab  6a00                 push 0
// 006caaad  ffd2                 call edx
// 006caaaf  8b442448             mov eax, dword ptr [esp + 0x48]
// 006caab3  5f                   pop edi
// 006caab4  896e0c               mov dword ptr [esi + 0xc], ebp
// 006caab7  894610               mov dword ptr [esi + 0x10], eax
// 006caaba  5e                   pop esi
// 006caabb  5d                   pop ebp
// 006caabc  5b                   pop ebx
// 006caabd  83c430               add esp, 0x30
// 006caac0  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockContext.cpp (function ?Resize@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockContext.cpp
