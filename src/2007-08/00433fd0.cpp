// roc 2007-08 00433fd0  unit: CBrowserFrameWnd  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00433fd0
//
// 00433fd0  b820c07800           mov eax, 0x78c020
// 00433fd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433fd0()
{
    return &G;
}
