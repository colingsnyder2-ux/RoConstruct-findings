// from server: 73% by colin
// roc-repair: fix member offsets to match target layout
typedef unsigned long DWORD;

struct DUoutput {
    struct basic_null_device {
        struct stream_buffer {
            char pad_00[0x10];
            DWORD field_10;
            char pad_14[0x0c];
            DWORD field_20;
            char pad_24[0x0c];
            DWORD field_30;
            char pad_34[0x14];
            DWORD field_48;

            void set_fields();
        };
    };
};

void DUoutput::basic_null_device::stream_buffer::set_fields() {
    DWORD eax = this->field_48;
    DWORD edx = this->field_10;
    *(DWORD*)edx = eax;
    edx = this->field_20;
    *(DWORD*)edx = eax;
    edx = eax;
    edx -= eax;
    *(DWORD*)this->field_30 = edx;
}
