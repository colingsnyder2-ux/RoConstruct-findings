// from server: 100% by tester
// roc 2007-03 004fe5f0  unit: seg_004f0000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe5f0
//
// 004fe5f0  6aff                 push -1
// 004fe5f2  68120b7500           push 0x750b12
// 004fe5f7  64a100000000         mov eax, dword ptr fs:[0]
// 004fe5fd  50                   push eax
// 004fe5fe  83ec3c               sub esp, 0x3c
// 004fe601  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fe606  33c4                 xor eax, esp
// 004fe608  89442438             mov dword ptr [esp + 0x38], eax
// 004fe60c  56                   push esi
// 004fe60d  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fe612  33c4                 xor eax, esp
// 004fe614  50                   push eax
// 004fe615  8d442444             lea eax, [esp + 0x44]
// 004fe619  64a300000000         mov dword ptr fs:[0], eax
// 004fe61f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004fe623  8b442458             mov eax, dword ptr [esp + 0x58]
// 004fe627  8b742454             mov esi, dword ptr [esp + 0x54]
// 004fe62b  51                   push ecx
// 004fe62c  50                   push eax
// 004fe62d  8d44242c             lea eax, [esp + 0x2c]
// 004fe631  50                   push eax
// 004fe632  e8b96bffff           call 0x4f51f0
// 004fe637  83c40c               add esp, 0xc
// 004fe63a  8d4c2408             lea ecx, [esp + 8]
// 004fe63e  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004fe646  ff1584e77700         call dword ptr [0x77e784]
// 004fe64c  8d4c2408             lea ecx, [esp + 8]
// 004fe650  51                   push ecx
// 004fe651  8d542428             lea edx, [esp + 0x28]
// 004fe655  52                   push edx
// 004fe656  8bce                 mov ecx, esi
// 004fe658  c644245401           mov byte ptr [esp + 0x54], 1
// 004fe65d  e8bef6ffff           call 0x4fdd20
// 004fe662  8d442408             lea eax, [esp + 8]
// 004fe666  50                   push eax
// 004fe667  8bce                 mov ecx, esi
// 004fe669  e812fcffff           call 0x4fe280
// 004fe66e  8d4c2408             lea ecx, [esp + 8]
// 004fe672  c644244c00           mov byte ptr [esp + 0x4c], 0
// 004fe677  ff158ce77700         call dword ptr [0x77e78c]
// 004fe67d  8d4c2424             lea ecx, [esp + 0x24]
// 004fe681  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 004fe689  ff158ce77700         call dword ptr [0x77e78c]
// 004fe68f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004fe693  64890d00000000       mov dword ptr fs:[0], ecx
// 004fe69a  59                   pop ecx
// 004fe69b  5e                   pop esi
// 004fe69c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004fe6a0  33cc                 xor ecx, esp
// 004fe6a2  e8ff071200           call 0x61eea6
// 004fe6a7  83c448               add esp, 0x48
// 004fe6aa  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?vprintf@TextOutput@G3D@@QAAXPBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
