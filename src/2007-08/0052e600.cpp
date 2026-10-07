// roc 2007-08 0052e600  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0052e600
//
// 0052e600  b818888900           mov eax, 0x898818
// 0052e605  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0052e600()
{
    return &G;
}
