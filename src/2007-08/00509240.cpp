// roc 2007-08 00509240  unit: G3D::GCamera  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509240
//
// 00509240  6aff                 push -1
// 00509242  6812fb7400           push 0x74fb12
// 00509247  64a100000000         mov eax, dword ptr fs:[0]
// 0050924d  50                   push eax
// 0050924e  83ec3c               sub esp, 0x3c
// 00509251  a188518b00           mov eax, dword ptr [0x8b5188]
// 00509256  33c4                 xor eax, esp
// 00509258  89442438             mov dword ptr [esp + 0x38], eax
// 0050925c  56                   push esi
// 0050925d  a188518b00           mov eax, dword ptr [0x8b5188]
// 00509262  33c4                 xor eax, esp
// 00509264  50                   push eax
// 00509265  8d442444             lea eax, [esp + 0x44]
// 00509269  64a300000000         mov dword ptr fs:[0], eax
// 0050926f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00509273  8b442458             mov eax, dword ptr [esp + 0x58]
// 00509277  8b742454             mov esi, dword ptr [esp + 0x54]
// 0050927b  51                   push ecx
// 0050927c  50                   push eax
// 0050927d  8d44242c             lea eax, [esp + 0x2c]
// 00509281  50                   push eax
// 00509282  e8f983ffff           call 0x501680
// 00509287  83c40c               add esp, 0xc
// 0050928a  8d4c2408             lea ecx, [esp + 8]
// 0050928e  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00509296  ff15a4e67700         call dword ptr [0x77e6a4]
// 0050929c  8d4c2408             lea ecx, [esp + 8]
// 005092a0  51                   push ecx
// 005092a1  8d542428             lea edx, [esp + 0x28]
// 005092a5  52                   push edx
// 005092a6  8bce                 mov ecx, esi
// 005092a8  c644245401           mov byte ptr [esp + 0x54], 1
// 005092ad  e8eef6ffff           call 0x5089a0
// 005092b2  8d442408             lea eax, [esp + 8]
// 005092b6  50                   push eax
// 005092b7  8bce                 mov ecx, esi
// 005092b9  e812fcffff           call 0x508ed0
// 005092be  8d4c2408             lea ecx, [esp + 8]
// 005092c2  c644244c00           mov byte ptr [esp + 0x4c], 0
// 005092c7  ff15ace67700         call dword ptr [0x77e6ac]
// 005092cd  8d4c2424             lea ecx, [esp + 0x24]
// 005092d1  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 005092d9  ff15ace67700         call dword ptr [0x77e6ac]
// 005092df  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005092e3  64890d00000000       mov dword ptr fs:[0], ecx
// 005092ea  59                   pop ecx
// 005092eb  5e                   pop esi
// 005092ec  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005092f0  33cc                 xor ecx, esp
// 005092f2  e827771200           call 0x630a1e
// 005092f7  83c448               add esp, 0x48
// 005092fa  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?vprintf@TextOutput@G3D@@QAAXPBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
