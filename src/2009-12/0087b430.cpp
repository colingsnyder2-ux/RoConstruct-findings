// roc 2009-12 0087b430  unit: CXTPControlGallery  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b430
//
// 0087b430  83ec10               sub esp, 0x10
// 0087b433  53                   push ebx
// 0087b434  56                   push esi
// 0087b435  57                   push edi
// 0087b436  8bf9                 mov edi, ecx
// 0087b438  837f6800             cmp dword ptr [edi + 0x68], 0
// 0087b43c  7408                 je 0x87b446
// 0087b43e  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 0087b444  eb06                 jmp 0x87b44c
// 0087b446  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0087b44c  8d44240c             lea eax, [esp + 0xc]
// 0087b450  8d9f7cfeffff         lea ebx, [edi - 0x184]
// 0087b456  50                   push eax
// 0087b457  8bcb                 mov ecx, ebx
// 0087b459  e8f2cfffff           call 0x878450
// 0087b45e  8bcb                 mov ecx, ebx
// 0087b460  e8ebbeffff           call 0x877350
// 0087b465  85c0                 test eax, eax
// 0087b467  0f848a000000         je 0x87b4f7
// 0087b46d  55                   push ebp
// 0087b46e  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0087b472  83fd07               cmp ebp, 7
// 0087b475  7747                 ja 0x87b4be
// 0087b477  ff24ad00b58700       jmp dword ptr [ebp*4 + 0x87b500]
// 0087b47e  33f6                 xor esi, esi
// 0087b480  eb3c                 jmp 0x87b4be
// 0087b482  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 0087b488  eb34                 jmp 0x87b4be
// 0087b48a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0087b48d  2b7024               sub esi, dword ptr [eax + 0x24]
// 0087b490  894c2410             mov dword ptr [esp + 0x10], ecx
// 0087b494  eb28                 jmp 0x87b4be
// 0087b496  8b5020               mov edx, dword ptr [eax + 0x20]
// 0087b499  037024               add esi, dword ptr [eax + 0x24]
// 0087b49c  89542410             mov dword ptr [esp + 0x10], edx
// 0087b4a0  eb1c                 jmp 0x87b4be
// 0087b4a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087b4a6  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0087b4aa  03f0                 add esi, eax
// 0087b4ac  eb10                 jmp 0x87b4be
// 0087b4ae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087b4b2  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0087b4b6  03f1                 add esi, ecx
// 0087b4b8  eb04                 jmp 0x87b4be
// 0087b4ba  8b742428             mov esi, dword ptr [esp + 0x28]
// 0087b4be  8b13                 mov edx, dword ptr [ebx]
// 0087b4c0  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0087b4c6  8bcb                 mov ecx, ebx
// 0087b4c8  ffd0                 call eax
// 0087b4ca  85c0                 test eax, eax
// 0087b4cc  7420                 je 0x87b4ee
// 0087b4ce  85ed                 test ebp, ebp
// 0087b4d0  740a                 je 0x87b4dc
// 0087b4d2  83fd01               cmp ebp, 1
// 0087b4d5  7405                 je 0x87b4dc
// 0087b4d7  83fd08               cmp ebp, 8
// 0087b4da  7512                 jne 0x87b4ee
// 0087b4dc  56                   push esi
// 0087b4dd  8bcb                 mov ecx, ebx
// 0087b4df  e8cccfffff           call 0x8784b0
// 0087b4e4  5d                   pop ebp
// 0087b4e5  5f                   pop edi
// 0087b4e6  5e                   pop esi
// 0087b4e7  5b                   pop ebx
// 0087b4e8  83c410               add esp, 0x10
// 0087b4eb  c20800               ret 8
// 0087b4ee  56                   push esi
// 0087b4ef  8bcb                 mov ecx, ebx
// 0087b4f1  e8daf6ffff           call 0x87abd0
// 0087b4f6  5d                   pop ebp
// 0087b4f7  5f                   pop edi
// 0087b4f8  5e                   pop esi
// 0087b4f9  5b                   pop ebx
// 0087b4fa  83c410               add esp, 0x10
// 0087b4fd  c20800               ret 8
// 0087b500  8ab4870096b487       mov dh, byte ptr [edi + eax*4 - 0x784b6a00]
// 0087b507  00a2b48700ae         add byte ptr [edx - 0x51ff784c], ah
// 0087b50d  b487                 mov ah, 0x87
// 0087b50f  00beb48700ba         add byte ptr [esi - 0x45ff784c], bh
// 0087b515  b487                 mov ah, 0x87
// 0087b517  007eb4               add byte ptr [esi - 0x4c], bh
// 0087b51a  8700                 xchg dword ptr [eax], eax
// copied from an identical function in another client (function ?DoScroll@CXTPControlGallery@@MAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp