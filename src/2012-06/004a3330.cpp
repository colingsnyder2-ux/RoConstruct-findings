// roc 2012-06 004a3330  unit: CScriptReviewView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a3330
//
// 004a3330  b80411b600           mov eax, 0xb61104
// 004a3335  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a3330()
{
    return &G;
}
