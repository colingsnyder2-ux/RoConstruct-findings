// roc 2007-08 004c48e0  unit: RakPeer  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c48e0
//
// 004c48e0  83ec08               sub esp, 8
// 004c48e3  53                   push ebx
// 004c48e4  56                   push esi
// 004c48e5  8b742414             mov esi, dword ptr [esp + 0x14]
// 004c48e9  57                   push edi
// 004c48ea  8d44240c             lea eax, [esp + 0xc]
// 004c48ee  50                   push eax
// 004c48ef  8bf9                 mov edi, ecx
// 004c48f1  8d4c2414             lea ecx, [esp + 0x14]
// 004c48f5  51                   push ecx
// 004c48f6  6a04                 push 4
// 004c48f8  6a00                 push 0
// 004c48fa  56                   push esi
// 004c48fb  c744242004000000     mov dword ptr [esp + 0x20], 4
// 004c4903  ff1560ef7700         call dword ptr [0x77ef60]
// 004c4909  8b1d4cef7700         mov ebx, dword ptr [0x77ef4c]
// 004c490f  6a04                 push 4
// 004c4911  8d54241c             lea edx, [esp + 0x1c]
// 004c4915  52                   push edx
// 004c4916  6a04                 push 4
// 004c4918  6a00                 push 0
// 004c491a  56                   push esi
// 004c491b  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 004c4923  ffd3                 call ebx
// 004c4925  8b442424             mov eax, dword ptr [esp + 0x24]
// 004c4929  50                   push eax
// 004c492a  ff1530ef7700         call dword ptr [0x77ef30]
// 004c4930  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c4934  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c4938  51                   push ecx
// 004c4939  50                   push eax
// 004c493a  8b442424             mov eax, dword ptr [esp + 0x24]
// 004c493e  52                   push edx
// 004c493f  50                   push eax
// 004c4940  56                   push esi
// 004c4941  8bcf                 mov ecx, edi
// 004c4943  e8b8feffff           call 0x4c4800
// 004c4948  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c494c  51                   push ecx
// 004c494d  8d542414             lea edx, [esp + 0x14]
// 004c4951  52                   push edx
// 004c4952  6a04                 push 4
// 004c4954  6a00                 push 0
// 004c4956  56                   push esi
// 004c4957  8bf8                 mov edi, eax
// 004c4959  ffd3                 call ebx
// 004c495b  8bc7                 mov eax, edi
// 004c495d  5f                   pop edi
// 004c495e  5e                   pop esi
// 004c495f  5b                   pop ebx
// 004c4960  83c408               add esp, 8
// 004c4963  c21400               ret 0x14
// library rbxgs-raknet/SocketLayer.cpp (function ?SendToTTL1@SocketLayer@@QAEHIPBDHQADG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
