// roc 2007-08 004c9fc0  unit: seg_004c0000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c9fc0
//
// 004c9fc0  53                   push ebx
// 004c9fc1  57                   push edi
// 004c9fc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c9fc6  57                   push edi
// 004c9fc7  8bd9                 mov ebx, ecx
// 004c9fc9  e892ffffff           call 0x4c9f60
// 004c9fce  3cff                 cmp al, 0xff
// 004c9fd0  756e                 jne 0x4ca040
// 004c9fd2  56                   push esi
// 004c9fd3  6a0c                 push 0xc
// 004c9fd5  e81c5f1600           call 0x62fef6
// 004c9fda  8bf0                 mov esi, eax
// 004c9fdc  8bc7                 mov eax, edi
// 004c9fde  83c404               add esp, 4
// 004c9fe1  8d5001               lea edx, [eax + 1]
// 004c9fe4  8a08                 mov cl, byte ptr [eax]
// 004c9fe6  83c001               add eax, 1
// 004c9fe9  84c9                 test cl, cl
// 004c9feb  75f7                 jne 0x4c9fe4
// 004c9fed  2bc2                 sub eax, edx
// 004c9fef  83c001               add eax, 1
// 004c9ff2  50                   push eax
// 004c9ff3  e8fe5e1600           call 0x62fef6
// 004c9ff8  83c404               add esp, 4
// 004c9ffb  8906                 mov dword ptr [esi], eax
// 004c9ffd  8bcf                 mov ecx, edi
// 004c9fff  8bd0                 mov edx, eax
// 004ca001  8a01                 mov al, byte ptr [ecx]
// 004ca003  8802                 mov byte ptr [edx], al
// 004ca005  83c101               add ecx, 1
// 004ca008  83c201               add edx, 1
// 004ca00b  84c0                 test al, al
// 004ca00d  75f2                 jne 0x4ca001
// 004ca00f  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ca013  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 004ca017  894604               mov dword ptr [esi + 4], eax
// 004ca01a  884e08               mov byte ptr [esi + 8], cl
// 004ca01d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004ca020  33c0                 xor eax, eax
// 004ca022  85c9                 test ecx, ecx
// 004ca024  7611                 jbe 0x4ca037
// 004ca026  8b13                 mov edx, dword ptr [ebx]
// 004ca028  833a00               cmp dword ptr [edx], 0
// 004ca02b  7418                 je 0x4ca045
// 004ca02d  83c001               add eax, 1
// 004ca030  83c204               add edx, 4
// 004ca033  3bc1                 cmp eax, ecx
// 004ca035  72f1                 jb 0x4ca028
// 004ca037  56                   push esi
// 004ca038  8bcb                 mov ecx, ebx
// 004ca03a  e8a1f2feff           call 0x4b92e0
// 004ca03f  5e                   pop esi
// 004ca040  5f                   pop edi
// 004ca041  5b                   pop ebx
// 004ca042  c20c00               ret 0xc
// 004ca045  50                   push eax
// 004ca046  6a00                 push 0
// 004ca048  56                   push esi
// 004ca049  8bcb                 mov ecx, ebx
// 004ca04b  e8d0fdffff           call 0x4c9e20
// 004ca050  5e                   pop esi
// 004ca051  5f                   pop edi
// 004ca052  5b                   pop ebx
// 004ca053  c20c00               ret 0xc
// library rbxgs-raknet/RPCMap.cpp (function ?AddIdentifierWithFunction@RPCMap@@QAEXPBDPAX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
