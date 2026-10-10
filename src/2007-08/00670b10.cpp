// from server: 51% by colin
struct CXTPToolBar_CControlButtonExpand {
    char pad[0x16c];
    void* field_16c;
    char pad2[0x80 - 0x170 + 0x100];
    void* field_80;
    char pad3[0xfc - 0x84];
    void* field_fc;
    int method_670b10(int, int, int, int);
};

extern "C" int __cdecl sub_6704f0(int);
extern "C" int __cdecl sub_630202(int, int);
extern "C" int __cdecl sub_6709e0(void*, void*);
extern "C" int __cdecl sub_645a70(void*, int, int);

int CXTPToolBar_CControlButtonExpand::method_670b10(int a1, int a2, int a3, int a4)
{
    if (this->field_16c == 0) {
        void* p = this->field_16c;
        int* vtbl = *(int**)p;
        int (*fn)(void*) = (int (*)(void*))vtbl[0x178 / 4];
        if (fn(p) != 0) {
            int r = sub_6704f0(a2);
            r = sub_630202(r, a1);
            if (r != 0) {
                if (sub_6709e0((void*)r, this) != 0) {
                    sub_645a70(this->field_fc, -1, 0);
                    void* q = this->field_fc;
                    int* vt2 = *(int**)q;
                    int (*fn2)(void*, int, int) = (int (*)(void*, int, int))vt2[0x148 / 4];
                    fn2(q, -1, 0);
                    return 0;
                }
            }
            sub_645a70(this->field_fc, (int)this->field_80, 0);
        }
    }
    return 0;
}
