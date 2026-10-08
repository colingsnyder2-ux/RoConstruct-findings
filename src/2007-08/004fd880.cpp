// roc 2007-08 004fd880  unit: RBX::Render::AggregateChunk  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd880
//
// 004fd880  53                   push ebx
// 004fd881  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004fd885  55                   push ebp
// 004fd886  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004fd88a  56                   push esi
// 004fd88b  57                   push edi
// 004fd88c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004fd890  8d743f02             lea esi, [edi + edi + 2]
// 004fd894  3bf3                 cmp esi, ebx
// 004fd896  897c2418             mov dword ptr [esp + 0x18], edi
// 004fd89a  0f8da1000000         jge 0x4fd941
// 004fd8a0  8d04b6               lea eax, [esi + esi*4]
// 004fd8a3  c1e004               shl eax, 4
// 004fd8a6  03c5                 add eax, ebp
// 004fd8a8  8d48b0               lea ecx, [eax - 0x50]
// 004fd8ab  51                   push ecx
// 004fd8ac  50                   push eax
// 004fd8ad  ff542478             call dword ptr [esp + 0x78]
// 004fd8b1  83c408               add esp, 8
// 004fd8b4  84c0                 test al, al
// 004fd8b6  7403                 je 0x4fd8bb
// 004fd8b8  83ee01               sub esi, 1
// 004fd8bb  8d04b6               lea eax, [esi + esi*4]
// 004fd8be  c1e004               shl eax, 4
// 004fd8c1  d90428               fld dword ptr [eax + ebp]
// 004fd8c4  03c5                 add eax, ebp
// 004fd8c6  8d0cbf               lea ecx, [edi + edi*4]
// 004fd8c9  c1e104               shl ecx, 4
// 004fd8cc  d91c29               fstp dword ptr [ecx + ebp]
// 004fd8cf  03cd                 add ecx, ebp
// 004fd8d1  d94004               fld dword ptr [eax + 4]
// 004fd8d4  8bfe                 mov edi, esi
// 004fd8d6  d95904               fstp dword ptr [ecx + 4]
// 004fd8d9  8d743602             lea esi, [esi + esi + 2]
// 004fd8dd  3bf3                 cmp esi, ebx
// 004fd8df  d94008               fld dword ptr [eax + 8]
// 004fd8e2  d95908               fstp dword ptr [ecx + 8]
// 004fd8e5  d9400c               fld dword ptr [eax + 0xc]
// 004fd8e8  d9590c               fstp dword ptr [ecx + 0xc]
// 004fd8eb  d94010               fld dword ptr [eax + 0x10]
// 004fd8ee  d95910               fstp dword ptr [ecx + 0x10]
// 004fd8f1  d94014               fld dword ptr [eax + 0x14]
// 004fd8f4  d95914               fstp dword ptr [ecx + 0x14]
// 004fd8f7  d94018               fld dword ptr [eax + 0x18]
// 004fd8fa  d95918               fstp dword ptr [ecx + 0x18]
// 004fd8fd  dd4020               fld qword ptr [eax + 0x20]
// 004fd900  dd5920               fstp qword ptr [ecx + 0x20]
// 004fd903  dd4028               fld qword ptr [eax + 0x28]
// 004fd906  dd5928               fstp qword ptr [ecx + 0x28]
// 004fd909  dd4030               fld qword ptr [eax + 0x30]
// 004fd90c  dd5930               fstp qword ptr [ecx + 0x30]
// 004fd90f  dd4038               fld qword ptr [eax + 0x38]
// 004fd912  dd5938               fstp qword ptr [ecx + 0x38]
// 004fd915  d94040               fld dword ptr [eax + 0x40]
// 004fd918  d95940               fstp dword ptr [ecx + 0x40]
// 004fd91b  d94044               fld dword ptr [eax + 0x44]
// 004fd91e  d95944               fstp dword ptr [ecx + 0x44]
// 004fd921  d94048               fld dword ptr [eax + 0x48]
// 004fd924  d95948               fstp dword ptr [ecx + 0x48]
// 004fd927  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 004fd92b  88514c               mov byte ptr [ecx + 0x4c], dl
// 004fd92e  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 004fd932  88514d               mov byte ptr [ecx + 0x4d], dl
// 004fd935  8a404e               mov al, byte ptr [eax + 0x4e]
// 004fd938  88414e               mov byte ptr [ecx + 0x4e], al
// 004fd93b  0f8c5fffffff         jl 0x4fd8a0
// 004fd941  751b                 jne 0x4fd95e
// 004fd943  8d0c9b               lea ecx, [ebx + ebx*4]
// 004fd946  c1e104               shl ecx, 4
// 004fd949  8d5429b0             lea edx, [ecx + ebp - 0x50]
// 004fd94d  8d0cbf               lea ecx, [edi + edi*4]
// 004fd950  c1e104               shl ecx, 4
// 004fd953  52                   push edx
// 004fd954  03cd                 add ecx, ebp
// 004fd956  e8755bf7ff           call 0x4734d0
// 004fd95b  8d7bff               lea edi, [ebx - 1]
// 004fd95e  8b442470             mov eax, dword ptr [esp + 0x70]
// 004fd962  50                   push eax
// 004fd963  83ec50               sub esp, 0x50
// 004fd966  8d542474             lea edx, [esp + 0x74]
// 004fd96a  8bcc                 mov ecx, esp
// 004fd96c  52                   push edx
// 004fd96d  e8fe6ff7ff           call 0x474970
// 004fd972  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004fd976  50                   push eax
// 004fd977  57                   push edi
// 004fd978  55                   push ebp
// 004fd979  e862faffff           call 0x4fd3e0
// 004fd97e  83c460               add esp, 0x60
// 004fd981  5f                   pop edi
// 004fd982  5e                   pop esi
// 004fd983  5d                   pop ebp
// 004fd984  5b                   pop ebx
// 004fd985  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Adjust_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
