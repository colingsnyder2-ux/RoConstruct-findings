// roc 2011-06 00491e10  unit: CScriptReviewView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00491e10
//
// 00491e10  b8884ca700           mov eax, 0xa74c88
// 00491e15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00491e10()
{
    return &G;
}
