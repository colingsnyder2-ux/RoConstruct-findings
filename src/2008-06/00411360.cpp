// roc 2008-06 00411360  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411360
//
// 00411360  b888df8000           mov eax, 0x80df88
// 00411365  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00411360()
{
    return &G;
}
