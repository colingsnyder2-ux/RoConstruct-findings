// roc 2007-08 005f2220  unit: G3D::$$A6AXVCoordinateFrame::V?$function::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2220
//
// 005f2220  b8300f8b00           mov eax, 0x8b0f30
// 005f2225  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005f2220()
{
    return &G;
}
