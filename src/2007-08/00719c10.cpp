// roc 2007-08 00719c10  unit: CXTPRibbonSystemPopupBarPage  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00719c10
//
// 00719c10  b86ca78b00           mov eax, 0x8ba76c
// 00719c15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00719c10()
{
    return &G;
}
