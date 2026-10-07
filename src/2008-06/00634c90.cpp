// roc 2008-06 00634c90  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634c90
//
// 00634c90  b830ef9500           mov eax, 0x95ef30
// 00634c95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00634c90()
{
    return &G;
}
