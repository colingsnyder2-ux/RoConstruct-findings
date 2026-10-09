// roc 2009-12 0083ff50  unit: CXTPCustomizeSheet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ff50
//
// 0083ff50  56                   push esi
// 0083ff51  6a01                 push 1
// 0083ff53  8bf1                 mov esi, ecx
// 0083ff55  e88e3bfbff           call 0x7f3ae8
// 0083ff5a  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0083ff60  50                   push eax
// 0083ff61  6a69                 push 0x69
// 0083ff63  8bce                 mov ecx, esi
// 0083ff65  e8c647fbff           call 0x7f4730
// 0083ff6a  8bc8                 mov ecx, eax
// 0083ff6c  e86d3ffbff           call 0x7f3ede
// 0083ff71  8bce                 mov ecx, esi
// 0083ff73  e8f8feffff           call 0x83fe70
// 0083ff78  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 0083ff7e  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0083ff81  895128               mov dword ptr [ecx + 0x28], edx
// 0083ff84  5e                   pop esi
// 0083ff85  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000d@CXTPCustomizeSheet@ns_ROCX00000d@ns_ROCX00002e@@QAEXXZ)

namespace ns_ROCX00000d {
extern char G;

char* fn_ROCX00000d()
{
    return &G;
}
}
