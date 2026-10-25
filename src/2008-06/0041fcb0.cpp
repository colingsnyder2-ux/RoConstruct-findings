// from server: 100% by auto
// roc 2008-06 0041fcb0  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041fcb0
//
// 0041fcb0  b84cf48000           mov eax, 0x80f44c
// 0041fcb5  c3                   ret 

extern char G;

char* func_0041fcb0()
{
    return &G;
}
