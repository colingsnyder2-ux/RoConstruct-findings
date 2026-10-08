// roc 2007-08 0044d010  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044d010
//
// 0044d010  b8e80e7900           mov eax, 0x790ee8
// 0044d015  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044d010()
{
    return &G;
}
