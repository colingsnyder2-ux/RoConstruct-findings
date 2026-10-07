// roc 2009-06 0043d860  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043d860
//
// 0043d860  b8445d8b00           mov eax, 0x8b5d44
// 0043d865  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d860()
{
    return &G;
}
