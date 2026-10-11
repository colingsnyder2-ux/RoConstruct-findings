// from server: 45% by atomic.potato
extern "C" int __stdcall G1_func_0089e9a4(int, int);
extern "C" void* __cdecl G1_func_00718a38(int);
extern "C" int __cdecl G1_func_005e7b00(void*);
extern "C" float __cdecl G1_func_005e7950(void*);
extern "C" double __cdecl G1_func_005e79e0(void*);
extern "C" int __cdecl G1_func_005e5b40();
extern "C" int __cdecl G1_func_005e6170();

struct G1_PropDesc {
    void* field0;
    void* field4;
    void G1_method_005e7f50();
};

void G1_PropDesc::G1_method_005e7f50()
{
    int (*check)(int, int) = (int (*)(int, int))G1_func_0089e9a4;
    if (check(0x9df2dc, *(int*)(*(int*)this + 8))) {
        int v = G1_func_005e7b00(&field4);
        bool b = v != 0;
        void* p = G1_func_00718a38(8);
        if (p) {
            *(int*)p = 0x8ad3a0;
            *(char*)((char*)p + 4) = b;
        } else {
            p = 0;
        }
        void* old = field4;
        field4 = p;
        if (old) {
            (*(void (**)(void*, int))old)(old, 1);
        }
        *(int*)0xa4a5f4 = *(int*)0xa4a5f4 + 1;
        field0 = (void*)G1_func_005e5b40();
    }
    if (check(0x9df2e8, *(int*)(*(int*)this + 8))) {
        float f = G1_func_005e7950(&field4);
        bool b = !(f == *(float*)0x8b3b5c);
        void* p = G1_func_00718a38(8);
        if (p) {
            *(int*)p = 0x8ad3a0;
            *(char*)((char*)p + 4) = b;
        } else {
            p = 0;
        }
        void* old = field4;
        field4 = p;
        if (old) {
            (*(void (**)(void*, int))old)(old, 1);
        }
        *(int*)0xa4a5f4 = *(int*)0xa4a5f4 + 1;
        field0 = (void*)G1_func_005e5b40();
    }
    if (check(0x9df2f4, *(int*)(*(int*)this + 8))) {
        double d = G1_func_005e79e0(&field4);
        bool b = !(d == *(double*)0x8b1808);
        void* p = G1_func_00718a38(8);
        if (p) {
            *(int*)p = 0x8ad3a0;
            *(char*)((char*)p + 4) = b;
        } else {
            p = 0;
        }
        void* old = field4;
        field4 = p;
        if (old) {
            (*(void (**)(void*, int))old)(old, 1);
        }
        *(int*)0xa4a5f4 = *(int*)0xa4a5f4 + 1;
        field0 = (void*)G1_func_005e5b40();
    }
    G1_func_005e6170();
}
