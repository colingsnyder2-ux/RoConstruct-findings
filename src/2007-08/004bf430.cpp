// roc 2007-08 004bf430  unit: RakPeer  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bf430
//
// 004bf430  83ec08               sub esp, 8
// 004bf433  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004bf437  53                   push ebx
// 004bf438  57                   push edi
// 004bf439  8bf9                 mov edi, ecx
// 004bf43b  50                   push eax
// 004bf43c  8d4c240c             lea ecx, [esp + 0xc]
// 004bf440  e84b41feff           call 0x4a3590
// 004bf445  668b4c2418           mov cx, word ptr [esp + 0x18]
// 004bf44a  8b442408             mov eax, dword ptr [esp + 8]
// 004bf44e  6a01                 push 1
// 004bf450  66894c2410           mov word ptr [esp + 0x10], cx
// 004bf455  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bf459  33db                 xor ebx, ebx
// 004bf45b  53                   push ebx
// 004bf45c  52                   push edx
// 004bf45d  50                   push eax
// 004bf45e  8bcf                 mov ecx, edi
// 004bf460  e81bd7ffff           call 0x4bcb80
// 004bf465  85c0                 test eax, eax
// 004bf467  740a                 je 0x4bf473
// 004bf469  5f                   pop edi
// 004bf46a  32c0                 xor al, al
// 004bf46c  5b                   pop ebx
// 004bf46d  83c408               add esp, 8
// 004bf470  c21400               ret 0x14
// 004bf473  81c7b4020000         add edi, 0x2b4
// 004bf479  56                   push esi
// 004bf47a  8bcf                 mov ecx, edi
// 004bf47c  e8cf9fffff           call 0x4b9450
// 004bf481  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bf485  8bf0                 mov esi, eax
// 004bf487  890e                 mov dword ptr [esi], ecx
// 004bf489  668b542410           mov dx, word ptr [esp + 0x10]
// 004bf48e  66895604             mov word ptr [esi + 4], dx
// 004bf492  e8d98affff           call 0x4b7f70
// 004bf497  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004bf49b  885e0c               mov byte ptr [esi + 0xc], bl
// 004bf49e  895e10               mov dword ptr [esi + 0x10], ebx
// 004bf4a1  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004bf4a5  53                   push ebx
// 004bf4a6  894608               mov dword ptr [esi + 8], eax
// 004bf4a9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004bf4ad  51                   push ecx
// 004bf4ae  8d5616               lea edx, [esi + 0x16]
// 004bf4b1  52                   push edx
// 004bf4b2  898618010000         mov dword ptr [esi + 0x118], eax
// 004bf4b8  c7861c01000001000000 mov dword ptr [esi + 0x11c], 1
// 004bf4c2  e885181700           call 0x630d4c
// 004bf4c7  889e16010000         mov byte ptr [esi + 0x116], bl
// 004bf4cd  8b470c               mov eax, dword ptr [edi + 0xc]
// 004bf4d0  83c40c               add esp, 0xc
// 004bf4d3  83471401             add dword ptr [edi + 0x14], 1
// 004bf4d7  c6802001000001       mov byte ptr [eax + 0x120], 1
// 004bf4de  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004bf4e1  8b9124010000         mov edx, dword ptr [ecx + 0x124]
// 004bf4e7  5e                   pop esi
// 004bf4e8  89570c               mov dword ptr [edi + 0xc], edx
// 004bf4eb  5f                   pop edi
// 004bf4ec  b001                 mov al, 1
// 004bf4ee  5b                   pop ebx
// 004bf4ef  83c408               add esp, 8
// 004bf4f2  c21400               ret 0x14
// library openrbx-raknet/RakPeer.cpp (function ?SendConnectionRequest@RakPeer@@IAE_NPBDG0HI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
