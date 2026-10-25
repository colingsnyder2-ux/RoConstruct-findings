// from server: 100% by auto
// roc 2008-06 00437820  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437820
//
// 00437820  b870358100           mov eax, 0x813570
// 00437825  c3                   ret 

extern char G;

char* func_00437820()
{
    return &G;
}
