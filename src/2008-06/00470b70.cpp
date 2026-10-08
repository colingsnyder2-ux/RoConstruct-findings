// from server: 100% by auto
// roc 2008-06 00470b70  unit: RBX::LDraw2Lua::LuaWriter  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00470b70
//
// 00470b70  6aff                 push -1
// 00470b72  6864417c00           push 0x7c4164
// 00470b77  64a100000000         mov eax, dword ptr fs:[0]
// 00470b7d  50                   push eax
// 00470b7e  64892500000000       mov dword ptr fs:[0], esp
// 00470b85  51                   push ecx
// 00470b86  56                   push esi
// 00470b87  8bf1                 mov esi, ecx
// 00470b89  57                   push edi
// 00470b8a  89742408             mov dword ptr [esp + 8], esi
// 00470b8e  8d7e04               lea edi, [esi + 4]
// 00470b91  8bcf                 mov ecx, edi
// 00470b93  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00470b9b  ff1560248000         call dword ptr [0x802460]
// 00470ba1  8d44241c             lea eax, [esp + 0x1c]
// 00470ba5  50                   push eax
// 00470ba6  8bcf                 mov ecx, edi
// 00470ba8  c644241801           mov byte ptr [esp + 0x18], 1
// 00470bad  ff150c248000         call dword ptr [0x80240c]
// 00470bb3  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 00470bb7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00470bbb  8b442440             mov eax, dword ptr [esp + 0x40]
// 00470bbf  884e20               mov byte ptr [esi + 0x20], cl
// 00470bc2  8d4c241c             lea ecx, [esp + 0x1c]
// 00470bc6  8916                 mov dword ptr [esi], edx
// 00470bc8  894624               mov dword ptr [esi + 0x24], eax
// 00470bcb  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00470bd3  ff1568248000         call dword ptr [0x802468]
// 00470bd9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00470bdd  5f                   pop edi
// 00470bde  8bc6                 mov eax, esi
// 00470be0  5e                   pop esi
// 00470be1  64890d00000000       mov dword ptr fs:[0], ecx
// 00470be8  83c410               add esp, 0x10
// 00470beb  c22800               ret 0x28
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NIPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
