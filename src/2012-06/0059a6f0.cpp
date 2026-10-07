// roc 2012-06 0059a6f0  unit: RBX::Network::Marker  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a6f0
//
// 0059a6f0  8b5104               mov edx, dword ptr [ecx + 4]
// 0059a6f3  56                   push esi
// 0059a6f4  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0059a6f7  57                   push edi
// 0059a6f8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059a6fc  8d043a               lea eax, [edx + edi]
// 0059a6ff  3bc6                 cmp eax, esi
// 0059a701  720d                 jb 0x59a710
// 0059a703  8bc2                 mov eax, edx
// 0059a705  2bc6                 sub eax, esi
// 0059a707  0301                 add eax, dword ptr [ecx]
// 0059a709  03c7                 add eax, edi
// 0059a70b  5f                   pop edi
// 0059a70c  5e                   pop esi
// 0059a70d  c20400               ret 4
// 0059a710  8b01                 mov eax, dword ptr [ecx]
// 0059a712  03c2                 add eax, edx
// 0059a714  03c7                 add eax, edi
// 0059a716  5f                   pop edi
// 0059a717  5e                   pop esi
// 0059a718  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??A?$Queue@_N@DataStructures@@QBEAA_NI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
