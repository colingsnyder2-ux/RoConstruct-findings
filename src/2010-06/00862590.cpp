// roc 2010-06 00862590  unit: CXTPDockingPaneMiniWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00862590
//
// 00862590  b840b1a600           mov eax, 0xa6b140
// 00862595  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00862590()
{
    return &G;
}
