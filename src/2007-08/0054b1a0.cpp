// from server: 100% by colin
// roc 2007-08 0054b1a0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b1a0
//
// 0054b1a0  80790400             cmp byte ptr [ecx + 4], 0
// 0054b1a4  7404                 je 0x54b1aa
// 0054b1a6  c6410400             mov byte ptr [ecx + 4], 0
// 0054b1aa  c3                   ret 

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
