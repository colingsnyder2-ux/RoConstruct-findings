// roc 2012-06 004a7260  unit: CTaskSchedulerPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a7260
//
// 004a7260  b8e824b600           mov eax, 0xb624e8
// 004a7265  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a7260()
{
    return &G;
}
