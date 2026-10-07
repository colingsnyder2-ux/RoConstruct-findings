// roc 2011-06 0043d8f0  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d8f0
//
// 0043d8f0  b8687fa600           mov eax, 0xa67f68
// 0043d8f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d8f0()
{
    return &G;
}
