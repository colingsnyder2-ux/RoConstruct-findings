// from server: 36% by colin
struct CXTPReportInplaceList {
    char pad[0x58];
    void* field_58;
    void* field_5c;
    void* field_60;
    void* field_64;
    void func_006d10e0(void* arg);
};

extern "C" {
    void __stdcall func_77ddac(void*);
    void __stdcall func_77d434(void*, const void*);
    void* __stdcall func_77dd98(void*);
    int __stdcall func_77d56c(void*, void*);
    void __stdcall func_77ddbc(void*);
    void* __stdcall func_73839a(void*, void*, void*);
    void* __stdcall func_654ba0(void*, void*);
    int __stdcall func_653870(void*);
    void* __stdcall func_699220(void*, int);
}

void CXTPReportInplaceList::func_006d10e0(void* arg)
{
    char buf1[8];
    char buf2[8];
    void* p;
    int count;
    int i;
    void* item;

    func_77ddac(buf1);
    func_77ddac(buf2);

    func_73839a(this, arg, buf1);

    p = func_654ba0(field_64, field_60);
    count = func_653870(*(void**)((char*)p + 0x28));

    if (count > 0) {
        for (i = 0; i < count; i++) {
            item = func_699220(*(void**)((char*)p + 0x28), i);
            func_77d434(buf1, (char*)item + 0x20);
            void* tmp = func_77dd98(buf2);
            if (func_77d56c(buf1, tmp) == 0) {
                void* vtbl = *(void**)field_58;
                void (*fn)(void*, void*, void*, void*) = *(void (**)(void*, void*, void*, void*))((char*)vtbl + 0x1c0);
                fn(field_58, field_5c, field_64, field_60);
                break;
            }
        }
    }

    func_77ddbc(buf2);
    func_77ddbc(buf1);
}
