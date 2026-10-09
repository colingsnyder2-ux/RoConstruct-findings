// roc 2007-03 00494ad0  unit: seg_00490000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00494ad0
//
// 00494ad0  a1048c8b00           mov eax, dword ptr [0x8b8c04]
// 00494ad5  83c001               add eax, 1
// 00494ad8  a3048c8b00           mov dword ptr [0x8b8c04], eax
// 00494add  c3                   ret 
// copied from an identical function in another client (function ?increment@Server@ns_ROCX000001@@QAEHXZ)

namespace ns_ROCX000001 {
int g_counter_8be5dc;

struct Server
{
    int increment();
};

int Server::increment()
{
    return ++g_counter_8be5dc;
}
}
