// roc 2012-06 004a5010  unit: CScriptReviewView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a5010
//
// 004a5010  b82018b600           mov eax, 0xb61820
// 004a5015  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5010()
{
    return &G;
}
