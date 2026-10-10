// from server: 65% by colin
struct CXMLEnumerator {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    char pad10[0x14];
    void* field24;
    int Set(void* a, void* b);
};

extern "C" int __stdcall sub_6876F0(void* self, void* out);
extern "C" int __stdcall sub_6879F0(void* self, void* val);

int CXMLEnumerator::Set(void* a, void* b)
{
    void* p;
    fieldC = a;
    if (field4 == 0)
        return 0;
    if (field24 != 0) {
        int (*fn)(void*);
        fn = *(int (**)(void*))((char*)*(void**)field4 + 0x90);
        if (fn(field4) == 0)
            return 0;
        sub_6876F0(this, &p);
        sub_6879F0((char*)this + 0x10, p);
        if (p != 0) {
            void (*rel)(void*);
            rel = *(void (**)(void*))((char*)*(void**)p + 8);
            rel(p);
        }
        if (*(void**)((char*)this + 0x10) == 0)
            return 0;
    }
    return 1;
}
