// roc 2008-06 004f6f60  unit: RBX::ViewNew::WedgeBuilder  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f6f60
//
// 004f6f60  83ec08               sub esp, 8
// 004f6f63  d94120               fld dword ptr [ecx + 0x20]
// 004f6f66  b801000000           mov eax, 1
// 004f6f6b  8bd0                 mov edx, eax
// 004f6f6d  d95c2404             fstp dword ptr [esp + 4]
// 004f6f71  66890424             mov word ptr [esp], ax
// 004f6f75  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f6f79  50                   push eax
// 004f6f7a  8b442408             mov eax, dword ptr [esp + 8]
// 004f6f7e  6689542406           mov word ptr [esp + 6], dx
// 004f6f83  8b542404             mov edx, dword ptr [esp + 4]
// 004f6f87  52                   push edx
// 004f6f88  50                   push eax
// 004f6f89  e872f4ffff           call 0x4f6400
// 004f6f8e  83c408               add esp, 8
// 004f6f91  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildTop@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
