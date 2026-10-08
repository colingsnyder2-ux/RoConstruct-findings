// from server: 69% by colin
// roc 2007-08 0054c470  unit: UString_sink::?$stream_buffer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c470

extern "C" void* __stdcall append_impl(void*, const char*, unsigned int);

struct UString_sink {
    char pad0[0x14];
    char** pcur;
    char pad1[0x24 - 0x18];
    char** pend;
    char pad2[0x34 - 0x28];
    unsigned int* pcap;
    char pad3[0x40 - 0x38];
    void* str;
    char pad4[0x4c - 0x44];
    unsigned int base;
    unsigned int size;
    void write();
};

void UString_sink::write() {
    char* cur = *pcur;
    char* end = *pend;
    int n = (int)(end - cur);
    if (n > 0) {
        append_impl(str, cur, (unsigned int)n);
        unsigned int b = base;
        *pcur = (char*)b;
        *pend = (char*)b;
        *pcap = size + b - b;
    }
}
