// roc 2011-06 00450370  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00450370
//
// 00450370  b894c5a600           mov eax, 0xa6c594
// 00450375  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00450370()
{
    return &G;
}
