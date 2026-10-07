// roc 2007-08 0042b300  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b300
//
// 0042b300  b888668800           mov eax, 0x886688
// 0042b305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042b300()
{
    return &G;
}
