// from server: 52% by colin
// roc 2007-08 0054d290  unit: UString_sink::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d290
//
// 0054d290  51                   push ecx
// 0054d291  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054d295  56                   push esi
// 0054d296  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0054d29a  50                   push eax
// 0054d29b  8bce                 mov ecx, esi
// 0054d29d  c744240800000000     mov dword ptr [esp + 8], 0
// 0054d2a5  e836f1ffff           call 0x54c3e0
// 0054d2aa  8bc6                 mov eax, esi
// 0054d2ac  5e                   pop esi
// 0054d2ad  59                   pop ecx
// 0054d2ae  c3                   ret 

struct UString_sink_stream_buffer
{
    void* field0;
    UString_sink_stream_buffer* construct(void* arg);
};

void __stdcall sub_54c3e0(void* self, void* arg);

UString_sink_stream_buffer* UString_sink_stream_buffer::construct(void* arg)
{
    field0 = 0;
    sub_54c3e0(this, arg);
    return this;
}
