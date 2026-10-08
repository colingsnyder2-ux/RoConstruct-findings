// from server: 100% by colin
// roc 2007-08 0054b3a0  unit: UString_sink::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b3a0
//
// 0054b3a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0054b3a3  c1e804               shr eax, 4
// 0054b3a6  83e001               and eax, 1
// 0054b3a9  c3                   ret 

struct UString_sink_stream_buffer
{
    int getFlag() const;
};

int UString_sink_stream_buffer::getFlag() const
{
    return (*(unsigned int*)((char*)this + 0x58) >> 4) & 1;
}
