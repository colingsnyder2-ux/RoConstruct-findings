// roc 2011-06 00520640  unit: RBX::Network::ProfiledRakPeer  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00520640
//
// 00520640  8b4104               mov eax, dword ptr [ecx + 4]
// 00520643  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00520646  56                   push esi
// 00520647  57                   push edi
// 00520648  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0052064c  8d3438               lea esi, [eax + edi]
// 0052064f  3bf2                 cmp esi, edx
// 00520651  720e                 jb 0x520661
// 00520653  8b09                 mov ecx, dword ptr [ecx]
// 00520655  2bc2                 sub eax, edx
// 00520657  03c7                 add eax, edi
// 00520659  5f                   pop edi
// 0052065a  8d0481               lea eax, [ecx + eax*4]
// 0052065d  5e                   pop esi
// 0052065e  c20400               ret 4
// 00520661  8b11                 mov edx, dword ptr [ecx]
// 00520663  5f                   pop edi
// 00520664  8d04b2               lea eax, [edx + esi*4]
// 00520667  5e                   pop esi
// 00520668  c20400               ret 4
// library rbx2016-raknet/FileList.cpp (function ??A?$Queue@PAD@DataStructures@@QBEAAPADI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
