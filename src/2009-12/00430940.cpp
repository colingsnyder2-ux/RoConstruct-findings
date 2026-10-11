// roc 2009-12 00430940  unit: COutputView  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00430940
//
// 00430940  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00430944  83ec0c               sub esp, 0xc
// 00430947  85c9                 test ecx, ecx
// 00430949  7716                 ja 0x430961
// 0043094b  33c9                 xor ecx, ecx
// 0043094d  8d148d00000000       lea edx, [ecx*4]
// 00430954  52                   push edx
// 00430955  e8062f3c00           call 0x7f3860
// 0043095a  83c404               add esp, 4
// 0043095d  83c40c               add esp, 0xc
// 00430960  c3                   ret 
// 00430961  83c8ff               or eax, 0xffffffff
// 00430964  33d2                 xor edx, edx
// 00430966  f7f1                 div ecx
// 00430968  83f804               cmp eax, 4
// 0043096b  73e0                 jae 0x43094d
// 0043096d  8d442410             lea eax, [esp + 0x10]
// 00430971  50                   push eax
// 00430972  8d4c2404             lea ecx, [esp + 4]
// 00430976  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0043097e  ff1548b79800         call dword ptr [0x98b748]
// 00430984  6838efa800           push 0xa8ef38
// 00430989  8d4c2404             lea ecx, [esp + 4]
// 0043098d  51                   push ecx
// 0043098e  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 00430996  e8dd3e3c00           call 0x7f4878
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@V_Aux_cont@std@@@std@@YAPAV_Aux_cont@0@IPAV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/type.cpp
