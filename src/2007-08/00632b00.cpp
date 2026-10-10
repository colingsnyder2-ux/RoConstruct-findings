// from server: 78% by colin
struct CXTPCommandBarKeyboardTip {
    void SetSite(void* p);
};

extern "C" void* __stdcall sub_738358(void*);
extern "C" void* __stdcall sub_738352(void*);
extern "C" void* __stdcall sub_73834C(void*, void*);
extern "C" void* __stdcall sub_630202(void*, void*);
extern "C" void* __stdcall sub_62FF02();

void CXTPCommandBarKeyboardTip::SetSite(void* p)
{
    void* v = p;
    void* obj = *(void**)v;
    void* (__stdcall *fn)(void*) = *(void* (__stdcall**)(void*))((char*)obj + 0x144);
    void* r = fn(v);
    void* a = *(void**)((char*)r + 0x28);
    void* b = sub_738358(a);
    void* c = sub_630202(b, 0);
    if (c != 0) {
        void* d = *(void**)((char*)v + 0xd4);
        if (d != 0) {
            if (*(void**)((char*)c + 0x68) != d) {
                void* e = sub_62FF02();
                void* f = *(void**)((char*)e + 4);
                void* g = sub_738352(f);
                void* h = g;
                if (g != 0) {
                    do {
                        void* i = sub_62FF02();
                        void* j = *(void**)((char*)i + 4);
                        void* k = sub_73834C(j, &h);
                        void* l = sub_738358(k);
                        void* m = sub_630202(l, 0);
                        if (m != 0) {
                            if (*(void**)((char*)m + 0x68) == d) {
                                return;
                            }
                        }
                    } while (h != 0);
                }
            }
        }
    }
}
