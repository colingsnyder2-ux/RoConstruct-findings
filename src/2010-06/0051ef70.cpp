// roc 2010-06 0051ef70  unit: CSHA1  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051ef70
//
// 0051ef70  56                   push esi
// 0051ef71  8bf1                 mov esi, ecx
// 0051ef73  8b4604               mov eax, dword ptr [esi + 4]
// 0051ef76  57                   push edi
// 0051ef77  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051ef7b  85c0                 test eax, eax
// 0051ef7d  7612                 jbe 0x51ef91
// 0051ef7f  3bf8                 cmp edi, eax
// 0051ef81  730e                 jae 0x51ef91
// 0051ef83  8b06                 mov eax, dword ptr [esi]
// 0051ef85  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051ef89  890cb8               mov dword ptr [eax + edi*4], ecx
// 0051ef8c  5f                   pop edi
// 0051ef8d  5e                   pop esi
// 0051ef8e  c20c00               ret 0xc
// 0051ef91  3b7e08               cmp edi, dword ptr [esi + 8]
// 0051ef94  7246                 jb 0x51efdc
// 0051ef96  33c9                 xor ecx, ecx
// 0051ef98  8d4701               lea eax, [edi + 1]
// 0051ef9b  894608               mov dword ptr [esi + 8], eax
// 0051ef9e  ba04000000           mov edx, 4
// 0051efa3  f7e2                 mul edx
// 0051efa5  0f90c1               seto cl
// 0051efa8  53                   push ebx
// 0051efa9  f7d9                 neg ecx
// 0051efab  0bc8                 or ecx, eax
// 0051efad  51                   push ecx
// 0051efae  e8cf8c2800           call 0x7a7c82
// 0051efb3  8bd8                 mov ebx, eax
// 0051efb5  33c0                 xor eax, eax
// 0051efb7  83c404               add esp, 4
// 0051efba  394604               cmp dword ptr [esi + 4], eax
// 0051efbd  760f                 jbe 0x51efce
// 0051efbf  90                   nop 
// 0051efc0  8b0e                 mov ecx, dword ptr [esi]
// 0051efc2  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0051efc5  891483               mov dword ptr [ebx + eax*4], edx
// 0051efc8  40                   inc eax
// 0051efc9  3b4604               cmp eax, dword ptr [esi + 4]
// 0051efcc  72f2                 jb 0x51efc0
// 0051efce  8b06                 mov eax, dword ptr [esi]
// 0051efd0  50                   push eax
// 0051efd1  e8708c2800           call 0x7a7c46
// 0051efd6  83c404               add esp, 4
// 0051efd9  891e                 mov dword ptr [esi], ebx
// 0051efdb  5b                   pop ebx
// 0051efdc  397e04               cmp dword ptr [esi + 4], edi
// 0051efdf  7314                 jae 0x51eff5
// 0051efe1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051efe5  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051efe8  8b16                 mov edx, dword ptr [esi]
// 0051efea  89048a               mov dword ptr [edx + ecx*4], eax
// 0051efed  ff4604               inc dword ptr [esi + 4]
// 0051eff0  397e04               cmp dword ptr [esi + 4], edi
// 0051eff3  72f0                 jb 0x51efe5
// 0051eff5  8b4604               mov eax, dword ptr [esi + 4]
// 0051eff8  8b0e                 mov ecx, dword ptr [esi]
// 0051effa  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0051effe  891481               mov dword ptr [ecx + eax*4], edx
// 0051f001  ff4604               inc dword ptr [esi + 4]
// 0051f004  5f                   pop edi
// 0051f005  5e                   pop esi
// 0051f006  c20c00               ret 0xc
// library rbxgs-raknet/RPCMap.cpp (function ?Replace@?$List@PAURPCNode@@@DataStructures@@QAEXQAURPCNode@@0I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
