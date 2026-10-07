// roc 2007-08 0044b960  unit: CRobloxControlColorSelector  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0044b960
//
// 0044b960  b8bc928800           mov eax, 0x8892bc
// 0044b965  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044b960()
{
    return &G;
}
