// roc 2010-06 004097c0  unit: boost::bad_any_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004097c0
//
// 004097c0  b8600aa000           mov eax, 0xa00a60
// 004097c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004097c0()
{
    return &G;
}
