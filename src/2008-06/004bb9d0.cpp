// from server: 47% by colin
struct ProfiledRakPeer {
    char pad[8];
    unsigned short field_8;
    char pad2[0x22c - 0xa];
    void* field_22c;
    void method(void* out, const void* addr);
};

extern "C" int __stdcall sub_4a9820(void* a, void* b);

void ProfiledRakPeer::method(void* out, const void* addr) {
    unsigned short saved = *(unsigned short*)0x93cb74;
    void* savedPtr = *(void**)0x93cb70;
    unsigned short idx = 0;
    unsigned int i = 0;
    while (idx < field_8) {
        char* base = (char*)field_22c + i * 0x850;
        if (sub_4a9820(base + 4, (char*)out + 4) || sub_4a9820((char*)out + 4, (void*)0x93cb70)) {
            if (base[0] != 0) {
                *(void**)out = *(void**)(base + 0xc);
                *(unsigned short*)((char*)out + 4) = *(unsigned short*)(base + 0x10);
                return;
            }
            savedPtr = *(void**)(base + 0xc);
            saved = *(unsigned short*)(base + 0x10);
        }
        idx++;
        i++;
    }
    *(void**)out = savedPtr;
    *(unsigned short*)((char*)out + 4) = saved;
}
