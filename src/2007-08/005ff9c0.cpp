// roc 2007-08 005ff9c0  unit: RBX::BallBallContact  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff9c0
//
// 005ff9c0  53                   push ebx
// 005ff9c1  56                   push esi
// 005ff9c2  57                   push edi
// 005ff9c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005ff9c7  8bd9                 mov ebx, ecx
// 005ff9c9  8b4f04               mov ecx, dword ptr [edi + 4]
// 005ff9cc  85c9                 test ecx, ecx
// 005ff9ce  7504                 jne 0x5ff9d4
// 005ff9d0  33c0                 xor eax, eax
// 005ff9d2  eb08                 jmp 0x5ff9dc
// 005ff9d4  8b4708               mov eax, dword ptr [edi + 8]
// 005ff9d7  2bc1                 sub eax, ecx
// 005ff9d9  c1f802               sar eax, 2
// 005ff9dc  6a01                 push 1
// 005ff9de  50                   push eax
// 005ff9df  8bcb                 mov ecx, ebx
// 005ff9e1  e83aa5f9ff           call 0x599f20
// 005ff9e6  33f6                 xor esi, esi
// 005ff9e8  397304               cmp dword ptr [ebx + 4], esi
// 005ff9eb  7e30                 jle 0x5ffa1d
// 005ff9ed  55                   push ebp
// 005ff9ee  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005ff9f4  8b4f04               mov ecx, dword ptr [edi + 4]
// 005ff9f7  85c9                 test ecx, ecx
// 005ff9f9  740c                 je 0x5ffa07
// 005ff9fb  8b4708               mov eax, dword ptr [edi + 8]
// 005ff9fe  2bc1                 sub eax, ecx
// 005ffa00  c1f802               sar eax, 2
// 005ffa03  3bf0                 cmp esi, eax
// 005ffa05  7202                 jb 0x5ffa09
// 005ffa07  ffd5                 call ebp
// 005ffa09  8b4704               mov eax, dword ptr [edi + 4]
// 005ffa0c  8b14b0               mov edx, dword ptr [eax + esi*4]
// 005ffa0f  8b0b                 mov ecx, dword ptr [ebx]
// 005ffa11  8914b1               mov dword ptr [ecx + esi*4], edx
// 005ffa14  83c601               add esi, 1
// 005ffa17  3b7304               cmp esi, dword ptr [ebx + 4]
// 005ffa1a  7cd8                 jl 0x5ff9f4
// 005ffa1c  5d                   pop ebp
// 005ffa1d  5f                   pop edi
// 005ffa1e  5e                   pop esi
// 005ffa1f  8bc3                 mov eax, ebx
// 005ffa21  5b                   pop ebx
// 005ffa22  c20400               ret 4
// library openrbx-client/App\v8world\ContactManager.cpp (function ??4?$Array@PBVPrimitive@RBX@@@G3D@@QAEAAV01@ABV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
