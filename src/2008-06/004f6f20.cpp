// roc 2008-06 004f6f20  unit: RBX::ViewNew::WedgeBuilder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f6f20
//
// 004f6f20  83ec0c               sub esp, 0xc
// 004f6f23  d94120               fld dword ptr [ecx + 0x20]
// 004f6f26  b801000000           mov eax, 1
// 004f6f2b  8bd0                 mov edx, eax
// 004f6f2d  d95c2404             fstp dword ptr [esp + 4]
// 004f6f31  d9e8                 fld1 
// 004f6f33  66890424             mov word ptr [esp], ax
// 004f6f37  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f6f3b  d95c2408             fstp dword ptr [esp + 8]
// 004f6f3f  50                   push eax
// 004f6f40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f6f44  6689542406           mov word ptr [esp + 6], dx
// 004f6f49  8b542404             mov edx, dword ptr [esp + 4]
// 004f6f4d  52                   push edx
// 004f6f4e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004f6f52  50                   push eax
// 004f6f53  52                   push edx
// 004f6f54  e8c7f1ffff           call 0x4f6120
// 004f6f59  83c40c               add esp, 0xc
// 004f6f5c  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildLeft@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
