// roc 2008-06 00465a40  unit: CScriptEditor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465a40
//
// 00465a40  b83cb68100           mov eax, 0x81b63c
// 00465a45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00465a40()
{
    return &G;
}
