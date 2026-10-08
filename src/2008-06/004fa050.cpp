// roc 2008-06 004fa050  unit: RBX::ViewNew::TorsoBuilder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fa050
//
// 004fa050  83ec0c               sub esp, 0xc
// 004fa053  d94120               fld dword ptr [ecx + 0x20]
// 004fa056  b801000000           mov eax, 1
// 004fa05b  8bd0                 mov edx, eax
// 004fa05d  d95c2404             fstp dword ptr [esp + 4]
// 004fa061  d94124               fld dword ptr [ecx + 0x24]
// 004fa064  66890424             mov word ptr [esp], ax
// 004fa068  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fa06c  d95c2408             fstp dword ptr [esp + 8]
// 004fa070  50                   push eax
// 004fa071  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fa075  6689542406           mov word ptr [esp + 6], dx
// 004fa07a  8b542404             mov edx, dword ptr [esp + 4]
// 004fa07e  52                   push edx
// 004fa07f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004fa083  50                   push eax
// 004fa084  52                   push edx
// 004fa085  e8c6edffff           call 0x4f8e50
// 004fa08a  83c40c               add esp, 0xc
// 004fa08d  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
