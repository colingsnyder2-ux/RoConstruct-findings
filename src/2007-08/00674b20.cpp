// from server: 42% by colin
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void* field_bc;
    void* field_c0;
    char pad2[0x38];
    void* field_fc;
    int func(int, void*);
};

extern "C" void* __stdcall sub_6C7D10(void*);
extern "C" void __stdcall sub_77D434(void*, void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void* __stdcall sub_639C90(void*);
extern "C" void* __stdcall sub_64CB40(void*, void*);
extern "C" void __stdcall sub_6EBD30(void*, void*, void*, void*);
extern "C" void* __stdcall sub_648730(void*);
extern "C" void __stdcall sub_6485E0(void*, void*);
extern "C" void* __stdcall sub_6321F0(void*);
extern "C" void* __stdcall sub_64D8F0(void*);
extern "C" void* __stdcall sub_643950(void*);
extern "C" void* __stdcall sub_643750(void*);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, void*);

int CXTPCustomizeSheet::func(int a, void* b)
{
    if (*(int*)((char*)b + 8) != 0x64)
        return 0;

    if (a == 0x23a5) {
        void* p = *(void**)((char*)this->field_b8 + 0x58);
        void* q = *(void**)((char*)b + 0xc);
        if (p) {
            void* r = sub_6C7D10(q);
            sub_77D434((char*)p + 0xdc, r);
            sub_77DDBC(q);
            void* s = *(void**)((char*)p + 0xfc);
            void (__thiscall**vt)(void*) = *(void (__thiscall***)(void*))s;
            vt[0x17c / 4](s);
        }
        return 1;
    }

    if (a == 0x23aa) {
        void* q = sub_639C90(*(void**)((char*)b + 0xc));
        void* p = *(void**)((char*)this->field_b8 + 0x58);
        if (p) {
            void* r = sub_64CB40(this->field_c0, q);
            if (r) {
                if (*(int*)((char*)r + 0x2c) == 1) {
                    int flag = -(*(int*)((char*)r + 0x2c) != 0);
                    void* v1;
                    void* v2;
                    sub_6EBD30((char*)r + 0x20, &v2, &v1, &flag);
                    void* v3 = sub_648730(v2);
                    void* v4;
                    sub_6485E0(&v4, v3);
                    void* v5 = sub_6321F0(*(void**)((char*)this->field_b8));
                    void* v6 = sub_64D8F0(v5);
                    *(void**)((char*)p + 0x90) = v6;
                    void* s = *(void**)((char*)p + 0xfc);
                    void (__thiscall**vt)(void*) = *(void (__thiscall***)(void*))s;
                    vt[0x17c / 4](s);
                }
            }
        }
        return 1;
    }

    if ((unsigned)(a - 0x23a3) <= 0xb)
        return 0;

    void* q = sub_643950(*(void**)((char*)b + 0xc));
    void* r = sub_643750(q);
    void* p = *(void**)((char*)this->field_b8);
    void* s = *(void**)((char*)p + 0xa0);
    void* t = *(void**)((char*)s + 0x20);
    void* u = SendMessageA(t, 0x2862, a, b);
    if (!u) {
        void* p2 = *(void**)((char*)this->field_b8);
        void* s2 = *(void**)((char*)p2 + 0xa0);
        void* t2 = *(void**)((char*)s2 + 0x20);
        SendMessageA(t2, 0x111, a, 0);
    }
    return 1;
}
