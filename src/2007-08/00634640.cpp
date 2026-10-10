// from server: 52% by colin
struct MyXTPCommandBars {
    char pad[0x60];
    int m_flag60;
    void func_00632000(int, int);
    void func_00634750(int, int);
};

struct Inner {
    char pad[0x180];
    void* m_p180;
};

struct Helper {
    void* func_0067d2a0(int, int, int, int, int);
    int func_006a17b0(int, int);
    void func_006a27f0(int, void*);
};

extern "C" void __cdecl func_0062ff20();
extern "C" void __cdecl func_00632d40(void*);
extern "C" void __cdecl func_00632d60(void*);

void MyXTPCommandBars::func_00632000(int a, int b)
{
    Inner* p = (Inner*)this;
    void* v = p->m_p180;
    if (v == 0) {
        func_00634750(a, b);
        return;
    }
    int idx = ((Helper*)v)->func_006a17b0(a, -1);
    if (idx == -1) {
        func_00634750(a, b);
        return;
    }
    char buf[8];
    func_00632d40(buf);
    ((Helper*)v)->func_006a27f0(idx, buf);
    int count = *(int*)(buf + 8);
    int i = 0;
    while (i < count) {
        if (i < 0 || i >= count) {
            func_0062ff20();
        }
        int* arr = *(int**)(buf + 4);
        func_00634750(arr[i], b);
        count = *(int*)(buf + 8);
        i++;
    }
    func_00632d60(buf);
    if (m_flag60 != 0) {
        void* q = ((Helper*)*(void**)(b + 0xf8))->func_0067d2a0(1, 0x88b9, 0, -1, 0);
        (*(void (__thiscall**)(void*, int))(*(int*)q + 0x64))(q, 1);
    }
}
