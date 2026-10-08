// roc 2007-08 0060d960  unit: RBX::Block  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060d960
//
// 0060d960  83ec08               sub esp, 8
// 0060d963  53                   push ebx
// 0060d964  55                   push ebp
// 0060d965  56                   push esi
// 0060d966  57                   push edi
// 0060d967  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0060d96b  57                   push edi
// 0060d96c  8d442414             lea eax, [esp + 0x14]
// 0060d970  50                   push eax
// 0060d971  b9f47f8c00           mov ecx, 0x8c7ff4
// 0060d976  e815fbffff           call 0x60d490
// 0060d97b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0060d97f  85f6                 test esi, esi
// 0060d981  8b1df87f8c00         mov ebx, dword ptr [0x8c7ff8]
// 0060d987  7408                 je 0x60d991
// 0060d989  81fef47f8c00         cmp esi, 0x8c7ff4
// 0060d98f  7406                 je 0x60d997
// 0060d991  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060d997  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0060d99b  3beb                 cmp ebp, ebx
// 0060d99d  7420                 je 0x60d9bf
// 0060d99f  85f6                 test esi, esi
// 0060d9a1  7506                 jne 0x60d9a9
// 0060d9a3  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060d9a9  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0060d9ac  7506                 jne 0x60d9b4
// 0060d9ae  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060d9b4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0060d9b7  5f                   pop edi
// 0060d9b8  5e                   pop esi
// 0060d9b9  5d                   pop ebp
// 0060d9ba  5b                   pop ebx
// 0060d9bb  83c408               add esp, 8
// 0060d9be  c3                   ret 
// 0060d9bf  6a60                 push 0x60
// 0060d9c1  e830250200           call 0x62fef6
// 0060d9c6  83c404               add esp, 4
// 0060d9c9  85c0                 test eax, eax
// 0060d9cb  740c                 je 0x60d9d9
// 0060d9cd  57                   push edi
// 0060d9ce  8bc8                 mov ecx, eax
// 0060d9d0  e8fbf0ffff           call 0x60cad0
// 0060d9d5  8bf0                 mov esi, eax
// 0060d9d7  eb02                 jmp 0x60d9db
// 0060d9d9  33f6                 xor esi, esi
// 0060d9db  57                   push edi
// 0060d9dc  b9f47f8c00           mov ecx, 0x8c7ff4
// 0060d9e1  e8eafeffff           call 0x60d8d0
// 0060d9e6  5f                   pop edi
// 0060d9e7  8930                 mov dword ptr [eax], esi
// 0060d9e9  8bc6                 mov eax, esi
// 0060d9eb  5e                   pop esi
// 0060d9ec  5d                   pop ebp
// 0060d9ed  5b                   pop ebx
// 0060d9ee  83c408               add esp, 8
// 0060d9f1  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ?getVertices@BlockTemplate@RBX@@SAPBVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
