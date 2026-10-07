// roc 2011-06 0086ad60  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ad60
//
// 0086ad60  b868bbac00           mov eax, 0xacbb68
// 0086ad65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0086ad60()
{
    return &G;
}
