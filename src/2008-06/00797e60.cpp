// from server: 100% by auto
// roc 2008-06 00797e60  unit: CXTPRibbonGroupControlPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797e60
//
// 00797e60  b820b89600           mov eax, 0x96b820
// 00797e65  c3                   ret 

extern char G;

char* func_00797e60()
{
    return &G;
}
