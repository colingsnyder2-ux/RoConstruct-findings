// from server: 100% by auto
// roc 2008-06 00507840  unit: G3D::Shader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507840
//
// 00507840  51                   push ecx
// 00507841  803d0535970000       cmp byte ptr [0x973505], 0
// 00507848  53                   push ebx
// 00507849  7459                 je 0x5078a4
// 0050784b  50                   push eax
// 0050784c  53                   push ebx
// 0050784d  51                   push ecx
// 0050784e  52                   push edx
// 0050784f  b801000000           mov eax, 1
// 00507854  0fa2                 cpuid 
// 00507856  89542414             mov dword ptr [esp + 0x14], edx
// 0050785a  5a                   pop edx
// 0050785b  59                   pop ecx
// 0050785c  5b                   pop ebx
// 0050785d  58                   pop eax
// 0050785e  8b442404             mov eax, dword ptr [esp + 4]
// 00507862  8bc8                 mov ecx, eax
// 00507864  c1e910               shr ecx, 0x10
// 00507867  8bd0                 mov edx, eax
// 00507869  c1ea17               shr edx, 0x17
// 0050786c  80e101               and cl, 1
// 0050786f  80e201               and dl, 1
// 00507872  880d00359700         mov byte ptr [0x973500], cl
// 00507878  881501359700         mov byte ptr [0x973501], dl
// 0050787e  8bc8                 mov ecx, eax
// 00507880  8bd0                 mov edx, eax
// 00507882  c1e919               shr ecx, 0x19
// 00507885  c1ea1a               shr edx, 0x1a
// 00507888  80e101               and cl, 1
// 0050788b  80e201               and dl, 1
// 0050788e  c1e81f               shr eax, 0x1f
// 00507891  2401                 and al, 1
// 00507893  880d02359700         mov byte ptr [0x973502], cl
// 00507899  881503359700         mov byte ptr [0x973503], dl
// 0050789f  a204359700           mov byte ptr [0x973504], al
// 005078a4  5b                   pop ebx
// 005078a5  59                   pop ecx
// 005078a6  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getStandardProcessorExtensions@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
