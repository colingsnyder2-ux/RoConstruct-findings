// roc 2009-12 005ea0e0  unit: G3D::Shader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ea0e0
//
// 005ea0e0  51                   push ecx
// 005ea0e1  803d853db80000       cmp byte ptr [0xb83d85], 0
// 005ea0e8  53                   push ebx
// 005ea0e9  7459                 je 0x5ea144
// 005ea0eb  50                   push eax
// 005ea0ec  53                   push ebx
// 005ea0ed  51                   push ecx
// 005ea0ee  52                   push edx
// 005ea0ef  b801000000           mov eax, 1
// 005ea0f4  0fa2                 cpuid 
// 005ea0f6  89542414             mov dword ptr [esp + 0x14], edx
// 005ea0fa  5a                   pop edx
// 005ea0fb  59                   pop ecx
// 005ea0fc  5b                   pop ebx
// 005ea0fd  58                   pop eax
// 005ea0fe  8b442404             mov eax, dword ptr [esp + 4]
// 005ea102  8bc8                 mov ecx, eax
// 005ea104  c1e910               shr ecx, 0x10
// 005ea107  8bd0                 mov edx, eax
// 005ea109  c1ea17               shr edx, 0x17
// 005ea10c  80e101               and cl, 1
// 005ea10f  80e201               and dl, 1
// 005ea112  880d803db800         mov byte ptr [0xb83d80], cl
// 005ea118  8815813db800         mov byte ptr [0xb83d81], dl
// 005ea11e  8bc8                 mov ecx, eax
// 005ea120  8bd0                 mov edx, eax
// 005ea122  c1e919               shr ecx, 0x19
// 005ea125  c1ea1a               shr edx, 0x1a
// 005ea128  80e101               and cl, 1
// 005ea12b  80e201               and dl, 1
// 005ea12e  c1e81f               shr eax, 0x1f
// 005ea131  2401                 and al, 1
// 005ea133  880d823db800         mov byte ptr [0xb83d82], cl
// 005ea139  8815833db800         mov byte ptr [0xb83d83], dl
// 005ea13f  a2843db800           mov byte ptr [0xb83d84], al
// 005ea144  5b                   pop ebx
// 005ea145  59                   pop ecx
// 005ea146  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getStandardProcessorExtensions@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
