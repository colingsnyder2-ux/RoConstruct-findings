// roc 2008-06 004ce780  unit: RBX::Network::PhysicsSender  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce780
//
// 004ce780  83ec10               sub esp, 0x10
// 004ce783  55                   push ebp
// 004ce784  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004ce788  83fdff               cmp ebp, -1
// 004ce78b  7509                 jne 0x4ce796
// 004ce78d  0bc5                 or eax, ebp
// 004ce78f  5d                   pop ebp
// 004ce790  83c410               add esp, 0x10
// 004ce793  c21400               ret 0x14
// 004ce796  8b442428             mov eax, dword ptr [esp + 0x28]
// 004ce79a  53                   push ebx
// 004ce79b  56                   push esi
// 004ce79c  57                   push edi
// 004ce79d  50                   push eax
// 004ce79e  ff15d42e8000         call dword ptr [0x802ed4]
// 004ce7a4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004ce7a8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004ce7ac  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004ce7b0  8b1df02e8000         mov ebx, dword ptr [0x802ef0]
// 004ce7b6  ba02000000           mov edx, 2
// 004ce7bb  6689442412           mov word ptr [esp + 0x12], ax
// 004ce7c0  894c2414             mov dword ptr [esp + 0x14], ecx
// 004ce7c4  6689542410           mov word ptr [esp + 0x10], dx
// 004ce7c9  8da42400000000       lea esp, [esp]
// 004ce7d0  6a10                 push 0x10
// 004ce7d2  8d442414             lea eax, [esp + 0x14]
// 004ce7d6  50                   push eax
// 004ce7d7  6a00                 push 0
// 004ce7d9  56                   push esi
// 004ce7da  57                   push edi
// 004ce7db  55                   push ebp
// 004ce7dc  ffd3                 call ebx
// 004ce7de  85c0                 test eax, eax
// 004ce7e0  74ee                 je 0x4ce7d0
// 004ce7e2  5f                   pop edi
// 004ce7e3  5e                   pop esi
// 004ce7e4  5b                   pop ebx
// 004ce7e5  83f8ff               cmp eax, -1
// 004ce7e8  7409                 je 0x4ce7f3
// 004ce7ea  33c0                 xor eax, eax
// 004ce7ec  5d                   pop ebp
// 004ce7ed  83c410               add esp, 0x10
// 004ce7f0  c21400               ret 0x14
// 004ce7f3  ff15ec2e8000         call dword ptr [0x802eec]
// 004ce7f9  5d                   pop ebp
// 004ce7fa  83c410               add esp, 0x10
// 004ce7fd  c21400               ret 0x14
// library rbxgs-raknet/SocketLayer.cpp (function ?SendTo@SocketLayer@@QAEHIPBDHIG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
