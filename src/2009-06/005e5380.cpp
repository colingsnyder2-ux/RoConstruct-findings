// roc 2009-06 005e5380  unit: G3D::VColor3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5380
//
// 005e5380  b8c410a000           mov eax, 0xa010c4
// 005e5385  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005e5380()
{
    return &G;
}
