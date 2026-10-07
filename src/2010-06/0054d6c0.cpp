// roc 2010-06 0054d6c0  unit: G3D::Shader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d6c0
//
// 0054d6c0  51                   push ecx
// 0054d6c1  803d4d9ec00000       cmp byte ptr [0xc09e4d], 0
// 0054d6c8  53                   push ebx
// 0054d6c9  7459                 je 0x54d724
// 0054d6cb  50                   push eax
// 0054d6cc  53                   push ebx
// 0054d6cd  51                   push ecx
// 0054d6ce  52                   push edx
// 0054d6cf  b801000000           mov eax, 1
// 0054d6d4  0fa2                 cpuid 
// 0054d6d6  89542414             mov dword ptr [esp + 0x14], edx
// 0054d6da  5a                   pop edx
// 0054d6db  59                   pop ecx
// 0054d6dc  5b                   pop ebx
// 0054d6dd  58                   pop eax
// 0054d6de  8b442404             mov eax, dword ptr [esp + 4]
// 0054d6e2  8bc8                 mov ecx, eax
// 0054d6e4  c1e910               shr ecx, 0x10
// 0054d6e7  8bd0                 mov edx, eax
// 0054d6e9  c1ea17               shr edx, 0x17
// 0054d6ec  80e101               and cl, 1
// 0054d6ef  80e201               and dl, 1
// 0054d6f2  880d489ec000         mov byte ptr [0xc09e48], cl
// 0054d6f8  8815499ec000         mov byte ptr [0xc09e49], dl
// 0054d6fe  8bc8                 mov ecx, eax
// 0054d700  8bd0                 mov edx, eax
// 0054d702  c1e919               shr ecx, 0x19
// 0054d705  c1ea1a               shr edx, 0x1a
// 0054d708  80e101               and cl, 1
// 0054d70b  80e201               and dl, 1
// 0054d70e  c1e81f               shr eax, 0x1f
// 0054d711  2401                 and al, 1
// 0054d713  880d4a9ec000         mov byte ptr [0xc09e4a], cl
// 0054d719  88154b9ec000         mov byte ptr [0xc09e4b], dl
// 0054d71f  a24c9ec000           mov byte ptr [0xc09e4c], al
// 0054d724  5b                   pop ebx
// 0054d725  59                   pop ecx
// 0054d726  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getStandardProcessorExtensions@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
