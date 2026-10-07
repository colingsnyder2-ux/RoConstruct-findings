// roc 2007-08 004ff320  unit: G3D::Shader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff320
//
// 004ff320  51                   push ecx
// 004ff321  803d9d088c0000       cmp byte ptr [0x8c089d], 0
// 004ff328  53                   push ebx
// 004ff329  7459                 je 0x4ff384
// 004ff32b  50                   push eax
// 004ff32c  53                   push ebx
// 004ff32d  51                   push ecx
// 004ff32e  52                   push edx
// 004ff32f  b801000000           mov eax, 1
// 004ff334  0fa2                 cpuid 
// 004ff336  89542414             mov dword ptr [esp + 0x14], edx
// 004ff33a  5a                   pop edx
// 004ff33b  59                   pop ecx
// 004ff33c  5b                   pop ebx
// 004ff33d  58                   pop eax
// 004ff33e  8b442404             mov eax, dword ptr [esp + 4]
// 004ff342  8bc8                 mov ecx, eax
// 004ff344  c1e910               shr ecx, 0x10
// 004ff347  8bd0                 mov edx, eax
// 004ff349  c1ea17               shr edx, 0x17
// 004ff34c  80e101               and cl, 1
// 004ff34f  80e201               and dl, 1
// 004ff352  880d98088c00         mov byte ptr [0x8c0898], cl
// 004ff358  881599088c00         mov byte ptr [0x8c0899], dl
// 004ff35e  8bc8                 mov ecx, eax
// 004ff360  8bd0                 mov edx, eax
// 004ff362  c1e919               shr ecx, 0x19
// 004ff365  c1ea1a               shr edx, 0x1a
// 004ff368  80e101               and cl, 1
// 004ff36b  80e201               and dl, 1
// 004ff36e  c1e81f               shr eax, 0x1f
// 004ff371  2401                 and al, 1
// 004ff373  880d9a088c00         mov byte ptr [0x8c089a], cl
// 004ff379  88159b088c00         mov byte ptr [0x8c089b], dl
// 004ff37f  a29c088c00           mov byte ptr [0x8c089c], al
// 004ff384  5b                   pop ebx
// 004ff385  59                   pop ecx
// 004ff386  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getStandardProcessorExtensions@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
