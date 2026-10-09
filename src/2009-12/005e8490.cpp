// roc 2009-12 005e8490  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e8490
//
// 005e8490  53                   push ebx
// 005e8491  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e8495  55                   push ebp
// 005e8496  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005e849a  56                   push esi
// 005e849b  57                   push edi
// 005e849c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005e84a0  8d743f02             lea esi, [edi + edi + 2]
// 005e84a4  3bf3                 cmp esi, ebx
// 005e84a6  897c2418             mov dword ptr [esp + 0x18], edi
// 005e84aa  0f8d9f000000         jge 0x5e854f
// 005e84b0  8d04b6               lea eax, [esi + esi*4]
// 005e84b3  c1e004               shl eax, 4
// 005e84b6  03c5                 add eax, ebp
// 005e84b8  8d48b0               lea ecx, [eax - 0x50]
// 005e84bb  51                   push ecx
// 005e84bc  50                   push eax
// 005e84bd  ff542478             call dword ptr [esp + 0x78]
// 005e84c1  83c408               add esp, 8
// 005e84c4  84c0                 test al, al
// 005e84c6  7401                 je 0x5e84c9
// 005e84c8  4e                   dec esi
// 005e84c9  8d04b6               lea eax, [esi + esi*4]
// 005e84cc  c1e004               shl eax, 4
// 005e84cf  d90428               fld dword ptr [eax + ebp]
// 005e84d2  03c5                 add eax, ebp
// 005e84d4  8d0cbf               lea ecx, [edi + edi*4]
// 005e84d7  c1e104               shl ecx, 4
// 005e84da  d91c29               fstp dword ptr [ecx + ebp]
// 005e84dd  03cd                 add ecx, ebp
// 005e84df  d94004               fld dword ptr [eax + 4]
// 005e84e2  8bfe                 mov edi, esi
// 005e84e4  d95904               fstp dword ptr [ecx + 4]
// 005e84e7  8d743602             lea esi, [esi + esi + 2]
// 005e84eb  3bf3                 cmp esi, ebx
// 005e84ed  d94008               fld dword ptr [eax + 8]
// 005e84f0  d95908               fstp dword ptr [ecx + 8]
// 005e84f3  d9400c               fld dword ptr [eax + 0xc]
// 005e84f6  d9590c               fstp dword ptr [ecx + 0xc]
// 005e84f9  d94010               fld dword ptr [eax + 0x10]
// 005e84fc  d95910               fstp dword ptr [ecx + 0x10]
// 005e84ff  d94014               fld dword ptr [eax + 0x14]
// 005e8502  d95914               fstp dword ptr [ecx + 0x14]
// 005e8505  d94018               fld dword ptr [eax + 0x18]
// 005e8508  d95918               fstp dword ptr [ecx + 0x18]
// 005e850b  dd4020               fld qword ptr [eax + 0x20]
// 005e850e  dd5920               fstp qword ptr [ecx + 0x20]
// 005e8511  dd4028               fld qword ptr [eax + 0x28]
// 005e8514  dd5928               fstp qword ptr [ecx + 0x28]
// 005e8517  dd4030               fld qword ptr [eax + 0x30]
// 005e851a  dd5930               fstp qword ptr [ecx + 0x30]
// 005e851d  dd4038               fld qword ptr [eax + 0x38]
// 005e8520  dd5938               fstp qword ptr [ecx + 0x38]
// 005e8523  d94040               fld dword ptr [eax + 0x40]
// 005e8526  d95940               fstp dword ptr [ecx + 0x40]
// 005e8529  d94044               fld dword ptr [eax + 0x44]
// 005e852c  d95944               fstp dword ptr [ecx + 0x44]
// 005e852f  d94048               fld dword ptr [eax + 0x48]
// 005e8532  d95948               fstp dword ptr [ecx + 0x48]
// 005e8535  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 005e8539  88514c               mov byte ptr [ecx + 0x4c], dl
// 005e853c  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 005e8540  88514d               mov byte ptr [ecx + 0x4d], dl
// 005e8543  8a404e               mov al, byte ptr [eax + 0x4e]
// 005e8546  88414e               mov byte ptr [ecx + 0x4e], al
// 005e8549  0f8c61ffffff         jl 0x5e84b0
// 005e854f  751b                 jne 0x5e856c
// 005e8551  8d0c9b               lea ecx, [ebx + ebx*4]
// 005e8554  c1e104               shl ecx, 4
// 005e8557  8d5429b0             lea edx, [ecx + ebp - 0x50]
// 005e855b  8d0cbf               lea ecx, [edi + edi*4]
// 005e855e  c1e104               shl ecx, 4
// 005e8561  52                   push edx
// 005e8562  03cd                 add ecx, ebp
// 005e8564  e8a720eeff           call 0x4ca610
// 005e8569  8d7bff               lea edi, [ebx - 1]
// 005e856c  8b442470             mov eax, dword ptr [esp + 0x70]
// 005e8570  50                   push eax
// 005e8571  83ec50               sub esp, 0x50
// 005e8574  8d542474             lea edx, [esp + 0x74]
// 005e8578  8bcc                 mov ecx, esp
// 005e857a  52                   push edx
// 005e857b  e8b033eeff           call 0x4cb930
// 005e8580  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 005e8584  50                   push eax
// 005e8585  57                   push edi
// 005e8586  55                   push ebp
// 005e8587  e8f4faffff           call 0x5e8080
// 005e858c  83c460               add esp, 0x60
// 005e858f  5f                   pop edi
// 005e8590  5e                   pop esi
// 005e8591  5d                   pop ebp
// 005e8592  5b                   pop ebx
// 005e8593  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Adjust_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
