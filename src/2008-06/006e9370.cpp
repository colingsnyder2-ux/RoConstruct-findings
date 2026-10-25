// from server: 100% by auto
// roc 2008-06 006e9370  unit: CXTPControlColorSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9370
//
// 006e9370  b83c749600           mov eax, 0x96743c
// 006e9375  c3                   ret 

extern char G;

char* func_006e9370()
{
    return &G;
}
