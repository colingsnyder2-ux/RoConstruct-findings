// roc 2008-06 0066f790  unit: RBX::AssemblyStage  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066f790
//
// 0066f790  6aff                 push -1
// 0066f792  6843c77d00           push 0x7dc743
// 0066f797  64a100000000         mov eax, dword ptr fs:[0]
// 0066f79d  50                   push eax
// 0066f79e  64892500000000       mov dword ptr fs:[0], esp
// 0066f7a5  51                   push ecx
// 0066f7a6  56                   push esi
// 0066f7a7  8bf1                 mov esi, ecx
// 0066f7a9  89742404             mov dword ptr [esp + 4], esi
// 0066f7ad  c706a4d18400         mov dword ptr [esi], 0x84d1a4
// 0066f7b3  8d4e30               lea ecx, [esi + 0x30]
// 0066f7b6  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0066f7be  e86dbafdff           call 0x64b230
// 0066f7c3  8d4e10               lea ecx, [esi + 0x10]
// 0066f7c6  c644241000           mov byte ptr [esp + 0x10], 0
// 0066f7cb  e860bafdff           call 0x64b230
// 0066f7d0  8b4e08               mov ecx, dword ptr [esi + 8]
// 0066f7d3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0066f7db  5e                   pop esi
// 0066f7dc  85c9                 test ecx, ecx
// 0066f7de  7408                 je 0x66f7e8
// 0066f7e0  8b01                 mov eax, dword ptr [ecx]
// 0066f7e2  8b10                 mov edx, dword ptr [eax]
// 0066f7e4  6a01                 push 1
// 0066f7e6  ffd2                 call edx
// 0066f7e8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066f7ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0066f7f3  83c410               add esp, 0x10
// 0066f7f6  c3                   ret 
// library rbxgs/v8world\JointStage.cpp (function ??1JointStage@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
