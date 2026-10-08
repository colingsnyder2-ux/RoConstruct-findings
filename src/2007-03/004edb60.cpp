// roc 2007-03 004edb60  unit: seg_004e0000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004edb60
//
// 004edb60  53                   push ebx
// 004edb61  55                   push ebp
// 004edb62  56                   push esi
// 004edb63  8bf1                 mov esi, ecx
// 004edb65  57                   push edi
// 004edb66  8dbe68020000         lea edi, [esi + 0x268]
// 004edb6c  8bcf                 mov ecx, edi
// 004edb6e  e8fdf50000           call 0x4fd170
// 004edb73  6a00                 push 0
// 004edb75  8d5e0c               lea ebx, [esi + 0xc]
// 004edb78  6a00                 push 0
// 004edb7a  8bcb                 mov ecx, ebx
// 004edb7c  e8dfddffff           call 0x4eb960
// 004edb81  6a00                 push 0
// 004edb83  6a00                 push 0
// 004edb85  8d4e30               lea ecx, [esi + 0x30]
// 004edb88  e863ebffff           call 0x4ec6f0
// 004edb8d  6a00                 push 0
// 004edb8f  8d6e18               lea ebp, [esi + 0x18]
// 004edb92  6a00                 push 0
// 004edb94  8bcd                 mov ecx, ebp
// 004edb96  e8c5ddffff           call 0x4eb960
// 004edb9b  6a00                 push 0
// 004edb9d  8d4e24               lea ecx, [esi + 0x24]
// 004edba0  6a00                 push 0
// 004edba2  e8b9ddffff           call 0x4eb960
// 004edba7  6a00                 push 0
// 004edba9  6a00                 push 0
// 004edbab  8bce                 mov ecx, esi
// 004edbad  e83eebffff           call 0x4ec6f0
// 004edbb2  6a00                 push 0
// 004edbb4  6a00                 push 0
// 004edbb6  8d4e3c               lea ecx, [esi + 0x3c]
// 004edbb9  e8d255ffff           call 0x4e3190
// 004edbbe  8b442418             mov eax, dword ptr [esp + 0x18]
// 004edbc2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004edbc6  50                   push eax
// 004edbc7  51                   push ecx
// 004edbc8  8bce                 mov ecx, esi
// 004edbca  e881f7ffff           call 0x4ed350
// 004edbcf  8bce                 mov ecx, esi
// 004edbd1  e85ae9ffff           call 0x4ec530
// 004edbd6  8d8e60010000         lea ecx, [esi + 0x160]
// 004edbdc  e88ff50000           call 0x4fd170
// 004edbe1  53                   push ebx
// 004edbe2  e889320000           call 0x4f0e70
// 004edbe7  55                   push ebp
// 004edbe8  e8b3320000           call 0x4f0ea0
// 004edbed  8d4624               lea eax, [esi + 0x24]
// 004edbf0  50                   push eax
// 004edbf1  e8da320000           call 0x4f0ed0
// 004edbf6  83c40c               add esp, 0xc
// 004edbf9  8d8e60010000         lea ecx, [esi + 0x160]
// 004edbff  e87cf60000           call 0x4fd280
// 004edc04  8bcf                 mov ecx, edi
// 004edc06  e875f60000           call 0x4fd280
// 004edc0b  8b5610               mov edx, dword ptr [esi + 0x10]
// 004edc0e  5f                   pop edi
// 004edc0f  8996d0020000         mov dword ptr [esi + 0x2d0], edx
// 004edc15  5e                   pop esi
// 004edc16  5d                   pop ebp
// 004edc17  5b                   pop ebx
// 004edc18  c20800               ret 8
// library rbxgs-render/RenderScene.cpp (function ?computeProxyArrays@RenderScene@Render@RBX@@AAEXPAVRenderDevice@G3D@@ABVGCamera@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
