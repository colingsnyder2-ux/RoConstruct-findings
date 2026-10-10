// from server: 53% by colin
struct Obj {
    void* vfptr;
    Obj* field4;
    Obj** begin;
    Obj** end;
    unsigned char flags14;

    void destroy();
};

extern "C" void __cdecl free_62ff26(void* p);

void Obj::destroy()
{
    if (flags14 & 2) {
        Obj** it = begin;
        while (it != end) {
            Obj* p = *it;
            if (p) {
                void** vt = *(void***)p;
                void (__stdcall *fn)(Obj*) = (void (__stdcall *)(Obj*))vt[2];
                fn(p);
            }
            ++it;
        }
        free_62ff26(begin);
    }
    Obj* q = field4;
    if (q) {
        void** vt = *(void***)q;
        void (__stdcall *fn)(Obj*) = (void (__stdcall *)(Obj*))vt[2];
        fn(q);
    }
}
