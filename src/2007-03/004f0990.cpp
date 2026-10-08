// roc 2007-03 004f0990  unit: seg_004f0000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0990
//
// 004f0990  53                   push ebx
// 004f0991  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004f0995  55                   push ebp
// 004f0996  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004f099a  56                   push esi
// 004f099b  57                   push edi
// 004f099c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004f09a0  8d743f02             lea esi, [edi + edi + 2]
// 004f09a4  3bf5                 cmp esi, ebp
// 004f09a6  897c2418             mov dword ptr [esp + 0x18], edi
// 004f09aa  7d2a                 jge 0x4f09d6
// 004f09ac  8d642400             lea esp, [esp]
// 004f09b0  8d04b3               lea eax, [ebx + esi*4]
// 004f09b3  8d48fc               lea ecx, [eax - 4]
// 004f09b6  51                   push ecx
// 004f09b7  50                   push eax
// 004f09b8  ff54242c             call dword ptr [esp + 0x2c]
// 004f09bc  83c408               add esp, 8
// 004f09bf  84c0                 test al, al
// 004f09c1  7403                 je 0x4f09c6
// 004f09c3  83ee01               sub esi, 1
// 004f09c6  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 004f09c9  8914bb               mov dword ptr [ebx + edi*4], edx
// 004f09cc  8bfe                 mov edi, esi
// 004f09ce  8d743602             lea esi, [esi + esi + 2]
// 004f09d2  3bf5                 cmp esi, ebp
// 004f09d4  7cda                 jl 0x4f09b0
// 004f09d6  750a                 jne 0x4f09e2
// 004f09d8  8b44abfc             mov eax, dword ptr [ebx + ebp*4 - 4]
// 004f09dc  8904bb               mov dword ptr [ebx + edi*4], eax
// 004f09df  8d7dff               lea edi, [ebp - 1]
// 004f09e2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004f09e6  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f09ea  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f09ee  51                   push ecx
// 004f09ef  52                   push edx
// 004f09f0  50                   push eax
// 004f09f1  57                   push edi
// 004f09f2  53                   push ebx
// 004f09f3  e828feffff           call 0x4f0820
// 004f09f8  83c414               add esp, 0x14
// 004f09fb  5f                   pop edi
// 004f09fc  5e                   pop esi
// 004f09fd  5d                   pop ebp
// 004f09fe  5b                   pop ebx
// 004f09ff  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Adjust_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
