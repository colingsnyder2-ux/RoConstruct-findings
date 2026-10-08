// roc 2007-03 00610e70  unit: seg_00610000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00610e70
//
// 00610e70  d9442408             fld dword ptr [esp + 8]
// 00610e74  8bc1                 mov eax, ecx
// 00610e76  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00610e7a  894804               mov dword ptr [eax + 4], ecx
// 00610e7d  c7400878c57b00       mov dword ptr [eax + 8], 0x7bc578
// 00610e84  d9580c               fstp dword ptr [eax + 0xc]
// 00610e87  d944240c             fld dword ptr [esp + 0xc]
// 00610e8b  c700141f7c00         mov dword ptr [eax], 0x7c1f14
// 00610e91  d95810               fstp dword ptr [eax + 0x10]
// 00610e94  c740080c1f7c00       mov dword ptr [eax + 8], 0x7c1f0c
// 00610e9b  d9ee                 fldz 
// 00610e9d  33c9                 xor ecx, ecx
// 00610e9f  d9501c               fst dword ptr [eax + 0x1c]
// 00610ea2  894814               mov dword ptr [eax + 0x14], ecx
// 00610ea5  d95020               fst dword ptr [eax + 0x20]
// 00610ea8  894818               mov dword ptr [eax + 0x18], ecx
// 00610eab  d95824               fstp dword ptr [eax + 0x24]
// 00610eae  c20c00               ret 0xc
// library rbxgs/humanoid\Balancing.cpp (function ??0Balancing@RBX@@QAE@PAVHumanoid@1@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
