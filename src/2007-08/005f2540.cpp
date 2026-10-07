// roc 2007-08 005f2540  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2540
//
// 005f2540  b8880f8b00           mov eax, 0x8b0f88
// 005f2545  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005f2540()
{
    return &G;
}
