// roc 2007-08 0054bd60  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bd60
//
// 0054bd60  b8f0ce8900           mov eax, 0x89cef0
// 0054bd65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0054bd60()
{
    return &G;
}
