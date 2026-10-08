// roc 2007-08 004e7280  unit: TorsoBuilder  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e7280
//
// 004e7280  83ec0c               sub esp, 0xc
// 004e7283  d94120               fld dword ptr [ecx + 0x20]
// 004e7286  b801000000           mov eax, 1
// 004e728b  66890424             mov word ptr [esp], ax
// 004e728f  d95c2404             fstp dword ptr [esp + 4]
// 004e7293  d94124               fld dword ptr [ecx + 0x24]
// 004e7296  6689442402           mov word ptr [esp + 2], ax
// 004e729b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e729f  d95c2408             fstp dword ptr [esp + 8]
// 004e72a3  8b1424               mov edx, dword ptr [esp]
// 004e72a6  50                   push eax
// 004e72a7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e72ab  52                   push edx
// 004e72ac  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e72b0  50                   push eax
// 004e72b1  52                   push edx
// 004e72b2  e8e9eeffff           call 0x4e61a0
// 004e72b7  83c40c               add esp, 0xc
// 004e72ba  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildRight@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
