// roc 2009-06 006e9730  unit: RBX::PartDropTool  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9730
//
// 006e9730  51                   push ecx
// 006e9731  55                   push ebp
// 006e9732  57                   push edi
// 006e9733  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006e9736  8b4730               mov eax, dword ptr [edi + 0x30]
// 006e9739  8b28                 mov ebp, dword ptr [eax]
// 006e973b  3be8                 cmp ebp, eax
// 006e973d  7509                 jne 0x6e9748
// 006e973f  c7473000000000       mov dword ptr [edi + 0x30], 0
// 006e9746  eb05                 jmp 0x6e974d
// 006e9748  8b4d00               mov ecx, dword ptr [ebp]
// 006e974b  8908                 mov dword ptr [eax], ecx
// 006e974d  8b5770               mov edx, dword ptr [edi + 0x70]
// 006e9750  8b02                 mov eax, dword ptr [edx]
// 006e9752  894500               mov dword ptr [ebp], eax
// 006e9755  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 006e9758  8929                 mov dword ptr [ecx], ebp
// 006e975a  8a4505               mov al, byte ptr [ebp + 5]
// 006e975d  8a5714               mov dl, byte ptr [edi + 0x14]
// 006e9760  24f8                 and al, 0xf8
// 006e9762  80e203               and dl, 3
// 006e9765  0ad0                 or dl, al
// 006e9767  8b4508               mov eax, dword ptr [ebp + 8]
// 006e976a  885505               mov byte ptr [ebp + 5], dl
// 006e976d  85c0                 test eax, eax
// 006e976f  7479                 je 0x6e97ea
// 006e9771  f6400604             test byte ptr [eax + 6], 4
// 006e9775  7573                 jne 0x6e97ea
// 006e9777  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006e977a  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 006e9780  52                   push edx
// 006e9781  6a02                 push 2
// 006e9783  50                   push eax
// 006e9784  e877060000           call 0x6e9e00
// 006e9789  83c40c               add esp, 0xc
// 006e978c  85c0                 test eax, eax
// 006e978e  745a                 je 0x6e97ea
// 006e9790  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 006e9793  53                   push ebx
// 006e9794  8a5e39               mov bl, byte ptr [esi + 0x39]
// 006e9797  c6463900             mov byte ptr [esi + 0x39], 0
// 006e979b  8b5744               mov edx, dword ptr [edi + 0x44]
// 006e979e  03d2                 add edx, edx
// 006e97a0  895740               mov dword ptr [edi + 0x40], edx
// 006e97a3  8b10                 mov edx, dword ptr [eax]
// 006e97a5  894c240c             mov dword ptr [esp + 0xc], ecx
// 006e97a9  8b4e08               mov ecx, dword ptr [esi + 8]
// 006e97ac  8911                 mov dword ptr [ecx], edx
// 006e97ae  8b5004               mov edx, dword ptr [eax + 4]
// 006e97b1  895104               mov dword ptr [ecx + 4], edx
// 006e97b4  8b4008               mov eax, dword ptr [eax + 8]
// 006e97b7  894108               mov dword ptr [ecx + 8], eax
// 006e97ba  8b4608               mov eax, dword ptr [esi + 8]
// 006e97bd  83c010               add eax, 0x10
// 006e97c0  8928                 mov dword ptr [eax], ebp
// 006e97c2  c7400807000000       mov dword ptr [eax + 8], 7
// 006e97c9  83460820             add dword ptr [esi + 8], 0x20
// 006e97cd  8b4608               mov eax, dword ptr [esi + 8]
// 006e97d0  6a00                 push 0
// 006e97d2  83c0e0               add eax, -0x20
// 006e97d5  50                   push eax
// 006e97d6  56                   push esi
// 006e97d7  e8b49dfdff           call 0x6c3590
// 006e97dc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e97e0  83c40c               add esp, 0xc
// 006e97e3  885e39               mov byte ptr [esi + 0x39], bl
// 006e97e6  894f40               mov dword ptr [edi + 0x40], ecx
// 006e97e9  5b                   pop ebx
// 006e97ea  5f                   pop edi
// 006e97eb  5d                   pop ebp
// 006e97ec  59                   pop ecx
// 006e97ed  c3                   ret 
// library lua-5.1.4/lgc.c (function _GCTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
