// from server: 5% by colin
extern "C" __declspec(dllimport) void* __stdcall InterlockedDecrement(void*);
extern "C" __declspec(dllimport) void* __stdcall InterlockedIncrement(void*);

extern "C" void __stdcall sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_4F6180();
extern "C" void __stdcall sub_4EE6B0();
extern "C" void __stdcall sub_474F70();
extern "C" void __stdcall sub_457DD0();

extern "C" void __stdcall sub_77E69C();
extern "C" void __stdcall sub_77E6AC();

struct CRefCounted {
    void* vtable;
    int refcount;
    void AddRef();
    void Release();
};

void CRefCounted::AddRef() {
    InterlockedIncrement(&refcount);
}
