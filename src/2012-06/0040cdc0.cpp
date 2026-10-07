// roc 2012-06 0040cdc0  unit: rbx::bad_placement_any_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0040cdc0
//
// 0040cdc0  b83841b400           mov eax, 0xb44138
// 0040cdc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040cdc0()
{
    return &G;
}
