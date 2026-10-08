// roc 2007-08 00576db0  unit: RBX::PartInstance  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00576db0
//
// 00576db0  6aff                 push -1
// 00576db2  6843ab7500           push 0x75ab43
// 00576db7  64a100000000         mov eax, dword ptr fs:[0]
// 00576dbd  50                   push eax
// 00576dbe  64892500000000       mov dword ptr fs:[0], esp
// 00576dc5  83ec08               sub esp, 8
// 00576dc8  53                   push ebx
// 00576dc9  55                   push ebp
// 00576dca  56                   push esi
// 00576dcb  57                   push edi
// 00576dcc  68000d8a00           push 0x8a0d00
// 00576dd1  8bf1                 mov esi, ecx
// 00576dd3  683cac7a00           push 0x7aac3c
// 00576dd8  8974241c             mov dword ptr [esp + 0x1c], esi
// 00576ddc  e87f050100           call 0x587360
// 00576de1  8d5e28               lea ebx, [esi + 0x28]
// 00576de4  33ff                 xor edi, edi
// 00576de6  8bcb                 mov ecx, ebx
// 00576de8  897c2420             mov dword ptr [esp + 0x20], edi
// 00576dec  c70614ac7a00         mov dword ptr [esi], 0x7aac14
// 00576df2  e8b9c70000           call 0x5835b0
// 00576df7  894304               mov dword ptr [ebx + 4], eax
// 00576dfa  c6401501             mov byte ptr [eax + 0x15], 1
// 00576dfe  8b4304               mov eax, dword ptr [ebx + 4]
// 00576e01  894004               mov dword ptr [eax + 4], eax
// 00576e04  8b4304               mov eax, dword ptr [ebx + 4]
// 00576e07  8900                 mov dword ptr [eax], eax
// 00576e09  8b4304               mov eax, dword ptr [ebx + 4]
// 00576e0c  894008               mov dword ptr [eax + 8], eax
// 00576e0f  897b08               mov dword ptr [ebx + 8], edi
// 00576e12  8d6e34               lea ebp, [esi + 0x34]
// 00576e15  8bcd                 mov ecx, ebp
// 00576e17  c644242001           mov byte ptr [esp + 0x20], 1
// 00576e1c  e88fc70000           call 0x5835b0
// 00576e21  894504               mov dword ptr [ebp + 4], eax
// 00576e24  c6401501             mov byte ptr [eax + 0x15], 1
// 00576e28  8b4504               mov eax, dword ptr [ebp + 4]
// 00576e2b  894004               mov dword ptr [eax + 4], eax
// 00576e2e  8b4504               mov eax, dword ptr [ebp + 4]
// 00576e31  8900                 mov dword ptr [eax], eax
// 00576e33  8b4504               mov eax, dword ptr [ebp + 4]
// 00576e36  894008               mov dword ptr [eax + 8], eax
// 00576e39  897d08               mov dword ptr [ebp + 8], edi
// 00576e3c  897e44               mov dword ptr [esi + 0x44], edi
// 00576e3f  897e48               mov dword ptr [esi + 0x48], edi
// 00576e42  897e4c               mov dword ptr [esi + 0x4c], edi
// 00576e45  8d5e50               lea ebx, [esi + 0x50]
// 00576e48  8bcb                 mov ecx, ebx
// 00576e4a  c644242003           mov byte ptr [esp + 0x20], 3
// 00576e4f  e83c2a0000           call 0x579890
// 00576e54  894304               mov dword ptr [ebx + 4], eax
// 00576e57  c6402d01             mov byte ptr [eax + 0x2d], 1
// 00576e5b  8b4304               mov eax, dword ptr [ebx + 4]
// 00576e5e  894004               mov dword ptr [eax + 4], eax
// 00576e61  8b4304               mov eax, dword ptr [ebx + 4]
// 00576e64  8900                 mov dword ptr [eax], eax
// 00576e66  8b4304               mov eax, dword ptr [ebx + 4]
// 00576e69  894008               mov dword ptr [eax + 8], eax
// 00576e6c  897b08               mov dword ptr [ebx + 8], edi
// 00576e6f  8d5e5c               lea ebx, [esi + 0x5c]
// 00576e72  8bcb                 mov ecx, ebx
// 00576e74  c644242004           mov byte ptr [esp + 0x20], 4
// 00576e79  e8122a0000           call 0x579890
// 00576e7e  894304               mov dword ptr [ebx + 4], eax
// 00576e81  c6402d01             mov byte ptr [eax + 0x2d], 1
// 00576e85  8b4304               mov eax, dword ptr [ebx + 4]
// 00576e88  894004               mov dword ptr [eax + 4], eax
// 00576e8b  8b4304               mov eax, dword ptr [ebx + 4]
// 00576e8e  8900                 mov dword ptr [eax], eax
// 00576e90  8b4304               mov eax, dword ptr [ebx + 4]
// 00576e93  894008               mov dword ptr [eax + 8], eax
// 00576e96  897b08               mov dword ptr [ebx + 8], edi
// 00576e99  897e6c               mov dword ptr [esi + 0x6c], edi
// 00576e9c  897e70               mov dword ptr [esi + 0x70], edi
// 00576e9f  897e74               mov dword ptr [esi + 0x74], edi
// 00576ea2  897e7c               mov dword ptr [esi + 0x7c], edi
// 00576ea5  89be80000000         mov dword ptr [esi + 0x80], edi
// 00576eab  89be84000000         mov dword ptr [esi + 0x84], edi
// 00576eb1  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 00576eb7  89be90000000         mov dword ptr [esi + 0x90], edi
// 00576ebd  89be94000000         mov dword ptr [esi + 0x94], edi
// 00576ec3  6830ac7a00           push 0x7aac30
// 00576ec8  57                   push edi
// 00576ec9  8bce                 mov ecx, esi
// 00576ecb  c644242808           mov byte ptr [esp + 0x28], 8
// 00576ed0  e88bc10600           call 0x5e3060
// 00576ed5  6828ac7a00           push 0x7aac28
// 00576eda  6a01                 push 1
// 00576edc  8bce                 mov ecx, esi
// 00576ede  e87dc10600           call 0x5e3060
// 00576ee3  6820ac7a00           push 0x7aac20
// 00576ee8  6a02                 push 2
// 00576eea  8bce                 mov ecx, esi
// 00576eec  e86fc10600           call 0x5e3060
// 00576ef1  6aff                 push -1
// 00576ef3  6818ac7a00           push 0x7aac18
// 00576ef8  e8435afbff           call 0x52c940
// 00576efd  8bf8                 mov edi, eax
// 00576eff  83c408               add esp, 8
// 00576f02  8d442410             lea eax, [esp + 0x10]
// 00576f06  50                   push eax
// 00576f07  8bcd                 mov ecx, ebp
// 00576f09  897c2414             mov dword ptr [esp + 0x14], edi
// 00576f0d  e8ae420600           call 0x5db1c0
// 00576f12  83c704               add edi, 4
// 00576f15  57                   push edi
// 00576f16  8bcb                 mov ecx, ebx
// 00576f18  c70001000000         mov dword ptr [eax], 1
// 00576f1e  e87dc00600           call 0x5e2fa0
// 00576f23  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00576f27  5f                   pop edi
// 00576f28  c70001000000         mov dword ptr [eax], 1
// 00576f2e  8bc6                 mov eax, esi
// 00576f30  5e                   pop esi
// 00576f31  5d                   pop ebp
// 00576f32  5b                   pop ebx
// 00576f33  64890d00000000       mov dword ptr fs:[0], ecx
// 00576f3a  83c414               add esp, 0x14
// 00576f3d  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??0?$EnumDesc@W4FormFactor@PartInstance@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
