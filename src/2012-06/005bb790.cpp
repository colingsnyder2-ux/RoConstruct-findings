// roc 2012-06 005bb790  unit: RakNet::RakPeer  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb790
//
// 005bb790  8b4104               mov eax, dword ptr [ecx + 4]
// 005bb793  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005bb796  56                   push esi
// 005bb797  57                   push edi
// 005bb798  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005bb79c  8d3438               lea esi, [eax + edi]
// 005bb79f  3bf2                 cmp esi, edx
// 005bb7a1  720e                 jb 0x5bb7b1
// 005bb7a3  8b09                 mov ecx, dword ptr [ecx]
// 005bb7a5  2bc2                 sub eax, edx
// 005bb7a7  03c7                 add eax, edi
// 005bb7a9  5f                   pop edi
// 005bb7aa  8d0481               lea eax, [ecx + eax*4]
// 005bb7ad  5e                   pop esi
// 005bb7ae  c20400               ret 4
// 005bb7b1  8b11                 mov edx, dword ptr [ecx]
// 005bb7b3  5f                   pop edi
// 005bb7b4  8d04b2               lea eax, [edx + esi*4]
// 005bb7b7  5e                   pop esi
// 005bb7b8  c20400               ret 4
// library rbx2016-raknet/FileList.cpp (function ??A?$Queue@PAD@DataStructures@@QBEAAPADI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
