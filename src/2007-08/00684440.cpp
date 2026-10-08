// roc 2007-08 00684440  unit: RBX::PAVSoundChannel::?$sp_counted_impl_pd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684440
//
// 00684440  b8f8f17c00           mov eax, 0x7cf1f8
// 00684445  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00684440()
{
    return &G;
}
