// from server: 78% by colin
// roc 2007-08 0054bea0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bea0
//
// 0054bea0  f6415401             test byte ptr [ecx + 0x54], 1
// 0054bea4  7421                 je 0x54bec7
// 0054bea6  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 0054bea9  85c9                 test ecx, ecx
// 0054beab  741a                 je 0x54bec7
// 0054bead  8b442404             mov eax, dword ptr [esp + 4]
// 0054beb1  50                   push eax
// 0054beb2  8d542408             lea edx, [esp + 8]
// 0054beb6  52                   push edx
// 0054beb7  ff15f8e47700         call dword ptr [0x77e4f8]
// 0054bebd  8d4c2404             lea ecx, [esp + 4]
// 0054bec1  ff15fce47700         call dword ptr [0x77e4fc]
// 0054bec7  c20400               ret 4

struct DUoutput_stream_buffer {
    char pad[0x44];
    void* field_44;
    char pad2[0x54 - 0x48];
    unsigned char field_54;
    void imbue(const void* loc);
};

extern "C" void __stdcall pubimbue_wrapper(void* buf, void* out, const void* loc);
extern "C" void __stdcall locale_dtor(void* loc);

void DUoutput_stream_buffer::imbue(const void* loc) {
    if ((field_54 & 1) && field_44) {
        char tmp[4];
        pubimbue_wrapper(field_44, tmp, loc);
        locale_dtor(tmp);
    }
}
