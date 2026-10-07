// roc 2009-06 004bd980  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bd980
//
// 004bd980  b808e59e00           mov eax, 0x9ee508
// 004bd985  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004bd980()
{
    return &G;
}
