// roc 2007-08 0054bed0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bed0
//
// 0054bed0  b8f0cf8900           mov eax, 0x89cff0
// 0054bed5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0054bed0()
{
    return &G;
}
