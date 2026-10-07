// roc 2009-06 004fefc0  unit: RakPeer  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fefc0
//
// 004fefc0  8b4104               mov eax, dword ptr [ecx + 4]
// 004fefc3  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004fefc6  56                   push esi
// 004fefc7  57                   push edi
// 004fefc8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004fefcc  8d3438               lea esi, [eax + edi]
// 004fefcf  3bf2                 cmp esi, edx
// 004fefd1  720e                 jb 0x4fefe1
// 004fefd3  8b09                 mov ecx, dword ptr [ecx]
// 004fefd5  2bc2                 sub eax, edx
// 004fefd7  03c7                 add eax, edi
// 004fefd9  5f                   pop edi
// 004fefda  8d0481               lea eax, [ecx + eax*4]
// 004fefdd  5e                   pop esi
// 004fefde  c20400               ret 4
// 004fefe1  8b11                 mov edx, dword ptr [ecx]
// 004fefe3  5f                   pop edi
// 004fefe4  8d04b2               lea eax, [edx + esi*4]
// 004fefe7  5e                   pop esi
// 004fefe8  c20400               ret 4
// library rbx2016-raknet/FileList.cpp (function ??A?$Queue@PAD@DataStructures@@QBEAAPADI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
