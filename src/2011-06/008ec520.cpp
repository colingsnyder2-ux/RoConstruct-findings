// roc 2011-06 008ec520  unit: CXTPRichRender  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec520
//
// 008ec520  b8a89aad00           mov eax, 0xad9aa8
// 008ec525  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008ec520()
{
    return &G;
}
