// from server: 26% by atomic.potato
struct VContentProvider {
    void* field0;
    VContentProvider* construct(unsigned int id);
};

extern "C" void* __stdcall sub_55bea0(unsigned int id, int zero);
extern "C" void __stdcall sub_55d9f0();
extern "C" void __stdcall sub_55d950();

struct GlobalObj {
    char pad[0xc];
    void* (__stdcall *fnC)();
};

extern GlobalObj g_obj;

VContentProvider* VContentProvider::construct(unsigned int id)
{
    void* p = g_obj.fnC();
    field0 = (char*)p + 0x10;
    if (id == 0) {
        sub_55d950();
    } else if ((id & 0xffff0000) != 0) {
        const char* s = (const char*)id;
        int len = 0;
        while (s[len]) len++;
        sub_55d950();
    } else {
        unsigned short w = (unsigned short)id;
        void* r = sub_55bea0(w, 0);
        if (r) {
            sub_55d9f0();
        }
    }
    return this;
}
