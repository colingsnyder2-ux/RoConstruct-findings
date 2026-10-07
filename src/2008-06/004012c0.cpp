// roc 2008-06 004012c0  unit: CPublishAsPlaceDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004012c0
//
// 004012c0  b880ac8000           mov eax, 0x80ac80
// 004012c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004012c0()
{
    return &G;
}
