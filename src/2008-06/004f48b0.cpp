// roc 2008-06 004f48b0  unit: RBX::ViewNew::PBBBuilder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f48b0
//
// 004f48b0  83ec10               sub esp, 0x10
// 004f48b3  56                   push esi
// 004f48b4  8bf1                 mov esi, ecx
// 004f48b6  8d4c2408             lea ecx, [esp + 8]
// 004f48ba  e871d7ffff           call 0x4f2030
// 004f48bf  d9442408             fld dword ptr [esp + 8]
// 004f48c3  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f48c7  b801000000           mov eax, 1
// 004f48cc  8bc8                 mov ecx, eax
// 004f48ce  66894c2406           mov word ptr [esp + 6], cx
// 004f48d3  668b4c2410           mov cx, word ptr [esp + 0x10]
// 004f48d8  6689442404           mov word ptr [esp + 4], ax
// 004f48dd  8b442404             mov eax, dword ptr [esp + 4]
// 004f48e1  52                   push edx
// 004f48e2  50                   push eax
// 004f48e3  83ec0c               sub esp, 0xc
// 004f48e6  8bc4                 mov eax, esp
// 004f48e8  d918                 fstp dword ptr [eax]
// 004f48ea  66894808             mov word ptr [eax + 8], cx
// 004f48ee  d9442420             fld dword ptr [esp + 0x20]
// 004f48f2  8bce                 mov ecx, esi
// 004f48f4  d95804               fstp dword ptr [eax + 4]
// 004f48f7  e8f4f5ffff           call 0x4f3ef0
// 004f48fc  5e                   pop esi
// 004f48fd  83c410               add esp, 0x10
// 004f4900  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
