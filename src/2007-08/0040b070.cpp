// from server: 58% by colin
struct CNullDoc {
    char pad[0x104];
    void* field_104;
    void method_40b070();
};

extern "C" {
    void __stdcall sub_6386B0(void*);
    void __stdcall sub_637300();
    void __stdcall sub_40ACE0(int);
    void __stdcall sub_62FF56();
    void* __stdcall sub_77DD98();
    void __stdcall sub_77DDBC();
    int __stdcall sub_77ECD8(void*, unsigned int, unsigned int, int);
}

void CNullDoc::method_40b070()
{
    void* p;
    sub_6386B0(&p);
    void* h = sub_77DD98();
    void* obj = (void*)0;
    sub_637300();
    int result = sub_77ECD8(obj, 0xFFFFFFFF, 0, (int)h);
    if (result == -1) {
        void* h2 = sub_77DD98();
        void* v = *(void**)((char*)field_104 + 0x16c);
        sub_77ECD8(*(void**)((char*)v + 0x20), 0x181, 0, (int)h2);
        void* v2 = *(void**)((char*)field_104 + 0x16c);
        int r = sub_77ECD8(*(void**)((char*)v2 + 0x20), 0x18b, 0, 0);
        if (r > 10) {
            void* v3 = *(void**)((char*)field_104 + 0x16c);
            int r2 = sub_77ECD8(*(void**)((char*)v3 + 0x20), 0x18b, 0, 0);
            sub_40ACE0(r2 - 1);
        }
    }
    void* h3 = sub_77DD98();
    sub_62FF56();
    void* v4 = *(void**)((char*)field_104 + 0x178);
    sub_77ECD8(*(void**)((char*)v4 + 0x20), 0xb1, 0, 0xFFFFFFFF);
    sub_77ECD8(*(void**)((char*)v4 + 0x20), 0xb7, 0, 0);
    sub_77DDBC();
}
