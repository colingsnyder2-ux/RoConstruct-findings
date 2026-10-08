// roc 2008-06 004f4910  unit: RBX::ViewNew::PBBBuilder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f4910
//
// 004f4910  83ec10               sub esp, 0x10
// 004f4913  56                   push esi
// 004f4914  8bf1                 mov esi, ecx
// 004f4916  8d4c2408             lea ecx, [esp + 8]
// 004f491a  e811d7ffff           call 0x4f2030
// 004f491f  d9442408             fld dword ptr [esp + 8]
// 004f4923  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f4927  b801000000           mov eax, 1
// 004f492c  8bc8                 mov ecx, eax
// 004f492e  66894c2406           mov word ptr [esp + 6], cx
// 004f4933  668b4c2410           mov cx, word ptr [esp + 0x10]
// 004f4938  6689442404           mov word ptr [esp + 4], ax
// 004f493d  8b442404             mov eax, dword ptr [esp + 4]
// 004f4941  52                   push edx
// 004f4942  50                   push eax
// 004f4943  83ec0c               sub esp, 0xc
// 004f4946  8bc4                 mov eax, esp
// 004f4948  d918                 fstp dword ptr [eax]
// 004f494a  66894808             mov word ptr [eax + 8], cx
// 004f494e  d9442420             fld dword ptr [esp + 0x20]
// 004f4952  8bce                 mov ecx, esi
// 004f4954  d95804               fstp dword ptr [eax + 4]
// 004f4957  e874f8ffff           call 0x4f41d0
// 004f495c  5e                   pop esi
// 004f495d  83c410               add esp, 0x10
// 004f4960  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
