// roc 2009-06 0080a900  unit: CXTCaptionButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080a900
//
// 0080a900  b878c19000           mov eax, 0x90c178
// 0080a905  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080a900()
{
    return &G;
}
