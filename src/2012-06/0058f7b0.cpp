// roc 2012-06 0058f7b0  unit: RBX::Network::ServerReplicator  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0058f7b0
//
// 0058f7b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058f7b4  83ec0c               sub esp, 0xc
// 0058f7b7  85c9                 test ecx, ecx
// 0058f7b9  7716                 ja 0x58f7d1
// 0058f7bb  33c9                 xor ecx, ecx
// 0058f7bd  8d148d00000000       lea edx, [ecx*4]
// 0058f7c4  52                   push edx
// 0058f7c5  e850293f00           call 0x98211a
// 0058f7ca  83c404               add esp, 4
// 0058f7cd  83c40c               add esp, 0xc
// 0058f7d0  c3                   ret 
// 0058f7d1  83c8ff               or eax, 0xffffffff
// 0058f7d4  33d2                 xor edx, edx
// 0058f7d6  f7f1                 div ecx
// 0058f7d8  83f804               cmp eax, 4
// 0058f7db  73e0                 jae 0x58f7bd
// 0058f7dd  8d442410             lea eax, [esp + 0x10]
// 0058f7e1  50                   push eax
// 0058f7e2  8d4c2404             lea ecx, [esp + 4]
// 0058f7e6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058f7ee  ff15d029b200         call dword ptr [0xb229d0]
// 0058f7f4  685861cd00           push 0xcd6158
// 0058f7f9  8d4c2404             lea ecx, [esp + 4]
// 0058f7fd  51                   push ecx
// 0058f7fe  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 0058f806  e839393f00           call 0x983144
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@V_Aux_cont@std@@@std@@YAPAV_Aux_cont@0@IPAV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/type.cpp
