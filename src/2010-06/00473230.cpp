// roc 2010-06 00473230  unit: CScriptReviewView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00473230
//
// 00473230  b8f013a100           mov eax, 0xa113f0
// 00473235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00473230()
{
    return &G;
}
