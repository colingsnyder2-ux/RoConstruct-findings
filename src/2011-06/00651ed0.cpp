// from server: 100% by tester
// roc 2011-06 00651ed0  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00651ed0
//
// 00651ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00651ed4  83e800               sub eax, 0
// 00651ed7  741c                 je 0x651ef5
// 00651ed9  83e801               sub eax, 1
// 00651edc  7411                 je 0x651eef
// 00651ede  83e801               sub eax, 1
// 00651ee1  7406                 je 0x651ee9
// 00651ee3  b806000000           mov eax, 6
// 00651ee8  c3                   ret 
// 00651ee9  b802000000           mov eax, 2
// 00651eee  c3                   ret 
// 00651eef  b801000000           mov eax, 1
// 00651ef4  c3                   ret 
// 00651ef5  33c0                 xor eax, eax
// 00651ef7  c3                   ret 

int func_00746560(int value)
{
    switch (value)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    default:
        return 6;
    }
}
