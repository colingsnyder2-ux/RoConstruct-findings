// roc 2012-06 00462240  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462240
//
// 00462240  b81075b500           mov eax, 0xb57510
// 00462245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00462240()
{
    return &G;
}
