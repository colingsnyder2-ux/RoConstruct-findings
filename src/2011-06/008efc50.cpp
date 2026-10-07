// roc 2011-06 008efc50  unit: CXTColorPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008efc50
//
// 008efc50  b8e49dad00           mov eax, 0xad9de4
// 008efc55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008efc50()
{
    return &G;
}
