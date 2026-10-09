// roc 2011-06 004662c0  unit: RBX::XP6AXPAVGame::V?$bind_t::?$thread_data  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004662c0
//
// 004662c0  8b442404             mov eax, dword ptr [esp + 4]
// 004662c4  8b4804               mov ecx, dword ptr [eax + 4]
// 004662c7  8b10                 mov edx, dword ptr [eax]
// 004662c9  51                   push ecx
// 004662ca  ffd2                 call edx
// 004662cc  8a00                 mov al, byte ptr [eax]
// 004662ce  83c404               add esp, 4
// 004662d1  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000005@ns_ROCX000018@@YADPAX@Z)

namespace ns_ROCX000005 {
extern void G1_func_004a9cf0();
void fn_ROCX000005()
{
    G1_func_004a9cf0();
}
}
