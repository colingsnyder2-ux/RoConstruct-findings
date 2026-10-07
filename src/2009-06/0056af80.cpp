// roc 2009-06 0056af80  unit: G3D::Shader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056af80
//
// 0056af80  51                   push ecx
// 0056af81  803d1529a40000       cmp byte ptr [0xa42915], 0
// 0056af88  53                   push ebx
// 0056af89  7459                 je 0x56afe4
// 0056af8b  50                   push eax
// 0056af8c  53                   push ebx
// 0056af8d  51                   push ecx
// 0056af8e  52                   push edx
// 0056af8f  b801000000           mov eax, 1
// 0056af94  0fa2                 cpuid 
// 0056af96  89542414             mov dword ptr [esp + 0x14], edx
// 0056af9a  5a                   pop edx
// 0056af9b  59                   pop ecx
// 0056af9c  5b                   pop ebx
// 0056af9d  58                   pop eax
// 0056af9e  8b442404             mov eax, dword ptr [esp + 4]
// 0056afa2  8bc8                 mov ecx, eax
// 0056afa4  c1e910               shr ecx, 0x10
// 0056afa7  8bd0                 mov edx, eax
// 0056afa9  c1ea17               shr edx, 0x17
// 0056afac  80e101               and cl, 1
// 0056afaf  80e201               and dl, 1
// 0056afb2  880d1029a400         mov byte ptr [0xa42910], cl
// 0056afb8  88151129a400         mov byte ptr [0xa42911], dl
// 0056afbe  8bc8                 mov ecx, eax
// 0056afc0  8bd0                 mov edx, eax
// 0056afc2  c1e919               shr ecx, 0x19
// 0056afc5  c1ea1a               shr edx, 0x1a
// 0056afc8  80e101               and cl, 1
// 0056afcb  80e201               and dl, 1
// 0056afce  c1e81f               shr eax, 0x1f
// 0056afd1  2401                 and al, 1
// 0056afd3  880d1229a400         mov byte ptr [0xa42912], cl
// 0056afd9  88151329a400         mov byte ptr [0xa42913], dl
// 0056afdf  a21429a400           mov byte ptr [0xa42914], al
// 0056afe4  5b                   pop ebx
// 0056afe5  59                   pop ecx
// 0056afe6  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getStandardProcessorExtensions@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
