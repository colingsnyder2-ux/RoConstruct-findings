// roc 2008-06 004ce8c0  unit: RBX::Network::PhysicsSender  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce8c0
//
// 004ce8c0  83ec50               sub esp, 0x50
// 004ce8c3  6a50                 push 0x50
// 004ce8c5  8d442404             lea eax, [esp + 4]
// 004ce8c9  50                   push eax
// 004ce8ca  ff15f82e8000         call dword ptr [0x802ef8]
// 004ce8d0  83f8ff               cmp eax, -1
// 004ce8d3  7458                 je 0x4ce92d
// 004ce8d5  53                   push ebx
// 004ce8d6  8d4c2404             lea ecx, [esp + 4]
// 004ce8da  51                   push ecx
// 004ce8db  ff15e42e8000         call dword ptr [0x802ee4]
// 004ce8e1  8bd8                 mov ebx, eax
// 004ce8e3  85db                 test ebx, ebx
// 004ce8e5  7445                 je 0x4ce92c
// 004ce8e7  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004ce8ea  833800               cmp dword ptr [eax], 0
// 004ce8ed  743d                 je 0x4ce92c
// 004ce8ef  55                   push ebp
// 004ce8f0  8b2db82e8000         mov ebp, dword ptr [0x802eb8]
// 004ce8f6  56                   push esi
// 004ce8f7  57                   push edi
// 004ce8f8  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 004ce8fc  33f6                 xor esi, esi
// 004ce8fe  8bff                 mov edi, edi
// 004ce900  83fe28               cmp esi, 0x28
// 004ce903  7d24                 jge 0x4ce929
// 004ce905  8b1406               mov edx, dword ptr [esi + eax]
// 004ce908  8b02                 mov eax, dword ptr [edx]
// 004ce90a  50                   push eax
// 004ce90b  ffd5                 call ebp
// 004ce90d  8bd7                 mov edx, edi
// 004ce90f  90                   nop 
// 004ce910  8a08                 mov cl, byte ptr [eax]
// 004ce912  880a                 mov byte ptr [edx], cl
// 004ce914  40                   inc eax
// 004ce915  42                   inc edx
// 004ce916  84c9                 test cl, cl
// 004ce918  75f6                 jne 0x4ce910
// 004ce91a  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004ce91d  83c604               add esi, 4
// 004ce920  83c710               add edi, 0x10
// 004ce923  833c0600             cmp dword ptr [esi + eax], 0
// 004ce927  75d7                 jne 0x4ce900
// 004ce929  5f                   pop edi
// 004ce92a  5e                   pop esi
// 004ce92b  5d                   pop ebp
// 004ce92c  5b                   pop ebx
// 004ce92d  83c450               add esp, 0x50
// 004ce930  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?GetMyIP@SocketLayer@@QAEXQAY0BA@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
