// roc 2009-06 005694a0  unit: RBX::RbxG3D::RenderScene  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005694a0
//
// 005694a0  53                   push ebx
// 005694a1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005694a5  55                   push ebp
// 005694a6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005694aa  56                   push esi
// 005694ab  57                   push edi
// 005694ac  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005694b0  8d743f02             lea esi, [edi + edi + 2]
// 005694b4  3bf3                 cmp esi, ebx
// 005694b6  897c2418             mov dword ptr [esp + 0x18], edi
// 005694ba  0f8d9f000000         jge 0x56955f
// 005694c0  8d04b6               lea eax, [esi + esi*4]
// 005694c3  c1e004               shl eax, 4
// 005694c6  03c5                 add eax, ebp
// 005694c8  8d48b0               lea ecx, [eax - 0x50]
// 005694cb  51                   push ecx
// 005694cc  50                   push eax
// 005694cd  ff542478             call dword ptr [esp + 0x78]
// 005694d1  83c408               add esp, 8
// 005694d4  84c0                 test al, al
// 005694d6  7401                 je 0x5694d9
// 005694d8  4e                   dec esi
// 005694d9  8d04b6               lea eax, [esi + esi*4]
// 005694dc  c1e004               shl eax, 4
// 005694df  d90428               fld dword ptr [eax + ebp]
// 005694e2  03c5                 add eax, ebp
// 005694e4  8d0cbf               lea ecx, [edi + edi*4]
// 005694e7  c1e104               shl ecx, 4
// 005694ea  d91c29               fstp dword ptr [ecx + ebp]
// 005694ed  03cd                 add ecx, ebp
// 005694ef  d94004               fld dword ptr [eax + 4]
// 005694f2  8bfe                 mov edi, esi
// 005694f4  d95904               fstp dword ptr [ecx + 4]
// 005694f7  8d743602             lea esi, [esi + esi + 2]
// 005694fb  3bf3                 cmp esi, ebx
// 005694fd  d94008               fld dword ptr [eax + 8]
// 00569500  d95908               fstp dword ptr [ecx + 8]
// 00569503  d9400c               fld dword ptr [eax + 0xc]
// 00569506  d9590c               fstp dword ptr [ecx + 0xc]
// 00569509  d94010               fld dword ptr [eax + 0x10]
// 0056950c  d95910               fstp dword ptr [ecx + 0x10]
// 0056950f  d94014               fld dword ptr [eax + 0x14]
// 00569512  d95914               fstp dword ptr [ecx + 0x14]
// 00569515  d94018               fld dword ptr [eax + 0x18]
// 00569518  d95918               fstp dword ptr [ecx + 0x18]
// 0056951b  dd4020               fld qword ptr [eax + 0x20]
// 0056951e  dd5920               fstp qword ptr [ecx + 0x20]
// 00569521  dd4028               fld qword ptr [eax + 0x28]
// 00569524  dd5928               fstp qword ptr [ecx + 0x28]
// 00569527  dd4030               fld qword ptr [eax + 0x30]
// 0056952a  dd5930               fstp qword ptr [ecx + 0x30]
// 0056952d  dd4038               fld qword ptr [eax + 0x38]
// 00569530  dd5938               fstp qword ptr [ecx + 0x38]
// 00569533  d94040               fld dword ptr [eax + 0x40]
// 00569536  d95940               fstp dword ptr [ecx + 0x40]
// 00569539  d94044               fld dword ptr [eax + 0x44]
// 0056953c  d95944               fstp dword ptr [ecx + 0x44]
// 0056953f  d94048               fld dword ptr [eax + 0x48]
// 00569542  d95948               fstp dword ptr [ecx + 0x48]
// 00569545  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 00569549  88514c               mov byte ptr [ecx + 0x4c], dl
// 0056954c  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 00569550  88514d               mov byte ptr [ecx + 0x4d], dl
// 00569553  8a404e               mov al, byte ptr [eax + 0x4e]
// 00569556  88414e               mov byte ptr [ecx + 0x4e], al
// 00569559  0f8c61ffffff         jl 0x5694c0
// 0056955f  751b                 jne 0x56957c
// 00569561  8d0c9b               lea ecx, [ebx + ebx*4]
// 00569564  c1e104               shl ecx, 4
// 00569567  8d5429b0             lea edx, [ecx + ebp - 0x50]
// 0056956b  8d0cbf               lea ecx, [edi + edi*4]
// 0056956e  c1e104               shl ecx, 4
// 00569571  52                   push edx
// 00569572  03cd                 add ecx, ebp
// 00569574  e8974af3ff           call 0x49e010
// 00569579  8d7bff               lea edi, [ebx - 1]
// 0056957c  8b442470             mov eax, dword ptr [esp + 0x70]
// 00569580  50                   push eax
// 00569581  83ec50               sub esp, 0x50
// 00569584  8d542474             lea edx, [esp + 0x74]
// 00569588  8bcc                 mov ecx, esp
// 0056958a  52                   push edx
// 0056958b  e8305df3ff           call 0x49f2c0
// 00569590  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00569594  50                   push eax
// 00569595  57                   push edi
// 00569596  55                   push ebp
// 00569597  e824fbffff           call 0x5690c0
// 0056959c  83c460               add esp, 0x60
// 0056959f  5f                   pop edi
// 005695a0  5e                   pop esi
// 005695a1  5d                   pop ebp
// 005695a2  5b                   pop ebx
// 005695a3  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Adjust_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
