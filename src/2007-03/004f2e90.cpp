// roc 2007-03 004f2e90  unit: seg_004f0000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2e90
//
// 004f2e90  51                   push ecx
// 004f2e91  803d6dad8b0000       cmp byte ptr [0x8bad6d], 0
// 004f2e98  53                   push ebx
// 004f2e99  7459                 je 0x4f2ef4
// 004f2e9b  50                   push eax
// 004f2e9c  53                   push ebx
// 004f2e9d  51                   push ecx
// 004f2e9e  52                   push edx
// 004f2e9f  b801000000           mov eax, 1
// 004f2ea4  0fa2                 cpuid 
// 004f2ea6  89542414             mov dword ptr [esp + 0x14], edx
// 004f2eaa  5a                   pop edx
// 004f2eab  59                   pop ecx
// 004f2eac  5b                   pop ebx
// 004f2ead  58                   pop eax
// 004f2eae  8b442404             mov eax, dword ptr [esp + 4]
// 004f2eb2  8bc8                 mov ecx, eax
// 004f2eb4  c1e910               shr ecx, 0x10
// 004f2eb7  8bd0                 mov edx, eax
// 004f2eb9  c1ea17               shr edx, 0x17
// 004f2ebc  80e101               and cl, 1
// 004f2ebf  80e201               and dl, 1
// 004f2ec2  880d68ad8b00         mov byte ptr [0x8bad68], cl
// 004f2ec8  881569ad8b00         mov byte ptr [0x8bad69], dl
// 004f2ece  8bc8                 mov ecx, eax
// 004f2ed0  8bd0                 mov edx, eax
// 004f2ed2  c1e919               shr ecx, 0x19
// 004f2ed5  c1ea1a               shr edx, 0x1a
// 004f2ed8  80e101               and cl, 1
// 004f2edb  80e201               and dl, 1
// 004f2ede  c1e81f               shr eax, 0x1f
// 004f2ee1  2401                 and al, 1
// 004f2ee3  880d6aad8b00         mov byte ptr [0x8bad6a], cl
// 004f2ee9  88156bad8b00         mov byte ptr [0x8bad6b], dl
// 004f2eef  a26cad8b00           mov byte ptr [0x8bad6c], al
// 004f2ef4  5b                   pop ebx
// 004f2ef5  59                   pop ecx
// 004f2ef6  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?getStandardProcessorExtensions@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
