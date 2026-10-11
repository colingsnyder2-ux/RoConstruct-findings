// roc 2012-06 004506b0  unit: boost::posix_time::Vptime::?$time_facet  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004506b0
//
// 004506b0  6aff                 push -1
// 004506b2  6828e9a900           push 0xa9e928
// 004506b7  64a100000000         mov eax, dword ptr fs:[0]
// 004506bd  50                   push eax
// 004506be  64892500000000       mov dword ptr fs:[0], esp
// 004506c5  51                   push ecx
// 004506c6  56                   push esi
// 004506c7  8bf1                 mov esi, ecx
// 004506c9  89742404             mov dword ptr [esp + 4], esi
// 004506cd  8d8e30010000         lea ecx, [esi + 0x130]
// 004506d3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004506db  ff153c26b200         call dword ptr [0xb2263c]
// 004506e1  8bce                 mov ecx, esi
// 004506e3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004506eb  e860f5ffff           call 0x44fc50
// 004506f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004506f4  5e                   pop esi
// 004506f5  64890d00000000       mov dword ptr fs:[0], ecx
// 004506fc  83c410               add esp, 0x10
// 004506ff  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??1ShirtGraphic@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/CharacterAppearance.cpp
