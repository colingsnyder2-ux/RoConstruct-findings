// from server: 100% by tester
// roc 2010-06 0058d940  unit: seg_00580000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058d940
//
// 0058d940  8a442404             mov al, byte ptr [esp + 4]
// 0058d944  a25442c200           mov byte ptr [0xc24254], al
// 0058d949  c20400               ret 4

typedef unsigned char BYTE;

BYTE g_value;

struct EventDesc
{
    void set(BYTE value);
};

void EventDesc::set(BYTE value)
{
    g_value = value;
}
