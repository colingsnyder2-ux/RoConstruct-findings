// roc 2008-06 004ce830  unit: RBX::Network::PhysicsSender  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce830
//
// 004ce830  83ec08               sub esp, 8
// 004ce833  53                   push ebx
// 004ce834  56                   push esi
// 004ce835  8b742414             mov esi, dword ptr [esp + 0x14]
// 004ce839  57                   push edi
// 004ce83a  8d44240c             lea eax, [esp + 0xc]
// 004ce83e  50                   push eax
// 004ce83f  8bf9                 mov edi, ecx
// 004ce841  8d4c2414             lea ecx, [esp + 0x14]
// 004ce845  51                   push ecx
// 004ce846  6a04                 push 4
// 004ce848  6a00                 push 0
// 004ce84a  56                   push esi
// 004ce84b  c744242004000000     mov dword ptr [esp + 0x20], 4
// 004ce853  ff15f42e8000         call dword ptr [0x802ef4]
// 004ce859  8b1db42e8000         mov ebx, dword ptr [0x802eb4]
// 004ce85f  6a04                 push 4
// 004ce861  8d54241c             lea edx, [esp + 0x1c]
// 004ce865  52                   push edx
// 004ce866  6a04                 push 4
// 004ce868  6a00                 push 0
// 004ce86a  56                   push esi
// 004ce86b  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 004ce873  ffd3                 call ebx
// 004ce875  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ce879  50                   push eax
// 004ce87a  ff15bc2e8000         call dword ptr [0x802ebc]
// 004ce880  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ce884  8b542420             mov edx, dword ptr [esp + 0x20]
// 004ce888  51                   push ecx
// 004ce889  50                   push eax
// 004ce88a  8b442424             mov eax, dword ptr [esp + 0x24]
// 004ce88e  52                   push edx
// 004ce88f  50                   push eax
// 004ce890  56                   push esi
// 004ce891  8bcf                 mov ecx, edi
// 004ce893  e8e8feffff           call 0x4ce780
// 004ce898  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ce89c  51                   push ecx
// 004ce89d  8d542414             lea edx, [esp + 0x14]
// 004ce8a1  52                   push edx
// 004ce8a2  6a04                 push 4
// 004ce8a4  6a00                 push 0
// 004ce8a6  56                   push esi
// 004ce8a7  8bf8                 mov edi, eax
// 004ce8a9  ffd3                 call ebx
// 004ce8ab  8bc7                 mov eax, edi
// 004ce8ad  5f                   pop edi
// 004ce8ae  5e                   pop esi
// 004ce8af  5b                   pop ebx
// 004ce8b0  83c408               add esp, 8
// 004ce8b3  c21400               ret 0x14
// library rbxgs-raknet/SocketLayer.cpp (function ?SendToTTL1@SocketLayer@@QAEHIPBDHQADG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
