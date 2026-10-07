// roc 2011-06 004901c0  unit: CScriptReviewView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004901c0
//
// 004901c0  b84448a700           mov eax, 0xa74844
// 004901c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004901c0()
{
    return &G;
}
