// roc 2007-08 00416f90  unit: Marshaller  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416f90
//
// 00416f90  b8606e4100           mov eax, 0x416e60
// 00416f95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00416f90()
{
    return &G;
}
