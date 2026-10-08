// roc 2008-06 004f4970  unit: RBX::ViewNew::PBBBuilder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f4970
//
// 004f4970  83ec10               sub esp, 0x10
// 004f4973  56                   push esi
// 004f4974  8bf1                 mov esi, ecx
// 004f4976  8d4c2408             lea ecx, [esp + 8]
// 004f497a  e8b1d6ffff           call 0x4f2030
// 004f497f  d9442408             fld dword ptr [esp + 8]
// 004f4983  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f4987  b801000000           mov eax, 1
// 004f498c  8bc8                 mov ecx, eax
// 004f498e  66894c2406           mov word ptr [esp + 6], cx
// 004f4993  668b4c2410           mov cx, word ptr [esp + 0x10]
// 004f4998  6689442404           mov word ptr [esp + 4], ax
// 004f499d  8b442404             mov eax, dword ptr [esp + 4]
// 004f49a1  52                   push edx
// 004f49a2  50                   push eax
// 004f49a3  83ec0c               sub esp, 0xc
// 004f49a6  8bc4                 mov eax, esp
// 004f49a8  d918                 fstp dword ptr [eax]
// 004f49aa  66894808             mov word ptr [eax + 8], cx
// 004f49ae  d9442420             fld dword ptr [esp + 0x20]
// 004f49b2  8bce                 mov ecx, esi
// 004f49b4  d95804               fstp dword ptr [eax + 4]
// 004f49b7  e8f4faffff           call 0x4f44b0
// 004f49bc  5e                   pop esi
// 004f49bd  83c410               add esp, 0x10
// 004f49c0  c20400               ret 4
// library rbxgs-view/PBBMesh.cpp (function ?buildTop@PBBBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view PBBMesh.cpp
