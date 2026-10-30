// from server: 100% by auto
// roc 2008-06 0054da80  unit: RBX::RenderBase::Mesh  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054da80
//
// 0054da80  55                   push ebp
// 0054da81  8bec                 mov ebp, esp
// 0054da83  6aff                 push -1
// 0054da85  6860d57c00           push 0x7cd560
// 0054da8a  64a100000000         mov eax, dword ptr fs:[0]
// 0054da90  50                   push eax
// 0054da91  51                   push ecx
// 0054da92  83ec08               sub esp, 8
// 0054da95  53                   push ebx
// 0054da96  56                   push esi
// 0054da97  57                   push edi
// 0054da98  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0054da9d  33c5                 xor eax, ebp
// 0054da9f  50                   push eax
// 0054daa0  8d45f4               lea eax, [ebp - 0xc]
// 0054daa3  64a300000000         mov dword ptr fs:[0], eax
// 0054daa9  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054daac  894dec               mov dword ptr [ebp - 0x14], ecx
// 0054daaf  8b4508               mov eax, dword ptr [ebp + 8]
// 0054dab2  50                   push eax
// 0054dab3  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0054dab6  e825b0eeff           call 0x438ae0
// 0054dabb  0fb6c8               movzx ecx, al
// 0054dabe  85c9                 test ecx, ecx
// 0054dac0  7451                 je 0x54db13
// 0054dac2  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054dac9  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0054dacc  52                   push edx
// 0054dacd  8b4508               mov eax, dword ptr [ebp + 8]
// 0054dad0  50                   push eax
// 0054dad1  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0054dad4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0054dad7  52                   push edx
// 0054dad8  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0054dadb  e870e50100           call 0x56c050
// 0054dae0  8945e8               mov dword ptr [ebp - 0x18], eax
// 0054dae3  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0054dae6  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0054dae9  894810               mov dword ptr [eax + 0x10], ecx
// 0054daec  eb1e                 jmp 0x54db0c
// 0054daee  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0054daf1  e86a80efff           call 0x445b60
// 0054daf6  6a00                 push 0
// 0054daf8  6a00                 push 0
// 0054dafa  e88d3a1500           call 0x6a158c
// 0054daff  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0054db06  b813db5400           mov eax, 0x54db13
// 0054db0b  c3                   ret 
// 0054db0c  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0054db13  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054db16  64890d00000000       mov dword ptr fs:[0], ecx
// 0054db1d  59                   pop ecx
// 0054db1e  5f                   pop edi
// 0054db1f  5e                   pop esi
// 0054db20  5b                   pop ebx
// 0054db21  8be5                 mov esp, ebp
// 0054db23  5d                   pop ebp
// 0054db24  c20800               ret 8

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp
