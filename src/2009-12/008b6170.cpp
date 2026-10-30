// roc 2009-12 008b6170  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 434 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6170
//
// 008b6170  6aff                 push -1
// 008b6172  68b8329600           push 0x9632b8
// 008b6177  64a100000000         mov eax, dword ptr fs:[0]
// 008b617d  50                   push eax
// 008b617e  83ec2c               sub esp, 0x2c
// 008b6181  53                   push ebx
// 008b6182  55                   push ebp
// 008b6183  56                   push esi
// 008b6184  57                   push edi
// 008b6185  a10052b600           mov eax, dword ptr [0xb65200]
// 008b618a  33c4                 xor eax, esp
// 008b618c  50                   push eax
// 008b618d  8d442440             lea eax, [esp + 0x40]
// 008b6191  64a300000000         mov dword ptr fs:[0], eax
// 008b6197  8bd9                 mov ebx, ecx
// 008b6199  8b742450             mov esi, dword ptr [esp + 0x50]
// 008b619d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008b61a1  898b98000000         mov dword ptr [ebx + 0x98], ecx
// 008b61a7  85f6                 test esi, esi
// 008b61a9  0f845d010000         je 0x8b630c
// 008b61af  8b3dc8b79800         mov edi, dword ptr [0x98b7c8]
// 008b61b5  b802000000           mov eax, 2
// 008b61ba  3a4617               cmp al, byte ptr [esi + 0x17]
// 008b61bd  1bc0                 sbb eax, eax
// 008b61bf  f7d8                 neg eax
// 008b61c1  83bb9400000000       cmp dword ptr [ebx + 0x94], 0
// 008b61c8  742e                 je 0x8b61f8
// 008b61ca  85c0                 test eax, eax
// 008b61cc  752a                 jne 0x8b61f8
// 008b61ce  85c9                 test ecx, ecx
// 008b61d0  7426                 je 0x8b61f8
// 008b61d2  e8c970f9ff           call 0x84d2a0
// 008b61d7  68f82f9c00           push 0x9c2ff8
// 008b61dc  e85f46f9ff           call 0x84a840
// 008b61e1  83c404               add esp, 4
// 008b61e4  85c0                 test eax, eax
// 008b61e6  7410                 je 0x8b61f8
// 008b61e8  68f82f9c00           push 0x9c2ff8
// 008b61ed  8d4e1c               lea ecx, [esi + 0x1c]
// 008b61f0  6a20                 push 0x20
// 008b61f2  51                   push ecx
// 008b61f3  ffd7                 call edi
// 008b61f5  83c40c               add esp, 0xc
// 008b61f8  8dab84000000         lea ebp, [ebx + 0x84]
// 008b61fe  8bcd                 mov ecx, ebp
// 008b6200  e819dcf3ff           call 0x7f3e1e
// 008b6205  56                   push esi
// 008b6206  ff1528b19800         call dword ptr [0x98b128]
// 008b620c  50                   push eax
// 008b620d  8bcd                 mov ecx, ebp
// 008b620f  e816dcf3ff           call 0x7f3e2a
// 008b6214  8b06                 mov eax, dword ptr [esi]
// 008b6216  c7460c84030000       mov dword ptr [esi + 0xc], 0x384
// 008b621d  c746088c0a0000       mov dword ptr [esi + 8], 0xa8c
// 008b6224  85c0                 test eax, eax
// 008b6226  7d0a                 jge 0x8b6232
// 008b6228  83f8f5               cmp eax, -0xb
// 008b622b  7e05                 jle 0x8b6232
// 008b622d  b8f5ffffff           mov eax, 0xfffffff5
// 008b6232  8906                 mov dword ptr [esi], eax
// 008b6234  8b9394000000         mov edx, dword ptr [ebx + 0x94]
// 008b623a  52                   push edx
// 008b623b  8d442458             lea eax, [esp + 0x58]
// 008b623f  50                   push eax
// 008b6240  e87b46f9ff           call 0x84a8c0
// 008b6245  83c408               add esp, 8
// 008b6248  8bc8                 mov ecx, eax
// 008b624a  ff1580de9800         call dword ptr [0x98de80]
// 008b6250  50                   push eax
// 008b6251  8d4e1c               lea ecx, [esi + 0x1c]
// 008b6254  6a20                 push 0x20
// 008b6256  51                   push ecx
// 008b6257  ffd7                 call edi
// 008b6259  83c40c               add esp, 0xc
// 008b625c  8d4c2454             lea ecx, [esp + 0x54]
// 008b6260  ff15c0de9800         call dword ptr [0x98dec0]
// 008b6266  8dbb8c000000         lea edi, [ebx + 0x8c]
// 008b626c  8bcf                 mov ecx, edi
// 008b626e  e8abdbf3ff           call 0x7f3e1e
// 008b6273  56                   push esi
// 008b6274  ff1528b19800         call dword ptr [0x98b128]
// 008b627a  50                   push eax
// 008b627b  8bcf                 mov ecx, edi
// 008b627d  e8a8dbf3ff           call 0x7f3e2a
// 008b6282  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008b6288  50                   push eax
// 008b6289  e89cd8f3ff           call 0x7f3b2a
// 008b628e  50                   push eax
// 008b628f  8d4c2430             lea ecx, [esp + 0x30]
// 008b6293  e8f2010700           call 0x92648a
// 008b6298  55                   push ebp
// 008b6299  8d542430             lea edx, [esp + 0x30]
// 008b629d  52                   push edx
// 008b629e  8d4c2424             lea ecx, [esp + 0x24]
// 008b62a2  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008b62aa  e8b153f9ff           call 0x84b660
// 008b62af  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008b62b3  8b356cb19800         mov esi, dword ptr [0x98b16c]
// 008b62b9  8d442414             lea eax, [esp + 0x14]
// 008b62bd  50                   push eax
// 008b62be  6a01                 push 1
// 008b62c0  6868619a00           push 0x9a6168
// 008b62c5  51                   push ecx
// 008b62c6  ffd6                 call esi
// 008b62c8  b80d000000           mov eax, 0xd
// 008b62cd  39442418             cmp dword ptr [esp + 0x18], eax
// 008b62d1  7c17                 jl 0x8b62ea
// 008b62d3  8b442434             mov eax, dword ptr [esp + 0x34]
// 008b62d7  8d542414             lea edx, [esp + 0x14]
// 008b62db  52                   push edx
// 008b62dc  6a01                 push 1
// 008b62de  6868619a00           push 0x9a6168
// 008b62e3  50                   push eax
// 008b62e4  ffd6                 call esi
// 008b62e6  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b62ea  8b4b7c               mov ecx, dword ptr [ebx + 0x7c]
// 008b62ed  03c8                 add ecx, eax
// 008b62ef  894b78               mov dword ptr [ebx + 0x78], ecx
// 008b62f2  8d4c241c             lea ecx, [esp + 0x1c]
// 008b62f6  e8e553f9ff           call 0x84b6e0
// 008b62fb  8d4c242c             lea ecx, [esp + 0x2c]
// 008b62ff  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008b6307  e878010700           call 0x926484
// 008b630c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008b6310  64890d00000000       mov dword ptr fs:[0], ecx
// 008b6317  59                   pop ecx
// 008b6318  5f                   pop edi
// 008b6319  5e                   pop esi
// 008b631a  5d                   pop ebp
// 008b631b  5b                   pop ebx
// 008b631c  83c438               add esp, 0x38
// 008b631f  c20800               ret 8
// copied from an identical function in another client (function ?SetCaptionFontIndirect@CXTPDockingPanePaintManager@@QAEXPAUtagLOGFONTA@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\DockingPane\XTPDockingPanePaintManager.cpp