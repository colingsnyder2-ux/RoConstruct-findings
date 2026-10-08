// roc 2008-06 004fa0d0  unit: RBX::ViewNew::TorsoBuilder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fa0d0
//
// 004fa0d0  83ec0c               sub esp, 0xc
// 004fa0d3  d94120               fld dword ptr [ecx + 0x20]
// 004fa0d6  b801000000           mov eax, 1
// 004fa0db  8bd0                 mov edx, eax
// 004fa0dd  d95c2404             fstp dword ptr [esp + 4]
// 004fa0e1  d94124               fld dword ptr [ecx + 0x24]
// 004fa0e4  66890424             mov word ptr [esp], ax
// 004fa0e8  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fa0ec  d95c2408             fstp dword ptr [esp + 8]
// 004fa0f0  50                   push eax
// 004fa0f1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fa0f5  6689542406           mov word ptr [esp + 6], dx
// 004fa0fa  8b542404             mov edx, dword ptr [esp + 4]
// 004fa0fe  52                   push edx
// 004fa0ff  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004fa103  50                   push eax
// 004fa104  52                   push edx
// 004fa105  e8f6f2ffff           call 0x4f9400
// 004fa10a  83c40c               add esp, 0xc
// 004fa10d  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
