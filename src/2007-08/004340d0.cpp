// roc 2007-08 004340d0  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004340d0
//
// 004340d0  b83cc27800           mov eax, 0x78c23c
// 004340d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004340d0()
{
    return &G;
}
