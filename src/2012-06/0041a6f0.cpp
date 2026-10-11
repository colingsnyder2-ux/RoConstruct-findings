// from server: 71% by atomic.potato
struct S {
    void f(int);
};

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);

void* __cdecl sub_401970();
void __cdecl sub_41a5e0();

void S::f(int a) {
    sub_41a5e0();
    if (a & 1) {
        void* p = sub_401970();
        EnterCriticalSection((void*)0xb221b8);
        *(void**)this = *(void**)((char*)p + 0x18);
        *(void**)((char*)p + 0x18) = this;
        LeaveCriticalSection((void*)0xb221b4);
    }
}
