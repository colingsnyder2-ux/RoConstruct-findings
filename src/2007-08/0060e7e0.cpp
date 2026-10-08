// roc 2007-08 0060e7e0  unit: RBX::Ball  size: 522 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060e7e0
//
// 0060e7e0  6aff                 push -1
// 0060e7e2  6843ab7500           push 0x75ab43
// 0060e7e7  64a100000000         mov eax, dword ptr fs:[0]
// 0060e7ed  50                   push eax
// 0060e7ee  64892500000000       mov dword ptr fs:[0], esp
// 0060e7f5  83ec0c               sub esp, 0xc
// 0060e7f8  53                   push ebx
// 0060e7f9  55                   push ebp
// 0060e7fa  56                   push esi
// 0060e7fb  57                   push edi
// 0060e7fc  6870468b00           push 0x8b4670
// 0060e801  8bf1                 mov esi, ecx
// 0060e803  68d82f7c00           push 0x7c2fd8
// 0060e808  89742420             mov dword ptr [esp + 0x20], esi
// 0060e80c  e84f8bf7ff           call 0x587360
// 0060e811  8d7e28               lea edi, [esi + 0x28]
// 0060e814  33db                 xor ebx, ebx
// 0060e816  8bcf                 mov ecx, edi
// 0060e818  895c2424             mov dword ptr [esp + 0x24], ebx
// 0060e81c  c70624857b00         mov dword ptr [esi], 0x7b8524
// 0060e822  e8894df7ff           call 0x5835b0
// 0060e827  894704               mov dword ptr [edi + 4], eax
// 0060e82a  c6401501             mov byte ptr [eax + 0x15], 1
// 0060e82e  8b4704               mov eax, dword ptr [edi + 4]
// 0060e831  894004               mov dword ptr [eax + 4], eax
// 0060e834  8b4704               mov eax, dword ptr [edi + 4]
// 0060e837  8900                 mov dword ptr [eax], eax
// 0060e839  8b4704               mov eax, dword ptr [edi + 4]
// 0060e83c  894008               mov dword ptr [eax + 8], eax
// 0060e83f  895f08               mov dword ptr [edi + 8], ebx
// 0060e842  8d7e34               lea edi, [esi + 0x34]
// 0060e845  8bcf                 mov ecx, edi
// 0060e847  c644242401           mov byte ptr [esp + 0x24], 1
// 0060e84c  e85f4df7ff           call 0x5835b0
// 0060e851  894704               mov dword ptr [edi + 4], eax
// 0060e854  c6401501             mov byte ptr [eax + 0x15], 1
// 0060e858  8b4704               mov eax, dword ptr [edi + 4]
// 0060e85b  894004               mov dword ptr [eax + 4], eax
// 0060e85e  8b4704               mov eax, dword ptr [edi + 4]
// 0060e861  8900                 mov dword ptr [eax], eax
// 0060e863  8b4704               mov eax, dword ptr [edi + 4]
// 0060e866  894008               mov dword ptr [eax + 8], eax
// 0060e869  895f08               mov dword ptr [edi + 8], ebx
// 0060e86c  895e44               mov dword ptr [esi + 0x44], ebx
// 0060e86f  895e48               mov dword ptr [esi + 0x48], ebx
// 0060e872  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0060e875  8d6e50               lea ebp, [esi + 0x50]
// 0060e878  8bcd                 mov ecx, ebp
// 0060e87a  c644242403           mov byte ptr [esp + 0x24], 3
// 0060e87f  e80cb0f6ff           call 0x579890
// 0060e884  894504               mov dword ptr [ebp + 4], eax
// 0060e887  c6402d01             mov byte ptr [eax + 0x2d], 1
// 0060e88b  8b4504               mov eax, dword ptr [ebp + 4]
// 0060e88e  894004               mov dword ptr [eax + 4], eax
// 0060e891  8b4504               mov eax, dword ptr [ebp + 4]
// 0060e894  8900                 mov dword ptr [eax], eax
// 0060e896  8b4504               mov eax, dword ptr [ebp + 4]
// 0060e899  894008               mov dword ptr [eax + 8], eax
// 0060e89c  895d08               mov dword ptr [ebp + 8], ebx
// 0060e89f  8d6e5c               lea ebp, [esi + 0x5c]
// 0060e8a2  8bcd                 mov ecx, ebp
// 0060e8a4  c644242404           mov byte ptr [esp + 0x24], 4
// 0060e8a9  e8e2aff6ff           call 0x579890
// 0060e8ae  894504               mov dword ptr [ebp + 4], eax
// 0060e8b1  c6402d01             mov byte ptr [eax + 0x2d], 1
// 0060e8b5  8b4504               mov eax, dword ptr [ebp + 4]
// 0060e8b8  894004               mov dword ptr [eax + 4], eax
// 0060e8bb  8b4504               mov eax, dword ptr [ebp + 4]
// 0060e8be  8900                 mov dword ptr [eax], eax
// 0060e8c0  8b4504               mov eax, dword ptr [ebp + 4]
// 0060e8c3  894008               mov dword ptr [eax + 8], eax
// 0060e8c6  895d08               mov dword ptr [ebp + 8], ebx
// 0060e8c9  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0060e8cc  895e70               mov dword ptr [esi + 0x70], ebx
// 0060e8cf  895e74               mov dword ptr [esi + 0x74], ebx
// 0060e8d2  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0060e8d5  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0060e8db  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0060e8e1  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0060e8e7  899e90000000         mov dword ptr [esi + 0x90], ebx
// 0060e8ed  899e94000000         mov dword ptr [esi + 0x94], ebx
// 0060e8f3  68d02f7c00           push 0x7c2fd0
// 0060e8f8  53                   push ebx
// 0060e8f9  8bce                 mov ecx, esi
// 0060e8fb  c644242c08           mov byte ptr [esp + 0x2c], 8
// 0060e900  e85b47fdff           call 0x5e3060
// 0060e905  68d82d7c00           push 0x7c2dd8
// 0060e90a  6a01                 push 1
// 0060e90c  8bce                 mov ecx, esi
// 0060e90e  e84d47fdff           call 0x5e3060
// 0060e913  68d02d7c00           push 0x7c2dd0
// 0060e918  6a02                 push 2
// 0060e91a  8bce                 mov ecx, esi
// 0060e91c  e83f47fdff           call 0x5e3060
// 0060e921  68c82f7c00           push 0x7c2fc8
// 0060e926  6a03                 push 3
// 0060e928  8bce                 mov ecx, esi
// 0060e92a  e83147fdff           call 0x5e3060
// 0060e92f  68c02f7c00           push 0x7c2fc0
// 0060e934  6a04                 push 4
// 0060e936  8bce                 mov ecx, esi
// 0060e938  e82347fdff           call 0x5e3060
// 0060e93d  6aff                 push -1
// 0060e93f  68b82f7c00           push 0x7c2fb8
// 0060e944  e8f7dff1ff           call 0x52c940
// 0060e949  8944241c             mov dword ptr [esp + 0x1c], eax
// 0060e94d  89442418             mov dword ptr [esp + 0x18], eax
// 0060e951  83c408               add esp, 8
// 0060e954  8d442410             lea eax, [esp + 0x10]
// 0060e958  50                   push eax
// 0060e959  8bcf                 mov ecx, edi
// 0060e95b  e860c8fcff           call 0x5db1c0
// 0060e960  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060e964  83c104               add ecx, 4
// 0060e967  51                   push ecx
// 0060e968  8bcd                 mov ecx, ebp
// 0060e96a  8918                 mov dword ptr [eax], ebx
// 0060e96c  e82f46fdff           call 0x5e2fa0
// 0060e971  68b02f7c00           push 0x7c2fb0
// 0060e976  6a06                 push 6
// 0060e978  8bce                 mov ecx, esi
// 0060e97a  8918                 mov dword ptr [eax], ebx
// 0060e97c  e8df46fdff           call 0x5e3060
// 0060e981  68c07d7b00           push 0x7b7dc0
// 0060e986  6a07                 push 7
// 0060e988  8bce                 mov ecx, esi
// 0060e98a  e8d146fdff           call 0x5e3060
// 0060e98f  68a02f7c00           push 0x7c2fa0
// 0060e994  6a08                 push 8
// 0060e996  8bce                 mov ecx, esi
// 0060e998  e8c346fdff           call 0x5e3060
// 0060e99d  6aff                 push -1
// 0060e99f  68982f7c00           push 0x7c2f98
// 0060e9a4  e897dff1ff           call 0x52c940
// 0060e9a9  83c408               add esp, 8
// 0060e9ac  8d542414             lea edx, [esp + 0x14]
// 0060e9b0  8bd8                 mov ebx, eax
// 0060e9b2  52                   push edx
// 0060e9b3  8bcf                 mov ecx, edi
// 0060e9b5  895c2418             mov dword ptr [esp + 0x18], ebx
// 0060e9b9  e802c8fcff           call 0x5db1c0
// 0060e9be  83c304               add ebx, 4
// 0060e9c1  53                   push ebx
// 0060e9c2  8bcd                 mov ecx, ebp
// 0060e9c4  c70001000000         mov dword ptr [eax], 1
// 0060e9ca  e8d145fdff           call 0x5e2fa0
// 0060e9cf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060e9d3  5f                   pop edi
// 0060e9d4  c70001000000         mov dword ptr [eax], 1
// 0060e9da  8bc6                 mov eax, esi
// 0060e9dc  5e                   pop esi
// 0060e9dd  5d                   pop ebp
// 0060e9de  5b                   pop ebx
// 0060e9df  64890d00000000       mov dword ptr fs:[0], ecx
// 0060e9e6  83c418               add esp, 0x18
// 0060e9e9  c3                   ret 
// library rbxgs/v8world\MacroTypes.cpp (function ??0?$EnumDesc@W4SurfaceType@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MacroTypes.cpp
