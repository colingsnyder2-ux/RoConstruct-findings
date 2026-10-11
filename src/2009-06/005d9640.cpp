// from server: 74% by atomic.potato
struct MD5HasherImpl {
    void ReadStream(int);
};

extern "C" {
    __declspec(dllimport) void __stdcall sub_89e5cc(int, int);
    __declspec(dllimport) void __stdcall sub_89e488(int, int);
    __declspec(dllimport) void __stdcall sub_89e5c8(int, char*, int);
}

void MD5HasherImpl::ReadStream(int a) {
    char buf[0x400];
    int* p = (int*)a;
    int v = *(int*)((char*)p + 4);
    sub_89e5cc(v + a, 0);
    sub_89e488(a, 0);
    while (*(int*)((char*)p + 4) > 0) {
        sub_89e5c8(a, buf, 0x400);
        int n = *(int*)((char*)p + 4);
        void (__stdcall *fn)(void*, char*, int) = *(void (__stdcall**)(void*, char*, int))(*(int*)this + 4);
        fn(this, buf, n);
    }
}
