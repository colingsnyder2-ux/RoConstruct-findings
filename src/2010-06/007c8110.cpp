// roc 2010-06 007c8110  unit: CXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c8110
//
// 007c8110  b8f87ea500           mov eax, 0xa57ef8
// 007c8115  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007c8110()
{
    return &G;
}
