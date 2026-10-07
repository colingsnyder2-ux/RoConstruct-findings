// roc 2011-06 0043d970  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d970
//
// 0043d970  b8847fa600           mov eax, 0xa67f84
// 0043d975  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d970()
{
    return &G;
}
