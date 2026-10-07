// roc 2011-06 0067ce00  unit: RBX::ExtrudedPartInstance  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067ce00
//
// 0067ce00  b834b4c500           mov eax, 0xc5b434
// 0067ce05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067ce00()
{
    return &G;
}
