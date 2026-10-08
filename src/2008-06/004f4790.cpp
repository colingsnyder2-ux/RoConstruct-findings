// roc 2008-06 004f4790  unit: RBX::ViewNew::PBBBuilder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f4790
//
// 004f4790  83ec10               sub esp, 0x10
// 004f4793  56                   push esi
// 004f4794  8bf1                 mov esi, ecx
// 004f4796  8d4c2408             lea ecx, [esp + 8]
// 004f479a  e891d8ffff           call 0x4f2030
// 004f479f  d9442408             fld dword ptr [esp + 8]
// 004f47a3  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f47a7  b801000000           mov eax, 1
// 004f47ac  8bc8                 mov ecx, eax
// 004f47ae  66894c2406           mov word ptr [esp + 6], cx
// 004f47b3  668b4c2410           mov cx, word ptr [esp + 0x10]
// 004f47b8  6689442404           mov word ptr [esp + 4], ax
// 004f47bd  8b442404             mov eax, dword ptr [esp + 4]
// 004f47c1  52                   push edx
// 004f47c2  50                   push eax
// 004f47c3  83ec0c               sub esp, 0xc
// 004f47c6  8bc4                 mov eax, esp
// 004f47c8  d918                 fstp dword ptr [eax]
// 004f47ca  66894808             mov word ptr [eax + 8], cx
// 004f47ce  d9442420             fld dword ptr [esp + 0x20]
// 004f47d2  8bce                 mov ecx, esi
// 004f47d4  d95804               fstp dword ptr [eax + 4]
// 004f47d7  e874eeffff           call 0x4f3650
// 004f47dc  5e                   pop esi
// 004f47dd  83c410               add esp, 0x10
// 004f47e0  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
