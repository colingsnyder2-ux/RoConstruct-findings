// roc 2010-06 0090db80  unit: G3D::TextureManager::TextureArgs  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090db80
//
// 0090db80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0090db84  d901                 fld dword ptr [ecx]
// 0090db86  53                   push ebx
// 0090db87  55                   push ebp
// 0090db88  56                   push esi
// 0090db89  57                   push edi
// 0090db8a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0090db8e  8d87a8040000         lea eax, [edi + 0x4a8]
// 0090db94  d918                 fstp dword ptr [eax]
// 0090db96  50                   push eax
// 0090db97  d94104               fld dword ptr [ecx + 4]
// 0090db9a  d95804               fstp dword ptr [eax + 4]
// 0090db9d  d94108               fld dword ptr [ecx + 8]
// 0090dba0  d95808               fstp dword ptr [eax + 8]
// 0090dba3  d9410c               fld dword ptr [ecx + 0xc]
// 0090dba6  d9580c               fstp dword ptr [eax + 0xc]
// 0090dba9  ff155cab9e00         call dword ptr [0x9eab5c]
// 0090dbaf  6a05                 push 5
// 0090dbb1  8bcf                 mov ecx, edi
// 0090dbb3  e87882b8ff           call 0x495e30
// 0090dbb8  d9ee                 fldz 
// 0090dbba  8b1d98aa9e00         mov ebx, dword ptr [0x9eaa98]
// 0090dbc0  83ec08               sub esp, 8
// 0090dbc3  d9542404             fst dword ptr [esp + 4]
// 0090dbc7  d91c24               fstp dword ptr [esp]
// 0090dbca  ffd3                 call ebx
// 0090dbcc  8b742414             mov esi, dword ptr [esp + 0x14]
// 0090dbd0  d94604               fld dword ptr [esi + 4]
// 0090dbd3  8b2d9caa9e00         mov ebp, dword ptr [0x9eaa9c]
// 0090dbd9  83ec08               sub esp, 8
// 0090dbdc  d95c2404             fstp dword ptr [esp + 4]
// 0090dbe0  d906                 fld dword ptr [esi]
// 0090dbe2  d91c24               fstp dword ptr [esp]
// 0090dbe5  ffd5                 call ebp
// 0090dbe7  d9e8                 fld1 
// 0090dbe9  83ec08               sub esp, 8
// 0090dbec  d95c2404             fstp dword ptr [esp + 4]
// 0090dbf0  d9ee                 fldz 
// 0090dbf2  d91c24               fstp dword ptr [esp]
// 0090dbf5  ffd3                 call ebx
// 0090dbf7  d9460c               fld dword ptr [esi + 0xc]
// 0090dbfa  83ec08               sub esp, 8
// 0090dbfd  d95c2404             fstp dword ptr [esp + 4]
// 0090dc01  d906                 fld dword ptr [esi]
// 0090dc03  d91c24               fstp dword ptr [esp]
// 0090dc06  ffd5                 call ebp
// 0090dc08  d9e8                 fld1 
// 0090dc0a  83ec08               sub esp, 8
// 0090dc0d  d9542404             fst dword ptr [esp + 4]
// 0090dc11  d91c24               fstp dword ptr [esp]
// 0090dc14  ffd3                 call ebx
// 0090dc16  d9460c               fld dword ptr [esi + 0xc]
// 0090dc19  83ec08               sub esp, 8
// 0090dc1c  d95c2404             fstp dword ptr [esp + 4]
// 0090dc20  d94608               fld dword ptr [esi + 8]
// 0090dc23  d91c24               fstp dword ptr [esp]
// 0090dc26  ffd5                 call ebp
// 0090dc28  d9ee                 fldz 
// 0090dc2a  83ec08               sub esp, 8
// 0090dc2d  d95c2404             fstp dword ptr [esp + 4]
// 0090dc31  d9e8                 fld1 
// 0090dc33  d91c24               fstp dword ptr [esp]
// 0090dc36  ffd3                 call ebx
// 0090dc38  d94604               fld dword ptr [esi + 4]
// 0090dc3b  83ec08               sub esp, 8
// 0090dc3e  d95c2404             fstp dword ptr [esp + 4]
// 0090dc42  d94608               fld dword ptr [esi + 8]
// 0090dc45  d91c24               fstp dword ptr [esp]
// 0090dc48  ffd5                 call ebp
// 0090dc4a  8bcf                 mov ecx, edi
// 0090dc4c  e8ff54b8ff           call 0x493150
// 0090dc51  83477008             add dword ptr [edi + 0x70], 8
// 0090dc55  5f                   pop edi
// 0090dc56  5e                   pop esi
// 0090dc57  5d                   pop ebp
// 0090dc58  5b                   pop ebx
// 0090dc59  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?fastRect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
