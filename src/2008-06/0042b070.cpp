// from server: 100% by auto
// roc 2008-06 0042b070  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b070
//
// 0042b070  b850e99200           mov eax, 0x92e950
// 0042b075  c3                   ret 

extern char G;

char* func_0042b070()
{
    return &G;
}
