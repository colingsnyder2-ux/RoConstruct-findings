// from server: 100% by auto
// roc 2008-06 0042cf40  unit: boost::any::M::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042cf40
//
// 0042cf40  b8dcbe9200           mov eax, 0x92bedc
// 0042cf45  c3                   ret 

extern char G;

char* func_0042cf40()
{
    return &G;
}
