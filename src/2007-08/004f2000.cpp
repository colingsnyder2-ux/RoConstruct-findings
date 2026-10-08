// roc 2007-08 004f2000  unit: RBX::Render::AggregatingSceneManager  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f2000
//
// 004f2000  83ec08               sub esp, 8
// 004f2003  56                   push esi
// 004f2004  8bf1                 mov esi, ecx
// 004f2006  8b5604               mov edx, dword ptr [esi + 4]
// 004f2009  85d2                 test edx, edx
// 004f200b  57                   push edi
// 004f200c  7504                 jne 0x4f2012
// 004f200e  33c9                 xor ecx, ecx
// 004f2010  eb08                 jmp 0x4f201a
// 004f2012  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f2015  2bca                 sub ecx, edx
// 004f2017  c1f902               sar ecx, 2
// 004f201a  85d2                 test edx, edx
// 004f201c  743d                 je 0x4f205b
// 004f201e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004f2021  2bc2                 sub eax, edx
// 004f2023  c1f802               sar eax, 2
// 004f2026  3bc8                 cmp ecx, eax
// 004f2028  7331                 jae 0x4f205b
// 004f202a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f202e  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f2032  8b7e08               mov edi, dword ptr [esi + 8]
// 004f2035  c644240800           mov byte ptr [esp + 8], 0
// 004f203a  8b442408             mov eax, dword ptr [esp + 8]
// 004f203e  50                   push eax
// 004f203f  51                   push ecx
// 004f2040  56                   push esi
// 004f2041  52                   push edx
// 004f2042  6a01                 push 1
// 004f2044  57                   push edi
// 004f2045  e876deffff           call 0x4efec0
// 004f204a  83c418               add esp, 0x18
// 004f204d  83c704               add edi, 4
// 004f2050  897e08               mov dword ptr [esi + 8], edi
// 004f2053  5f                   pop edi
// 004f2054  5e                   pop esi
// 004f2055  83c408               add esp, 8
// 004f2058  c20400               ret 4
// 004f205b  8b7e08               mov edi, dword ptr [esi + 8]
// 004f205e  3bd7                 cmp edx, edi
// 004f2060  7606                 jbe 0x4f2068
// 004f2062  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f2068  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f206c  50                   push eax
// 004f206d  57                   push edi
// 004f206e  56                   push esi
// 004f206f  8d4c2414             lea ecx, [esp + 0x14]
// 004f2073  51                   push ecx
// 004f2074  8bce                 mov ecx, esi
// 004f2076  e885fbffff           call 0x4f1c00
// 004f207b  5f                   pop edi
// 004f207c  5e                   pop esi
// 004f207d  83c408               add esp, 8
// 004f2080  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?push_back@?$vector@W4CameraType@Camera@RBX@@V?$allocator@W4CameraType@Camera@RBX@@@std@@@std@@QAEXABW4CameraType@Camera@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
