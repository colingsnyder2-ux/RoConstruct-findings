// roc 2007-03 0043a540  unit: seg_00430000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043a540
//
// 0043a540  56                   push esi
// 0043a541  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0043a545  85f6                 test esi, esi
// 0043a547  57                   push edi
// 0043a548  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043a54c  8bc6                 mov eax, esi
// 0043a54e  8bcf                 mov ecx, edi
// 0043a550  7614                 jbe 0x43a566
// 0043a552  8b542414             mov edx, dword ptr [esp + 0x14]
// 0043a556  53                   push ebx
// 0043a557  8b1a                 mov ebx, dword ptr [edx]
// 0043a559  8919                 mov dword ptr [ecx], ebx
// 0043a55b  83e801               sub eax, 1
// 0043a55e  83c104               add ecx, 4
// 0043a561  85c0                 test eax, eax
// 0043a563  77f2                 ja 0x43a557
// 0043a565  5b                   pop ebx
// 0043a566  8d04b7               lea eax, [edi + esi*4]
// 0043a569  5f                   pop edi
// 0043a56a  5e                   pop esi
// 0043a56b  c20c00               ret 0xc
// library rbxgs/humanoid\Humanoid.cpp (function ?_Ufill@?$vector@PAVPrimitive@RBX@@V?$allocator@PAVPrimitive@RBX@@@std@@@std@@IAEPAPAVPrimitive@RBX@@PAPAV34@IABQAV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
