// from server: 100% by colin
// roc 2007-08 0054b020  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b020
//
// 0054b020  80790100             cmp byte ptr [ecx + 1], 0
// 0054b024  7404                 je 0x54b02a
// 0054b026  c6410100             mov byte ptr [ecx + 1], 0
// 0054b02a  c3                   ret 

struct S_func_0054b020
{
    char z0;
    char flag;
    void f();
};

void S_func_0054b020::f()
{
    if (flag)
        flag = 0;
}
