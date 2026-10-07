// roc 2011-06 0043d830  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d830
//
// 0043d830  b8107ea600           mov eax, 0xa67e10
// 0043d835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d830()
{
    return &G;
}
