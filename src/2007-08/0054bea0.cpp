// from server: 57% by colin
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

struct streambuf_base {
    char pad[0x44];
    void* ptr44;
    char pad2[0x54 - 0x44 - 4];
    unsigned char flags54;
};

extern "C" {
    void* __stdcall sub_77e4f8(void*);
    void __stdcall sub_77e4fc(void*);
}

struct DUoutput_stream_buffer : streambuf_base {
    void pubimbue(const void* loc);
};

void DUoutput_stream_buffer::pubimbue(const void* loc) {
    if ((flags54 & 1) && ptr44) {
        void* tmp;
        sub_77e4f8(&tmp);
        sub_77e4fc(&tmp);
    }
}
