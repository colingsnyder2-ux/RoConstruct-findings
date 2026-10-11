// from server: 100% by tester
// roc 2008-06 005f26b0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f26b0
//
// 005f26b0  80790400             cmp byte ptr [ecx + 4], 0
// 005f26b4  7404                 je 0x5f26ba
// 005f26b6  c6410400             mov byte ptr [ecx + 4], 0
// 005f26ba  c3                   ret 

struct S_func_0054b1a0
{
    int z0;
    char flag;
    void f();
};

void S_func_0054b1a0::f()
{
    if (flag)
        flag = 0;
}
