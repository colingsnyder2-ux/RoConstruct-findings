// roc 2007-08 004fce20  unit: RBX::Render::AggregateChunk  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fce20
//
// 004fce20  53                   push ebx
// 004fce21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004fce25  55                   push ebp
// 004fce26  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004fce2a  56                   push esi
// 004fce2b  57                   push edi
// 004fce2c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004fce30  8d743f02             lea esi, [edi + edi + 2]
// 004fce34  3bf5                 cmp esi, ebp
// 004fce36  897c2418             mov dword ptr [esp + 0x18], edi
// 004fce3a  7d2a                 jge 0x4fce66
// 004fce3c  8d642400             lea esp, [esp]
// 004fce40  8d04b3               lea eax, [ebx + esi*4]
// 004fce43  8d48fc               lea ecx, [eax - 4]
// 004fce46  51                   push ecx
// 004fce47  50                   push eax
// 004fce48  ff54242c             call dword ptr [esp + 0x2c]
// 004fce4c  83c408               add esp, 8
// 004fce4f  84c0                 test al, al
// 004fce51  7403                 je 0x4fce56
// 004fce53  83ee01               sub esi, 1
// 004fce56  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 004fce59  8914bb               mov dword ptr [ebx + edi*4], edx
// 004fce5c  8bfe                 mov edi, esi
// 004fce5e  8d743602             lea esi, [esi + esi + 2]
// 004fce62  3bf5                 cmp esi, ebp
// 004fce64  7cda                 jl 0x4fce40
// 004fce66  750a                 jne 0x4fce72
// 004fce68  8b44abfc             mov eax, dword ptr [ebx + ebp*4 - 4]
// 004fce6c  8904bb               mov dword ptr [ebx + edi*4], eax
// 004fce6f  8d7dff               lea edi, [ebp - 1]
// 004fce72  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004fce76  8b542420             mov edx, dword ptr [esp + 0x20]
// 004fce7a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fce7e  51                   push ecx
// 004fce7f  52                   push edx
// 004fce80  50                   push eax
// 004fce81  57                   push edi
// 004fce82  53                   push ebx
// 004fce83  e828feffff           call 0x4fccb0
// 004fce88  83c414               add esp, 0x14
// 004fce8b  5f                   pop edi
// 004fce8c  5e                   pop esi
// 004fce8d  5d                   pop ebp
// 004fce8e  5b                   pop ebx
// 004fce8f  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Adjust_heap@PAPAVRenderSurface@Render@RBX@@HPAV123@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@HHPAV123@P6A_NABQAV123@2@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
