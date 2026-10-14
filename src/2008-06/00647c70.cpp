// roc 2008-06 00647c70  unit: RBX::Block  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647c70
//
// 00647c70  d9ee                 fldz 
// 00647c72  8b442404             mov eax, dword ptr [esp + 4]
// 00647c76  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00647c7a  d910                 fst dword ptr [eax]
// 00647c7c  d95804               fstp dword ptr [eax + 4]
// 00647c7f  83f905               cmp ecx, 5
// 00647c82  776c                 ja 0x647cf0
// 00647c84  ff248df47c6400       jmp dword ptr [ecx*4 + 0x647cf4]
// 00647c8b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647c8f  d94104               fld dword ptr [ecx + 4]
// 00647c92  d918                 fstp dword ptr [eax]
// 00647c94  d94108               fld dword ptr [ecx + 8]
// 00647c97  d95804               fstp dword ptr [eax + 4]
// 00647c9a  c20c00               ret 0xc
// 00647c9d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647ca1  d94108               fld dword ptr [ecx + 8]
// 00647ca4  d918                 fstp dword ptr [eax]
// 00647ca6  d901                 fld dword ptr [ecx]
// 00647ca8  d95804               fstp dword ptr [eax + 4]
// 00647cab  c20c00               ret 0xc
// 00647cae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647cb2  d901                 fld dword ptr [ecx]
// 00647cb4  d918                 fstp dword ptr [eax]
// 00647cb6  d94104               fld dword ptr [ecx + 4]
// 00647cb9  d95804               fstp dword ptr [eax + 4]
// 00647cbc  c20c00               ret 0xc
// 00647cbf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647cc3  d94108               fld dword ptr [ecx + 8]
// 00647cc6  d918                 fstp dword ptr [eax]
// 00647cc8  d94104               fld dword ptr [ecx + 4]
// 00647ccb  d95804               fstp dword ptr [eax + 4]
// 00647cce  c20c00               ret 0xc
// 00647cd1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647cd5  d901                 fld dword ptr [ecx]
// 00647cd7  d918                 fstp dword ptr [eax]
// 00647cd9  d94108               fld dword ptr [ecx + 8]
// 00647cdc  d95804               fstp dword ptr [eax + 4]
// 00647cdf  c20c00               ret 0xc
// 00647ce2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647ce6  d94104               fld dword ptr [ecx + 4]
// 00647ce9  d918                 fstp dword ptr [eax]
// 00647ceb  d901                 fld dword ptr [ecx]
// 00647ced  d95804               fstp dword ptr [eax + 4]
// 00647cf0  c20c00               ret 0xc
// 00647cf3  90                   nop 
// 00647cf4  8b7c6400             mov edi, dword ptr [esp]
// 00647cf8  9d                   popfd 
// 00647cf9  7c64                 jl 0x647d5f
// 00647cfb  00ae7c6400bf         add byte ptr [esi - 0x40ff9b84], ch
// 00647d01  7c64                 jl 0x647d67
// 00647d03  00d1                 add cl, dl
// 00647d05  7c64                 jl 0x647d6b
// 00647d07  00e2                 add dl, ah
// 00647d09  7c64                 jl 0x647d6f
// library rbxgs-dll/v8world\Block.cpp (function ?getProjectedVertex@Block@RBX@@QAE?AVVector2@G3D@@ABVVector3@4@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll v8world/Block.cpp
