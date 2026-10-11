// roc 2008-06 00572db0  unit: RBX::ServiceProvider  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572db0
//
// 00572db0  83ec08               sub esp, 8
// 00572db3  53                   push ebx
// 00572db4  55                   push ebp
// 00572db5  56                   push esi
// 00572db6  8bd9                 mov ebx, ecx
// 00572db8  8baba0010000         mov ebp, dword ptr [ebx + 0x1a0]
// 00572dbe  8db390010000         lea esi, [ebx + 0x190]
// 00572dc4  57                   push edi
// 00572dc5  396e0c               cmp dword ptr [esi + 0xc], ebp
// 00572dc8  7606                 jbe 0x572dd0
// 00572dca  ff1590288000         call dword ptr [0x802890]
// 00572dd0  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00572dd3  8b06                 mov eax, dword ptr [esi]
// 00572dd5  89442410             mov dword ptr [esp + 0x10], eax
// 00572dd9  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00572ddc  7606                 jbe 0x572de4
// 00572dde  ff1590288000         call dword ptr [0x802890]
// 00572de4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00572de8  8b06                 mov eax, dword ptr [esi]
// 00572dea  55                   push ebp
// 00572deb  51                   push ecx
// 00572dec  57                   push edi
// 00572ded  50                   push eax
// 00572dee  8d542420             lea edx, [esp + 0x20]
// 00572df2  52                   push edx
// 00572df3  8bce                 mov ecx, esi
// 00572df5  e886f3e9ff           call 0x412180
// 00572dfa  8b83c0010000         mov eax, dword ptr [ebx + 0x1c0]
// 00572e00  8b4804               mov ecx, dword ptr [eax + 4]
// 00572e03  8db3a8010000         lea esi, [ebx + 0x1a8]
// 00572e09  51                   push ecx
// 00572e0a  8bce                 mov ecx, esi
// 00572e0c  e86fdff3ff           call 0x4b0d80
// 00572e11  8b4618               mov eax, dword ptr [esi + 0x18]
// 00572e14  894004               mov dword ptr [eax + 4], eax
// 00572e17  8b4618               mov eax, dword ptr [esi + 0x18]
// 00572e1a  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00572e21  8900                 mov dword ptr [eax], eax
// 00572e23  8b7618               mov esi, dword ptr [esi + 0x18]
// 00572e26  5f                   pop edi
// 00572e27  897608               mov dword ptr [esi + 8], esi
// 00572e2a  5e                   pop esi
// 00572e2b  5d                   pop ebp
// 00572e2c  5b                   pop ebx
// 00572e2d  83c408               add esp, 8
// 00572e30  c3                   ret 
// library openrbx-client/App\v8tree\Service.cpp (function ?clearServices@ServiceProvider@RBX@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
