// roc 2011-06 0043d4b0  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d4b0
//
// 0043d4b0  b8ec78a600           mov eax, 0xa678ec
// 0043d4b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d4b0()
{
    return &G;
}
