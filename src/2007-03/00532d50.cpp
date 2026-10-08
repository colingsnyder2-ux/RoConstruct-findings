// roc 2007-03 00532d50  unit: seg_00530000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00532d50
//
// 00532d50  6aff                 push -1
// 00532d52  6820937500           push 0x759320
// 00532d57  64a100000000         mov eax, dword ptr fs:[0]
// 00532d5d  50                   push eax
// 00532d5e  64892500000000       mov dword ptr fs:[0], esp
// 00532d65  83ec14               sub esp, 0x14
// 00532d68  53                   push ebx
// 00532d69  55                   push ebp
// 00532d6a  56                   push esi
// 00532d6b  8bf1                 mov esi, ecx
// 00532d6d  57                   push edi
// 00532d6e  89742410             mov dword ptr [esp + 0x10], esi
// 00532d72  e8a9f7ffff           call 0x532520
// 00532d77  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00532d7b  51                   push ecx
// 00532d7c  50                   push eax
// 00532d7d  8bce                 mov ecx, esi
// 00532d7f  e8acd50300           call 0x570330
// 00532d84  8b542438             mov edx, dword ptr [esp + 0x38]
// 00532d88  6aff                 push -1
// 00532d8a  52                   push edx
// 00532d8b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00532d93  c706d04f7a00         mov dword ptr [esi], 0x7a4fd0
// 00532d99  e842abffff           call 0x52d8e0
// 00532d9e  83c408               add esp, 8
// 00532da1  89442414             mov dword ptr [esp + 0x14], eax
// 00532da5  e806a50300           call 0x56d2b0
// 00532daa  8d4c241c             lea ecx, [esp + 0x1c]
// 00532dae  89442418             mov dword ptr [esp + 0x18], eax
// 00532db2  e899a00300           call 0x56ce50
// 00532db7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00532dba  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00532dbd  8d7e18               lea edi, [esi + 0x18]
// 00532dc0  8d442414             lea eax, [esp + 0x14]
// 00532dc4  50                   push eax
// 00532dc5  51                   push ecx
// 00532dc6  55                   push ebp
// 00532dc7  8bcf                 mov ecx, edi
// 00532dc9  c644243801           mov byte ptr [esp + 0x38], 1
// 00532dce  e8cd34eeff           call 0x4162a0
// 00532dd3  6a01                 push 1
// 00532dd5  8bcf                 mov ecx, edi
// 00532dd7  8bd8                 mov ebx, eax
// 00532dd9  e8a228eeff           call 0x415680
// 00532dde  895d04               mov dword ptr [ebp + 4], ebx
// 00532de1  8b4304               mov eax, dword ptr [ebx + 4]
// 00532de4  8918                 mov dword ptr [eax], ebx
// 00532de6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532dea  85c9                 test ecx, ecx
// 00532dec  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00532df1  7408                 je 0x532dfb
// 00532df3  8b11                 mov edx, dword ptr [ecx]
// 00532df5  8b02                 mov eax, dword ptr [edx]
// 00532df7  6a01                 push 1
// 00532df9  ffd0                 call eax
// 00532dfb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00532dff  5f                   pop edi
// 00532e00  8bc6                 mov eax, esi
// 00532e02  5e                   pop esi
// 00532e03  5d                   pop ebp
// 00532e04  5b                   pop ebx
// 00532e05  64890d00000000       mov dword ptr fs:[0], ecx
// 00532e0c  83c420               add esp, 0x20
// 00532e0f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
