// roc 2008-06 004f6e90  unit: RBX::ViewNew::WedgeBuilder  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f6e90
//
// 004f6e90  83ec0c               sub esp, 0xc
// 004f6e93  d94120               fld dword ptr [ecx + 0x20]
// 004f6e96  b801000000           mov eax, 1
// 004f6e9b  8bd0                 mov edx, eax
// 004f6e9d  d95c2404             fstp dword ptr [esp + 4]
// 004f6ea1  d905b8c38100         fld dword ptr [0x81c3b8]
// 004f6ea7  66890424             mov word ptr [esp], ax
// 004f6eab  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f6eaf  d95c2408             fstp dword ptr [esp + 8]
// 004f6eb3  50                   push eax
// 004f6eb4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f6eb8  6689542406           mov word ptr [esp + 6], dx
// 004f6ebd  8b542404             mov edx, dword ptr [esp + 4]
// 004f6ec1  52                   push edx
// 004f6ec2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004f6ec6  50                   push eax
// 004f6ec7  52                   push edx
// 004f6ec8  e8b3ecffff           call 0x4f5b80
// 004f6ecd  83c40c               add esp, 0xc
// 004f6ed0  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildRight@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
