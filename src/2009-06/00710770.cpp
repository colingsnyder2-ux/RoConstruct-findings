// roc 2009-06 00710770  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00710770
//
// 00710770  837c240803           cmp dword ptr [esp + 8], 3
// 00710775  7505                 jne 0x71077c
// 00710777  e8f48bffff           call 0x709370
// 0071077c  c20c00               ret 0xc
// copied from an identical function in another client (function ?target_726c70@ns_ROCX000002@@YGXHHH@Z)

namespace ns_ROCX000002 {
extern "C" void __cdecl helper_726ed0();

void __stdcall target_726c70(int a, int b, int c)
{
    if (b == 3)
        helper_726ed0();
}
}
