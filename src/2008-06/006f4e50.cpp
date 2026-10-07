// roc 2008-06 006f4e50  unit: CXTPControlWindowList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f4e50
//
// 006f4e50  b890779600           mov eax, 0x967790
// 006f4e55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f4e50()
{
    return &G;
}
