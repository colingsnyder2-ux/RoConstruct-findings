// roc 2010-06 0054ba60  unit: RBX::AggregateChunk  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054ba60
//
// 0054ba60  53                   push ebx
// 0054ba61  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0054ba65  55                   push ebp
// 0054ba66  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0054ba6a  56                   push esi
// 0054ba6b  57                   push edi
// 0054ba6c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0054ba70  8d743f02             lea esi, [edi + edi + 2]
// 0054ba74  3bf3                 cmp esi, ebx
// 0054ba76  897c2418             mov dword ptr [esp + 0x18], edi
// 0054ba7a  0f8d9f000000         jge 0x54bb1f
// 0054ba80  8d04b6               lea eax, [esi + esi*4]
// 0054ba83  c1e004               shl eax, 4
// 0054ba86  03c5                 add eax, ebp
// 0054ba88  8d48b0               lea ecx, [eax - 0x50]
// 0054ba8b  51                   push ecx
// 0054ba8c  50                   push eax
// 0054ba8d  ff542478             call dword ptr [esp + 0x78]
// 0054ba91  83c408               add esp, 8
// 0054ba94  84c0                 test al, al
// 0054ba96  7401                 je 0x54ba99
// 0054ba98  4e                   dec esi
// 0054ba99  8d04b6               lea eax, [esi + esi*4]
// 0054ba9c  c1e004               shl eax, 4
// 0054ba9f  d90428               fld dword ptr [eax + ebp]
// 0054baa2  03c5                 add eax, ebp
// 0054baa4  8d0cbf               lea ecx, [edi + edi*4]
// 0054baa7  c1e104               shl ecx, 4
// 0054baaa  d91c29               fstp dword ptr [ecx + ebp]
// 0054baad  03cd                 add ecx, ebp
// 0054baaf  d94004               fld dword ptr [eax + 4]
// 0054bab2  8bfe                 mov edi, esi
// 0054bab4  d95904               fstp dword ptr [ecx + 4]
// 0054bab7  8d743602             lea esi, [esi + esi + 2]
// 0054babb  3bf3                 cmp esi, ebx
// 0054babd  d94008               fld dword ptr [eax + 8]
// 0054bac0  d95908               fstp dword ptr [ecx + 8]
// 0054bac3  d9400c               fld dword ptr [eax + 0xc]
// 0054bac6  d9590c               fstp dword ptr [ecx + 0xc]
// 0054bac9  d94010               fld dword ptr [eax + 0x10]
// 0054bacc  d95910               fstp dword ptr [ecx + 0x10]
// 0054bacf  d94014               fld dword ptr [eax + 0x14]
// 0054bad2  d95914               fstp dword ptr [ecx + 0x14]
// 0054bad5  d94018               fld dword ptr [eax + 0x18]
// 0054bad8  d95918               fstp dword ptr [ecx + 0x18]
// 0054badb  dd4020               fld qword ptr [eax + 0x20]
// 0054bade  dd5920               fstp qword ptr [ecx + 0x20]
// 0054bae1  dd4028               fld qword ptr [eax + 0x28]
// 0054bae4  dd5928               fstp qword ptr [ecx + 0x28]
// 0054bae7  dd4030               fld qword ptr [eax + 0x30]
// 0054baea  dd5930               fstp qword ptr [ecx + 0x30]
// 0054baed  dd4038               fld qword ptr [eax + 0x38]
// 0054baf0  dd5938               fstp qword ptr [ecx + 0x38]
// 0054baf3  d94040               fld dword ptr [eax + 0x40]
// 0054baf6  d95940               fstp dword ptr [ecx + 0x40]
// 0054baf9  d94044               fld dword ptr [eax + 0x44]
// 0054bafc  d95944               fstp dword ptr [ecx + 0x44]
// 0054baff  d94048               fld dword ptr [eax + 0x48]
// 0054bb02  d95948               fstp dword ptr [ecx + 0x48]
// 0054bb05  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 0054bb09  88514c               mov byte ptr [ecx + 0x4c], dl
// 0054bb0c  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 0054bb10  88514d               mov byte ptr [ecx + 0x4d], dl
// 0054bb13  8a404e               mov al, byte ptr [eax + 0x4e]
// 0054bb16  88414e               mov byte ptr [ecx + 0x4e], al
// 0054bb19  0f8c61ffffff         jl 0x54ba80
// 0054bb1f  751b                 jne 0x54bb3c
// 0054bb21  8d0c9b               lea ecx, [ebx + ebx*4]
// 0054bb24  c1e104               shl ecx, 4
// 0054bb27  8d5429b0             lea edx, [ecx + ebp - 0x50]
// 0054bb2b  8d0cbf               lea ecx, [edi + edi*4]
// 0054bb2e  c1e104               shl ecx, 4
// 0054bb31  52                   push edx
// 0054bb32  03cd                 add ecx, ebp
// 0054bb34  e87753f4ff           call 0x490eb0
// 0054bb39  8d7bff               lea edi, [ebx - 1]
// 0054bb3c  8b442470             mov eax, dword ptr [esp + 0x70]
// 0054bb40  50                   push eax
// 0054bb41  83ec50               sub esp, 0x50
// 0054bb44  8d542474             lea edx, [esp + 0x74]
// 0054bb48  8bcc                 mov ecx, esp
// 0054bb4a  52                   push edx
// 0054bb4b  e88066f4ff           call 0x4921d0
// 0054bb50  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0054bb54  50                   push eax
// 0054bb55  57                   push edi
// 0054bb56  55                   push ebp
// 0054bb57  e8f4faffff           call 0x54b650
// 0054bb5c  83c460               add esp, 0x60
// 0054bb5f  5f                   pop edi
// 0054bb60  5e                   pop esi
// 0054bb61  5d                   pop ebp
// 0054bb62  5b                   pop ebx
// 0054bb63  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Adjust_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
