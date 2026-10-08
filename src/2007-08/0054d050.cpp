// from server: 73% by colin
// roc 2007-08 0054d050  unit: UString_sink::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d050
//
// 0054d050  f6415801             test byte ptr [ecx + 0x58], 1
// 0054d054  7421                 je 0x54d077
// 0054d056  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0054d059  85c9                 test ecx, ecx
// 0054d05b  741a                 je 0x54d077
// 0054d05d  8b442404             mov eax, dword ptr [esp + 4]
// 0054d061  50                   push eax
// 0054d062  8d542408             lea edx, [esp + 8]
// 0054d066  52                   push edx
// 0054d067  ff15f8e47700         call dword ptr [0x77e4f8]
// 0054d06d  8d4c2404             lea ecx, [esp + 4]
// 0054d071  ff15fce47700         call dword ptr [0x77e4fc]
// 0054d077  c20400               ret 4

struct UString_sink_stream_buffer {
    char pad[0x48];
    void* field_48;
    char pad2[0x58 - 0x4c];
    unsigned char flags_58;
    void imbue(const void* loc);
};

extern "C" void* __stdcall pubimbue_impl(void* buf, const void* loc);
extern "C" void __stdcall locale_dtor(void* loc);

void UString_sink_stream_buffer::imbue(const void* loc)
{
    if ((flags_58 & 1) && field_48)
    {
        char buf[4];
        pubimbue_impl(buf, loc);
        locale_dtor(buf);
    }
}
