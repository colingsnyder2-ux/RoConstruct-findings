// roc 2008-06 004f6ee0  unit: RBX::ViewNew::WedgeBuilder  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f6ee0
//
// 004f6ee0  83ec08               sub esp, 8
// 004f6ee3  d94120               fld dword ptr [ecx + 0x20]
// 004f6ee6  b801000000           mov eax, 1
// 004f6eeb  8bd0                 mov edx, eax
// 004f6eed  d95c2404             fstp dword ptr [esp + 4]
// 004f6ef1  66890424             mov word ptr [esp], ax
// 004f6ef5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f6ef9  50                   push eax
// 004f6efa  8b442408             mov eax, dword ptr [esp + 8]
// 004f6efe  6689542406           mov word ptr [esp + 6], dx
// 004f6f03  8b542404             mov edx, dword ptr [esp + 4]
// 004f6f07  52                   push edx
// 004f6f08  50                   push eax
// 004f6f09  e842efffff           call 0x4f5e50
// 004f6f0e  83c408               add esp, 8
// 004f6f11  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildTop@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
