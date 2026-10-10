// from server: 46% by colin
extern "C" __declspec(dllimport) long __stdcall CallNextHookEx(void*, int, unsigned int, long);

extern "C" void* __cdecl sub_73836a(void*, void*);
extern "C" void __cdecl sub_62ff20();
extern "C" void __cdecl sub_62ff38(void*, int);
extern "C" void __cdecl sub_62ff3e(void*, void*);
extern "C" void __cdecl sub_6a3a70();

struct CHookSink {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    long dispatch(void* a, unsigned int b, long c);
};

long CHookSink::dispatch(void* a, unsigned int b, long c) {
    void* p = sub_73836a((void*)0x8c9310, (void*)0x632210);
    if (p != 0) {
        sub_62ff20();
    }
    if (a != 0 && *(int*)((char*)a + 8) == 0x1c && *(int*)((char*)a + 4) == 0) {
        void* tmp = 0;
        sub_62ff3e(&tmp, *(void**)((char*)p + 0x10));
        void* q = sub_73836a((void*)0x8c9314, (void*)0x632280);
        if (q == 0) {
            sub_62ff20();
        }
        sub_6a3a70();
        if (tmp != 0) {
            *(void**)((char*)tmp + 4) = 0;
        }
        if (*(void**)((char*)&tmp + 8) != 0) {
            sub_62ff38(*(void**)((char*)&tmp + 4), 0);
        }
    }
    return CallNextHookEx(*(void**)((char*)p + 8), (int)b, (unsigned int)c, (long)a);
}
