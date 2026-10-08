// roc 2007-08 00653880  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653880
//
// 00653880  b89c598b00           mov eax, 0x8b599c
// 00653885  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00653880()
{
    return &G;
}
