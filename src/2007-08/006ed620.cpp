// roc 2007-08 006ed620  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ed620
//
// 006ed620  b838af7d00           mov eax, 0x7daf38
// 006ed625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ed620()
{
    return &G;
}
