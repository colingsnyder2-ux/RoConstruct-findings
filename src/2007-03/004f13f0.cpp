// roc 2007-03 004f13f0  unit: seg_004f0000  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f13f0
//
// 004f13f0  53                   push ebx
// 004f13f1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f13f5  55                   push ebp
// 004f13f6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004f13fa  56                   push esi
// 004f13fb  57                   push edi
// 004f13fc  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004f1400  8d743f02             lea esi, [edi + edi + 2]
// 004f1404  3bf3                 cmp esi, ebx
// 004f1406  897c2418             mov dword ptr [esp + 0x18], edi
// 004f140a  0f8da1000000         jge 0x4f14b1
// 004f1410  8d04b6               lea eax, [esi + esi*4]
// 004f1413  c1e004               shl eax, 4
// 004f1416  03c5                 add eax, ebp
// 004f1418  8d48b0               lea ecx, [eax - 0x50]
// 004f141b  51                   push ecx
// 004f141c  50                   push eax
// 004f141d  ff542478             call dword ptr [esp + 0x78]
// 004f1421  83c408               add esp, 8
// 004f1424  84c0                 test al, al
// 004f1426  7403                 je 0x4f142b
// 004f1428  83ee01               sub esi, 1
// 004f142b  8d04b6               lea eax, [esi + esi*4]
// 004f142e  c1e004               shl eax, 4
// 004f1431  d90428               fld dword ptr [eax + ebp]
// 004f1434  03c5                 add eax, ebp
// 004f1436  8d0cbf               lea ecx, [edi + edi*4]
// 004f1439  c1e104               shl ecx, 4
// 004f143c  d91c29               fstp dword ptr [ecx + ebp]
// 004f143f  03cd                 add ecx, ebp
// 004f1441  d94004               fld dword ptr [eax + 4]
// 004f1444  8bfe                 mov edi, esi
// 004f1446  d95904               fstp dword ptr [ecx + 4]
// 004f1449  8d743602             lea esi, [esi + esi + 2]
// 004f144d  3bf3                 cmp esi, ebx
// 004f144f  d94008               fld dword ptr [eax + 8]
// 004f1452  d95908               fstp dword ptr [ecx + 8]
// 004f1455  d9400c               fld dword ptr [eax + 0xc]
// 004f1458  d9590c               fstp dword ptr [ecx + 0xc]
// 004f145b  d94010               fld dword ptr [eax + 0x10]
// 004f145e  d95910               fstp dword ptr [ecx + 0x10]
// 004f1461  d94014               fld dword ptr [eax + 0x14]
// 004f1464  d95914               fstp dword ptr [ecx + 0x14]
// 004f1467  d94018               fld dword ptr [eax + 0x18]
// 004f146a  d95918               fstp dword ptr [ecx + 0x18]
// 004f146d  dd4020               fld qword ptr [eax + 0x20]
// 004f1470  dd5920               fstp qword ptr [ecx + 0x20]
// 004f1473  dd4028               fld qword ptr [eax + 0x28]
// 004f1476  dd5928               fstp qword ptr [ecx + 0x28]
// 004f1479  dd4030               fld qword ptr [eax + 0x30]
// 004f147c  dd5930               fstp qword ptr [ecx + 0x30]
// 004f147f  dd4038               fld qword ptr [eax + 0x38]
// 004f1482  dd5938               fstp qword ptr [ecx + 0x38]
// 004f1485  d94040               fld dword ptr [eax + 0x40]
// 004f1488  d95940               fstp dword ptr [ecx + 0x40]
// 004f148b  d94044               fld dword ptr [eax + 0x44]
// 004f148e  d95944               fstp dword ptr [ecx + 0x44]
// 004f1491  d94048               fld dword ptr [eax + 0x48]
// 004f1494  d95948               fstp dword ptr [ecx + 0x48]
// 004f1497  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 004f149b  88514c               mov byte ptr [ecx + 0x4c], dl
// 004f149e  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 004f14a2  88514d               mov byte ptr [ecx + 0x4d], dl
// 004f14a5  8a404e               mov al, byte ptr [eax + 0x4e]
// 004f14a8  88414e               mov byte ptr [ecx + 0x4e], al
// 004f14ab  0f8c5fffffff         jl 0x4f1410
// 004f14b1  751b                 jne 0x4f14ce
// 004f14b3  8d0c9b               lea ecx, [ebx + ebx*4]
// 004f14b6  c1e104               shl ecx, 4
// 004f14b9  8d5429b0             lea edx, [ecx + ebp - 0x50]
// 004f14bd  8d0cbf               lea ecx, [edi + edi*4]
// 004f14c0  c1e104               shl ecx, 4
// 004f14c3  52                   push edx
// 004f14c4  03cd                 add ecx, ebp
// 004f14c6  e8f520f8ff           call 0x4735c0
// 004f14cb  8d7bff               lea edi, [ebx - 1]
// 004f14ce  8b442470             mov eax, dword ptr [esp + 0x70]
// 004f14d2  50                   push eax
// 004f14d3  83ec50               sub esp, 0x50
// 004f14d6  8d542474             lea edx, [esp + 0x74]
// 004f14da  8bcc                 mov ecx, esp
// 004f14dc  52                   push edx
// 004f14dd  e88e35f8ff           call 0x474a70
// 004f14e2  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004f14e6  50                   push eax
// 004f14e7  57                   push edi
// 004f14e8  55                   push ebp
// 004f14e9  e862faffff           call 0x4f0f50
// 004f14ee  83c460               add esp, 0x60
// 004f14f1  5f                   pop edi
// 004f14f2  5e                   pop esi
// 004f14f3  5d                   pop ebp
// 004f14f4  5b                   pop ebx
// 004f14f5  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Adjust_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
