// from server: 100% by auto
// roc 2008-06 006e9270  unit: CXTPControlButtonColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9270
//
// 006e9270  b820749600           mov eax, 0x967420
// 006e9275  c3                   ret 

extern char G;

char* func_006e9270()
{
    return &G;
}
