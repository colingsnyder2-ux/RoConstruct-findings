// roc 2007-08 0056cd10  unit: RBX::Lua::FunctionRef  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056cd10
//
// 0056cd10  6aff                 push -1
// 0056cd12  68e8047500           push 0x7504e8
// 0056cd17  64a100000000         mov eax, dword ptr fs:[0]
// 0056cd1d  50                   push eax
// 0056cd1e  64892500000000       mov dword ptr fs:[0], esp
// 0056cd25  83ec08               sub esp, 8
// 0056cd28  53                   push ebx
// 0056cd29  56                   push esi
// 0056cd2a  57                   push edi
// 0056cd2b  8bf9                 mov edi, ecx
// 0056cd2d  8b5f04               mov ebx, dword ptr [edi + 4]
// 0056cd30  8bcb                 mov ecx, ebx
// 0056cd32  895c240c             mov dword ptr [esp + 0xc], ebx
// 0056cd36  e8158a1b00           call 0x725750
// 0056cd3b  c644241001           mov byte ptr [esp + 0x10], 1
// 0056cd40  8b37                 mov esi, dword ptr [edi]
// 0056cd42  85f6                 test esi, esi
// 0056cd44  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056cd4c  7418                 je 0x56cd66
// 0056cd4e  8bff                 mov edi, edi
// 0056cd50  8b06                 mov eax, dword ptr [esi]
// 0056cd52  8b10                 mov edx, dword ptr [eax]
// 0056cd54  8bce                 mov ecx, esi
// 0056cd56  ffd2                 call edx
// 0056cd58  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0056cd5f  8b7614               mov esi, dword ptr [esi + 0x14]
// 0056cd62  85f6                 test esi, esi
// 0056cd64  75ea                 jne 0x56cd50
// 0056cd66  8bcb                 mov ecx, ebx
// 0056cd68  c70700000000         mov dword ptr [edi], 0
// 0056cd6e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0056cd76  e8f5891b00           call 0x725770
// 0056cd7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056cd7f  5f                   pop edi
// 0056cd80  5e                   pop esi
// 0056cd81  5b                   pop ebx
// 0056cd82  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cd89  83c414               add esp, 0x14
// 0056cd8c  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?eraseAllRefs@Node@ThreadRef@Lua@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
