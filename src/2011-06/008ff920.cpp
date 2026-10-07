// roc 2011-06 008ff920  unit: CXTPRibbonSystemPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ff920
//
// 008ff920  b894d6ad00           mov eax, 0xadd694
// 008ff925  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008ff920()
{
    return &G;
}
