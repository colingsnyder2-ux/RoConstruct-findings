// roc 2011-06 0048f430  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048f430
//
// 0048f430  b8a045a700           mov eax, 0xa745a0
// 0048f435  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048f430()
{
    return &G;
}
