// roc 2008-06 0077aac0  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077aac0
//
// 0077aac0  b834918600           mov eax, 0x869134
// 0077aac5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0077aac0()
{
    return &G;
}
