// roc 2012-06 004b0c60  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b0c60
//
// 004b0c60  b8c035b600           mov eax, 0xb635c0
// 004b0c65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004b0c60()
{
    return &G;
}
