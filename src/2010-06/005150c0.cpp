// roc 2010-06 005150c0  unit: RakPeer  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005150c0
//
// 005150c0  8b4104               mov eax, dword ptr [ecx + 4]
// 005150c3  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005150c6  56                   push esi
// 005150c7  57                   push edi
// 005150c8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005150cc  8d3438               lea esi, [eax + edi]
// 005150cf  3bf2                 cmp esi, edx
// 005150d1  720e                 jb 0x5150e1
// 005150d3  8b09                 mov ecx, dword ptr [ecx]
// 005150d5  2bc2                 sub eax, edx
// 005150d7  03c7                 add eax, edi
// 005150d9  5f                   pop edi
// 005150da  8d0481               lea eax, [ecx + eax*4]
// 005150dd  5e                   pop esi
// 005150de  c20400               ret 4
// 005150e1  8b11                 mov edx, dword ptr [ecx]
// 005150e3  5f                   pop edi
// 005150e4  8d04b2               lea eax, [edx + esi*4]
// 005150e7  5e                   pop esi
// 005150e8  c20400               ret 4
// library rbx2016-raknet/FileList.cpp (function ??A?$Queue@PAD@DataStructures@@QBEAAPADI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
