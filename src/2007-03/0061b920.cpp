// roc 2007-03 0061b920  unit: seg_00610000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061b920
//
// 0061b920  d90580ed7900         fld dword ptr [0x79ed80]
// 0061b926  8b442404             mov eax, dword ptr [esp + 4]
// 0061b92a  56                   push esi
// 0061b92b  83ec08               sub esp, 8
// 0061b92e  d95c2404             fstp dword ptr [esp + 4]
// 0061b932  8bf1                 mov esi, ecx
// 0061b934  d905dcfb7b00         fld dword ptr [0x7bfbdc]
// 0061b93a  d91c24               fstp dword ptr [esp]
// 0061b93d  50                   push eax
// 0061b93e  e82d55ffff           call 0x610e70
// 0061b943  d9ee                 fldz 
// 0061b945  d95e28               fstp dword ptr [esi + 0x28]
// 0061b948  c706dc217c00         mov dword ptr [esi], 0x7c21dc
// 0061b94e  c74608d4217c00       mov dword ptr [esi + 8], 0x7c21d4
// 0061b955  8bc6                 mov eax, esi
// 0061b957  5e                   pop esi
// 0061b958  c20400               ret 4
// library rbxgs/humanoid\Flying.cpp (function ??0Flying@RBX@@IAE@PAVHumanoid@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Flying.cpp
