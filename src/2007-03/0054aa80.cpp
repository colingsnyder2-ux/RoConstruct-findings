// roc 2007-03 0054aa80  unit: seg_00540000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054aa80
//
// 0054aa80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0054aa83  c1e804               shr eax, 4
// 0054aa86  83e001               and eax, 1
// 0054aa89  c3                   ret 
// copied from an identical function in another client (function ?getFlag@UString_sink_stream_buffer@ns_ROCX00000e@@QBEHXZ)

namespace ns_ROCX00000e {
struct UString_sink_stream_buffer
{
    int getFlag() const;
};

int UString_sink_stream_buffer::getFlag() const
{
    return (*(unsigned int*)((char*)this + 0x58) >> 4) & 1;
}
}
