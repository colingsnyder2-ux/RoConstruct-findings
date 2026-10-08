// roc 2008-06 004f4850  unit: RBX::ViewNew::PBBBuilder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f4850
//
// 004f4850  83ec10               sub esp, 0x10
// 004f4853  56                   push esi
// 004f4854  8bf1                 mov esi, ecx
// 004f4856  8d4c2408             lea ecx, [esp + 8]
// 004f485a  e8d1d7ffff           call 0x4f2030
// 004f485f  d9442408             fld dword ptr [esp + 8]
// 004f4863  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f4867  b801000000           mov eax, 1
// 004f486c  8bc8                 mov ecx, eax
// 004f486e  66894c2406           mov word ptr [esp + 6], cx
// 004f4873  668b4c2410           mov cx, word ptr [esp + 0x10]
// 004f4878  6689442404           mov word ptr [esp + 4], ax
// 004f487d  8b442404             mov eax, dword ptr [esp + 4]
// 004f4881  52                   push edx
// 004f4882  50                   push eax
// 004f4883  83ec0c               sub esp, 0xc
// 004f4886  8bc4                 mov eax, esp
// 004f4888  d918                 fstp dword ptr [eax]
// 004f488a  66894808             mov word ptr [eax + 8], cx
// 004f488e  d9442420             fld dword ptr [esp + 0x20]
// 004f4892  8bce                 mov ecx, esi
// 004f4894  d95804               fstp dword ptr [eax + 4]
// 004f4897  e874f3ffff           call 0x4f3c10
// 004f489c  5e                   pop esi
// 004f489d  83c410               add esp, 0x10
// 004f48a0  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
