// roc 2010-06 006a1150  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a1150
//
// 006a1150  b8108cbc00           mov eax, 0xbc8c10
// 006a1155  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a1150()
{
    return &G;
}
