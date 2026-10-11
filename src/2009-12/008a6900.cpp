// from server: 60% by atomic.potato
struct CXTPReportNavigator {
    char pad0[0x20];
    void* field20;
    void* field24;
    void* field28;

    int func(int a, int b);
};

extern "C" int __stdcall sub_81e560(void*);
extern "C" int __stdcall sub_825b00(void*, int, int, int);
extern "C" int __stdcall sub_8a6690(void*, int);

int CXTPReportNavigator::func(int a, int b)
{
    if (field20 == 0)
        return 0;
    int edi = sub_81e560(field20);
    if (field24 != 0) {
        char* eax = (char*)field20;
        void* ecx = *(void**)(eax + 0xf8);
        void* eax2 = *(void**)(eax + 0x1d4);
        int (*fn)(void*, void*, int, int) = *(int (**)(void*, void*, int, int))(*(int*)ecx + 0x74);
        int r = fn(ecx, eax2, edi, b);
        sub_825b00(field20, r, a, b);
        return 0;
    }
    if (field28 != 0) {
        char* eax = (char*)field20;
        void* ecx = *(void**)(eax + 0xfc);
        void* eax2 = *(void**)(eax + 0x1d4);
        int (*fn)(void*, void*, int) = *(int (**)(void*, void*, int))(*(int*)ecx + 0x74);
        int r = fn(ecx, eax2, edi);
        if (edi == r) {
            sub_8a6690(this, 0);
            return 0;
        }
        sub_825b00(field20, r, a, b);
        return 0;
    }
    char* eax = (char*)field20;
    void* ecx = *(void**)(eax + 0xe0);
    void* eax2 = *(void**)(eax + 0x1d4);
    int (*fn)(void*, void*, int) = *(int (**)(void*, void*, int))(*(int*)ecx + 0x74);
    int r = fn(ecx, eax2, edi);
    if (r == 0)
        return 0;
    int (*fn2)(void*) = *(int (**)(void*))(*(int*)r + 0x6c);
    void* ebx = field20;
    int v = fn2((void*)r);
    if (*(int*)((char*)ebx + 0x11c) != v) {
        sub_825b00(ebx, r, a, b);
        return 0;
    }
    if (*(int*)((char*)ebx + 0x1f4) == 0)
        return 0;
    if (*(int*)((char*)ebx + 0x208) == 0)
        return 0;
    sub_8a6690(this, 1);
    return 0;
}
