// roc 2008-06 004fa110  unit: RBX::ViewNew::TorsoBuilder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fa110
//
// 004fa110  83ec0c               sub esp, 0xc
// 004fa113  d94120               fld dword ptr [ecx + 0x20]
// 004fa116  b801000000           mov eax, 1
// 004fa11b  8bd0                 mov edx, eax
// 004fa11d  d95c2404             fstp dword ptr [esp + 4]
// 004fa121  d94124               fld dword ptr [ecx + 0x24]
// 004fa124  66890424             mov word ptr [esp], ax
// 004fa128  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fa12c  d95c2408             fstp dword ptr [esp + 8]
// 004fa130  50                   push eax
// 004fa131  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fa135  6689542406           mov word ptr [esp + 6], dx
// 004fa13a  8b542404             mov edx, dword ptr [esp + 4]
// 004fa13e  52                   push edx
// 004fa13f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004fa143  50                   push eax
// 004fa144  52                   push edx
// 004fa145  e896f5ffff           call 0x4f96e0
// 004fa14a  83c40c               add esp, 0xc
// 004fa14d  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
