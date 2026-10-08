// roc 2008-06 005075f0  unit: G3D::Shader  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005075f0
//
// 005075f0  6aff                 push -1
// 005075f2  6853b97c00           push 0x7cb953
// 005075f7  64a100000000         mov eax, dword ptr fs:[0]
// 005075fd  50                   push eax
// 005075fe  64892500000000       mov dword ptr fs:[0], esp
// 00507605  51                   push ecx
// 00507606  56                   push esi
// 00507607  8bf1                 mov esi, ecx
// 00507609  89742404             mov dword ptr [esp + 4], esi
// 0050760d  8d4e18               lea ecx, [esi + 0x18]
// 00507610  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00507618  c701a4748200         mov dword ptr [ecx], 0x8274a4
// 0050761e  e87df5f7ff           call 0x486ba0
// 00507623  8b460c               mov eax, dword ptr [esi + 0xc]
// 00507626  c644241000           mov byte ptr [esp + 0x10], 0
// 0050762b  85c0                 test eax, eax
// 0050762d  742c                 je 0x50765b
// 0050762f  83c004               add eax, 4
// 00507632  50                   push eax
// 00507633  ff15ac218000         call dword ptr [0x8021ac]
// 00507639  85c0                 test eax, eax
// 0050763b  7517                 jne 0x507654
// 0050763d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00507640  e84b37f5ff           call 0x45ad90
// 00507645  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00507648  85c9                 test ecx, ecx
// 0050764a  7408                 je 0x507654
// 0050764c  8b01                 mov eax, dword ptr [ecx]
// 0050764e  8b10                 mov edx, dword ptr [eax]
// 00507650  6a01                 push 1
// 00507652  ffd2                 call edx
// 00507654  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0050765b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0050765f  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 00507665  5e                   pop esi
// 00507666  64890d00000000       mov dword ptr fs:[0], ecx
// 0050766d  83c410               add esp, 0x10
// 00507670  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ??1Shader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
