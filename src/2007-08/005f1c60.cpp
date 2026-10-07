// roc 2007-08 005f1c60  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1c60
//
// 005f1c60  b828108b00           mov eax, 0x8b1028
// 005f1c65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005f1c60()
{
    return &G;
}
