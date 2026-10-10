// from server: 44% by colin
struct CXTPEdit {
    char pad[0x20];
    void* field20;
    int method6365f0(int, int, int, int, int, int, int, int);
    int method62fcda(int);
    int method7383a0(int, int, int, int);
    int method6369b0(int, int);
};

extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
extern "C" void* __stdcall sub_77dd98(void*);

int CXTPEdit::method6369b0(int a, int b)
{
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int result;

    int* p = (int*)this->method6365f0(0, 0, 0, 0, 0, 0, 0, 0);
    if (*p != 0) {
        int r = this->method6365f0(0, b, a, 0, (int)&v1, 0, 0, 0);
        void* h = sub_77dd98((void*)(r + 4));
        result = this->method62fcda((int)h);
        SendMessageA(this->field20, 0x445, 0, 1);
        SendMessageA(this->field20, 0x459, 5, 0);
        return result;
    }
    return this->method7383a0(b, a, (int)&v1, 0);
}
