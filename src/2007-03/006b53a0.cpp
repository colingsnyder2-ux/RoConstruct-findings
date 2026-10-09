// roc 2007-03 006b53a0  unit: seg_006b0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b53a0
//
// 006b53a0  8b542408             mov edx, dword ptr [esp + 8]
// 006b53a4  83ec30               sub esp, 0x30
// 006b53a7  53                   push ebx
// 006b53a8  55                   push ebp
// 006b53a9  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 006b53ad  56                   push esi
// 006b53ae  8bf1                 mov esi, ecx
// 006b53b0  8b460c               mov eax, dword ptr [esi + 0xc]
// 006b53b3  8bcd                 mov ecx, ebp
// 006b53b5  57                   push edi
// 006b53b6  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006b53b9  2bc8                 sub ecx, eax
// 006b53bb  8b4608               mov eax, dword ptr [esi + 8]
// 006b53be  2bd7                 sub edx, edi
// 006b53c0  83f80a               cmp eax, 0xa
// 006b53c3  740a                 je 0x6b53cf
// 006b53c5  83f80d               cmp eax, 0xd
// 006b53c8  7405                 je 0x6b53cf
// 006b53ca  83f810               cmp eax, 0x10
// 006b53cd  7503                 jne 0x6b53d2
// 006b53cf  014e40               add dword ptr [esi + 0x40], ecx
// 006b53d2  83f80b               cmp eax, 0xb
// 006b53d5  740a                 je 0x6b53e1
// 006b53d7  83f80e               cmp eax, 0xe
// 006b53da  7405                 je 0x6b53e1
// 006b53dc  83f811               cmp eax, 0x11
// 006b53df  7503                 jne 0x6b53e4
// 006b53e1  014e48               add dword ptr [esi + 0x48], ecx
// 006b53e4  83f80c               cmp eax, 0xc
// 006b53e7  740a                 je 0x6b53f3
// 006b53e9  83f80e               cmp eax, 0xe
// 006b53ec  7405                 je 0x6b53f3
// 006b53ee  83f80d               cmp eax, 0xd
// 006b53f1  7503                 jne 0x6b53f6
// 006b53f3  015644               add dword ptr [esi + 0x44], edx
// 006b53f6  83f80f               cmp eax, 0xf
// 006b53f9  740a                 je 0x6b5405
// 006b53fb  83f811               cmp eax, 0x11
// 006b53fe  7405                 je 0x6b5405
// 006b5400  83f810               cmp eax, 0x10
// 006b5403  7503                 jne 0x6b5408
// 006b5405  01564c               add dword ptr [esi + 0x4c], edx
// 006b5408  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b540b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006b540e  8d442410             lea eax, [esp + 0x10]
// 006b5412  50                   push eax
// 006b5413  52                   push edx
// 006b5414  ff155ced7700         call dword ptr [0x77ed5c]
// 006b541a  8b4648               mov eax, dword ptr [esi + 0x48]
// 006b541d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b5421  2b4640               sub eax, dword ptr [esi + 0x40]
// 006b5424  8b564c               mov edx, dword ptr [esi + 0x4c]
// 006b5427  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 006b542b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006b542f  2b5644               sub edx, dword ptr [esi + 0x44]
// 006b5432  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 006b5436  3bc8                 cmp ecx, eax
// 006b5438  8d7e40               lea edi, [esi + 0x40]
// 006b543b  7504                 jne 0x6b5441
// 006b543d  3bda                 cmp ebx, edx
// 006b543f  745e                 je 0x6b549f
// 006b5441  8b4604               mov eax, dword ptr [esi + 4]
// 006b5444  50                   push eax
// 006b5445  8d4c2424             lea ecx, [esp + 0x24]
// 006b5449  51                   push ecx
// 006b544a  e8a118fdff           call 0x686cf0
// 006b544f  8bc8                 mov ecx, eax
// 006b5451  e83a14fdff           call 0x686890
// 006b5456  57                   push edi
// 006b5457  50                   push eax
// 006b5458  8d542438             lea edx, [esp + 0x38]
// 006b545c  52                   push edx
// 006b545d  ff153cef7700         call dword ptr [0x77ef3c]
// 006b5463  85c0                 test eax, eax
// 006b5465  7438                 je 0x6b549f
// 006b5467  8b4608               mov eax, dword ptr [esi + 8]
// 006b546a  8b0f                 mov ecx, dword ptr [edi]
// 006b546c  8b5704               mov edx, dword ptr [edi + 4]
// 006b546f  50                   push eax
// 006b5470  83ec10               sub esp, 0x10
// 006b5473  8bc4                 mov eax, esp
// 006b5475  8908                 mov dword ptr [eax], ecx
// 006b5477  8b4f08               mov ecx, dword ptr [edi + 8]
// 006b547a  895004               mov dword ptr [eax + 4], edx
// 006b547d  8b570c               mov edx, dword ptr [edi + 0xc]
// 006b5480  894808               mov dword ptr [eax + 8], ecx
// 006b5483  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b5486  89500c               mov dword ptr [eax + 0xc], edx
// 006b5489  e8d2ef0500           call 0x714460
// 006b548e  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b5491  8b01                 mov eax, dword ptr [ecx]
// 006b5493  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 006b5499  6a01                 push 1
// 006b549b  6a00                 push 0
// 006b549d  ffd2                 call edx
// 006b549f  8b442448             mov eax, dword ptr [esp + 0x48]
// 006b54a3  5f                   pop edi
// 006b54a4  896e0c               mov dword ptr [esi + 0xc], ebp
// 006b54a7  894610               mov dword ptr [esi + 0x10], eax
// 006b54aa  5e                   pop esi
// 006b54ab  5d                   pop ebp
// 006b54ac  5b                   pop ebx
// 006b54ad  83c430               add esp, 0x30
// 006b54b0  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockContext.cpp (function ?Resize@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockContext.cpp
