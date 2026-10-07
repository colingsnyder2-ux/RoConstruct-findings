// roc 2010-06 004750b0  unit: CScriptReviewView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004750b0
//
// 004750b0  b83018a100           mov eax, 0xa11830
// 004750b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004750b0()
{
    return &G;
}
