// roc 2012-06 005bc350  unit: RakNet::RakPeer  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc350
//
// 005bc350  53                   push ebx
// 005bc351  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005bc355  55                   push ebp
// 005bc356  56                   push esi
// 005bc357  57                   push edi
// 005bc358  33ff                 xor edi, edi
// 005bc35a  397b04               cmp dword ptr [ebx + 4], edi
// 005bc35d  0f86bc000000         jbe 0x5bc41f
// 005bc363  8b742418             mov esi, dword ptr [esp + 0x18]
// 005bc367  8b4630               mov eax, dword ptr [esi + 0x30]
// 005bc36a  0fb600               movzx eax, byte ptr [eax]
// 005bc36d  83c0f6               add eax, -0xa
// 005bc370  83f810               cmp eax, 0x10
// 005bc373  0f879c000000         ja 0x5bc415
// 005bc379  ff248528c45b00       jmp dword ptr [eax*4 + 0x5bc428]
// 005bc380  6a01                 push 1
// 005bc382  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005bc385  8b0b                 mov ecx, dword ptr [ebx]
// 005bc387  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 005bc38a  8b11                 mov edx, dword ptr [ecx]
// 005bc38c  83ec10               sub esp, 0x10
// 005bc38f  8bc4                 mov eax, esp
// 005bc391  8928                 mov dword ptr [eax], ebp
// 005bc393  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005bc396  896804               mov dword ptr [eax + 4], ebp
// 005bc399  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 005bc39c  896808               mov dword ptr [eax + 8], ebp
// 005bc39f  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 005bc3a2  89680c               mov dword ptr [eax + 0xc], ebp
// 005bc3a5  8b421c               mov eax, dword ptr [edx + 0x1c]
// 005bc3a8  56                   push esi
// 005bc3a9  ffd0                 call eax
// 005bc3ab  eb68                 jmp 0x5bc415
// 005bc3ad  6a02                 push 2
// 005bc3af  ebd1                 jmp 0x5bc382
// 005bc3b1  6a01                 push 1
// 005bc3b3  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005bc3b6  8b0b                 mov ecx, dword ptr [ebx]
// 005bc3b8  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 005bc3bb  8b11                 mov edx, dword ptr [ecx]
// 005bc3bd  83ec10               sub esp, 0x10
// 005bc3c0  8bc4                 mov eax, esp
// 005bc3c2  8928                 mov dword ptr [eax], ebp
// 005bc3c4  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005bc3c7  896804               mov dword ptr [eax + 4], ebp
// 005bc3ca  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 005bc3cd  896808               mov dword ptr [eax + 8], ebp
// 005bc3d0  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 005bc3d3  89680c               mov dword ptr [eax + 0xc], ebp
// 005bc3d6  8b4220               mov eax, dword ptr [edx + 0x20]
// 005bc3d9  56                   push esi
// 005bc3da  ffd0                 call eax
// 005bc3dc  eb37                 jmp 0x5bc415
// 005bc3de  6a00                 push 0
// 005bc3e0  ebd1                 jmp 0x5bc3b3
// 005bc3e2  6a00                 push 0
// 005bc3e4  eb22                 jmp 0x5bc408
// 005bc3e6  6a08                 push 8
// 005bc3e8  eb1e                 jmp 0x5bc408
// 005bc3ea  6a09                 push 9
// 005bc3ec  eb1a                 jmp 0x5bc408
// 005bc3ee  6a0a                 push 0xa
// 005bc3f0  eb16                 jmp 0x5bc408
// 005bc3f2  6a01                 push 1
// 005bc3f4  eb12                 jmp 0x5bc408
// 005bc3f6  6a02                 push 2
// 005bc3f8  eb0e                 jmp 0x5bc408
// 005bc3fa  6a04                 push 4
// 005bc3fc  eb0a                 jmp 0x5bc408
// 005bc3fe  6a05                 push 5
// 005bc400  eb06                 jmp 0x5bc408
// 005bc402  6a06                 push 6
// 005bc404  eb02                 jmp 0x5bc408
// 005bc406  6a07                 push 7
// 005bc408  8b0b                 mov ecx, dword ptr [ebx]
// 005bc40a  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 005bc40d  8b11                 mov edx, dword ptr [ecx]
// 005bc40f  8b4224               mov eax, dword ptr [edx + 0x24]
// 005bc412  56                   push esi
// 005bc413  ffd0                 call eax
// 005bc415  47                   inc edi
// 005bc416  3b7b04               cmp edi, dword ptr [ebx + 4]
// 005bc419  0f8248ffffff         jb 0x5bc367
// 005bc41f  5f                   pop edi
// 005bc420  5e                   pop esi
// 005bc421  5d                   pop ebp
// 005bc422  5b                   pop ebx
// 005bc423  c20800               ret 8
// 005bc426  8bff                 mov edi, edi
// 005bc428  e6c3                 out 0xc3, al
// 005bc42a  5b                   pop ebx
// 005bc42b  00ea                 add dl, ch
// 005bc42d  c3                   ret 
// 005bc42e  5b                   pop ebx
// 005bc42f  00ee                 add dh, ch
// 005bc431  c3                   ret 
// 005bc432  5b                   pop ebx
// 005bc433  0015c45b0015         add byte ptr [0x15005bc4], dl
// 005bc439  c45b00               les ebx, ptr [ebx]
// 005bc43c  15c45b00de           adc eax, 0xde005bc4
// 005bc441  c3                   ret 
// 005bc442  5b                   pop ebx
// 005bc443  00e2                 add dl, ah
// 005bc445  c3                   ret 
// 005bc446  5b                   pop ebx
// 005bc447  00f2                 add dl, dh
// 005bc449  c3                   ret 
// 005bc44a  5b                   pop ebx
// 005bc44b  00b1c35b00f6         add byte ptr [ecx - 0x9ffa43d], dh
// 005bc451  c3                   ret 
// 005bc452  5b                   pop ebx
// 005bc453  0080c35b00ad         add byte ptr [eax - 0x52ffa43d], al
// 005bc459  c3                   ret 
// 005bc45a  5b                   pop ebx
// 005bc45b  00fa                 add dl, bh
// 005bc45d  c3                   ret 
// 005bc45e  5b                   pop ebx
// 005bc45f  00fe                 add dh, bh
// 005bc461  c3                   ret 
// 005bc462  5b                   pop ebx
// 005bc463  0002                 add byte ptr [edx], al
// 005bc465  c45b00               les ebx, ptr [ebx]
// 005bc468  06                   push es
// 005bc469  c45b00               les ebx, ptr [ebx]
// library rbx2016-raknet/RakPeer.cpp (function ?CallPluginCallbacks@RakPeer@RakNet@@IAEXAAV?$List@PAVPluginInterface2@RakNet@@@DataStructures@@PAUPacket@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
