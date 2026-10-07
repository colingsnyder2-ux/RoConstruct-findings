// roc 2007-08 005f27e0  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005f27e0
//
// 005f27e0  b8d80f8b00           mov eax, 0x8b0fd8
// 005f27e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005f27e0()
{
    return &G;
}
