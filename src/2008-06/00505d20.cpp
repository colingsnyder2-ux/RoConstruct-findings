// roc 2008-06 00505d20  unit: RBX::Render::RenderScene  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505d20
//
// 00505d20  53                   push ebx
// 00505d21  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00505d25  55                   push ebp
// 00505d26  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00505d2a  56                   push esi
// 00505d2b  57                   push edi
// 00505d2c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00505d30  8d743f02             lea esi, [edi + edi + 2]
// 00505d34  3bf3                 cmp esi, ebx
// 00505d36  897c2418             mov dword ptr [esp + 0x18], edi
// 00505d3a  0f8d9f000000         jge 0x505ddf
// 00505d40  8d04b6               lea eax, [esi + esi*4]
// 00505d43  c1e004               shl eax, 4
// 00505d46  03c5                 add eax, ebp
// 00505d48  8d48b0               lea ecx, [eax - 0x50]
// 00505d4b  51                   push ecx
// 00505d4c  50                   push eax
// 00505d4d  ff542478             call dword ptr [esp + 0x78]
// 00505d51  83c408               add esp, 8
// 00505d54  84c0                 test al, al
// 00505d56  7401                 je 0x505d59
// 00505d58  4e                   dec esi
// 00505d59  8d04b6               lea eax, [esi + esi*4]
// 00505d5c  c1e004               shl eax, 4
// 00505d5f  d90428               fld dword ptr [eax + ebp]
// 00505d62  03c5                 add eax, ebp
// 00505d64  8d0cbf               lea ecx, [edi + edi*4]
// 00505d67  c1e104               shl ecx, 4
// 00505d6a  d91c29               fstp dword ptr [ecx + ebp]
// 00505d6d  03cd                 add ecx, ebp
// 00505d6f  d94004               fld dword ptr [eax + 4]
// 00505d72  8bfe                 mov edi, esi
// 00505d74  d95904               fstp dword ptr [ecx + 4]
// 00505d77  8d743602             lea esi, [esi + esi + 2]
// 00505d7b  3bf3                 cmp esi, ebx
// 00505d7d  d94008               fld dword ptr [eax + 8]
// 00505d80  d95908               fstp dword ptr [ecx + 8]
// 00505d83  d9400c               fld dword ptr [eax + 0xc]
// 00505d86  d9590c               fstp dword ptr [ecx + 0xc]
// 00505d89  d94010               fld dword ptr [eax + 0x10]
// 00505d8c  d95910               fstp dword ptr [ecx + 0x10]
// 00505d8f  d94014               fld dword ptr [eax + 0x14]
// 00505d92  d95914               fstp dword ptr [ecx + 0x14]
// 00505d95  d94018               fld dword ptr [eax + 0x18]
// 00505d98  d95918               fstp dword ptr [ecx + 0x18]
// 00505d9b  dd4020               fld qword ptr [eax + 0x20]
// 00505d9e  dd5920               fstp qword ptr [ecx + 0x20]
// 00505da1  dd4028               fld qword ptr [eax + 0x28]
// 00505da4  dd5928               fstp qword ptr [ecx + 0x28]
// 00505da7  dd4030               fld qword ptr [eax + 0x30]
// 00505daa  dd5930               fstp qword ptr [ecx + 0x30]
// 00505dad  dd4038               fld qword ptr [eax + 0x38]
// 00505db0  dd5938               fstp qword ptr [ecx + 0x38]
// 00505db3  d94040               fld dword ptr [eax + 0x40]
// 00505db6  d95940               fstp dword ptr [ecx + 0x40]
// 00505db9  d94044               fld dword ptr [eax + 0x44]
// 00505dbc  d95944               fstp dword ptr [ecx + 0x44]
// 00505dbf  d94048               fld dword ptr [eax + 0x48]
// 00505dc2  d95948               fstp dword ptr [ecx + 0x48]
// 00505dc5  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 00505dc9  88514c               mov byte ptr [ecx + 0x4c], dl
// 00505dcc  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 00505dd0  88514d               mov byte ptr [ecx + 0x4d], dl
// 00505dd3  8a404e               mov al, byte ptr [eax + 0x4e]
// 00505dd6  88414e               mov byte ptr [ecx + 0x4e], al
// 00505dd9  0f8c61ffffff         jl 0x505d40
// 00505ddf  751b                 jne 0x505dfc
// 00505de1  8d0c9b               lea ecx, [ebx + ebx*4]
// 00505de4  c1e104               shl ecx, 4
// 00505de7  8d5429b0             lea edx, [ecx + ebp - 0x50]
// 00505deb  8d0cbf               lea ecx, [edi + edi*4]
// 00505dee  c1e104               shl ecx, 4
// 00505df1  52                   push edx
// 00505df2  03cd                 add ecx, ebp
// 00505df4  e8a70bf7ff           call 0x4769a0
// 00505df9  8d7bff               lea edi, [ebx - 1]
// 00505dfc  8b442470             mov eax, dword ptr [esp + 0x70]
// 00505e00  50                   push eax
// 00505e01  83ec50               sub esp, 0x50
// 00505e04  8d542474             lea edx, [esp + 0x74]
// 00505e08  8bcc                 mov ecx, esp
// 00505e0a  52                   push edx
// 00505e0b  e8401ef7ff           call 0x477c50
// 00505e10  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00505e14  50                   push eax
// 00505e15  57                   push edi
// 00505e16  55                   push ebp
// 00505e17  e824fbffff           call 0x505940
// 00505e1c  83c460               add esp, 0x60
// 00505e1f  5f                   pop edi
// 00505e20  5e                   pop esi
// 00505e21  5d                   pop ebp
// 00505e22  5b                   pop ebx
// 00505e23  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Adjust_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
