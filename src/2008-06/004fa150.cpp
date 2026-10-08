// roc 2008-06 004fa150  unit: RBX::ViewNew::TorsoBuilder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fa150
//
// 004fa150  83ec0c               sub esp, 0xc
// 004fa153  d94120               fld dword ptr [ecx + 0x20]
// 004fa156  b801000000           mov eax, 1
// 004fa15b  8bd0                 mov edx, eax
// 004fa15d  d95c2404             fstp dword ptr [esp + 4]
// 004fa161  d94124               fld dword ptr [ecx + 0x24]
// 004fa164  66890424             mov word ptr [esp], ax
// 004fa168  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fa16c  d95c2408             fstp dword ptr [esp + 8]
// 004fa170  50                   push eax
// 004fa171  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fa175  6689542406           mov word ptr [esp + 6], dx
// 004fa17a  8b542404             mov edx, dword ptr [esp + 4]
// 004fa17e  52                   push edx
// 004fa17f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004fa183  50                   push eax
// 004fa184  52                   push edx
// 004fa185  e836f8ffff           call 0x4f99c0
// 004fa18a  83c40c               add esp, 0xc
// 004fa18d  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
