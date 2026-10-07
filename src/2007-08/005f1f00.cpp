// roc 2007-08 005f1f00  unit: G3D::$$A6AXVVector3::V?$function::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1f00
//
// 005f1f00  b8e00e8b00           mov eax, 0x8b0ee0
// 005f1f05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005f1f00()
{
    return &G;
}
