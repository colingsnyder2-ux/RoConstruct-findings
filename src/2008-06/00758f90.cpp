// from server: 100% by auto
// roc 2008-06 00758f90  unit: CXTPDockingPaneAutoHidePanel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00758f90
//
// 00758f90  b87c558600           mov eax, 0x86557c
// 00758f95  c3                   ret 

extern char G;

char* func_00758f90()
{
    return &G;
}
