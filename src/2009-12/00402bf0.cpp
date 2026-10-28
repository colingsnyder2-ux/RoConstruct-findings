// from server: 17% by atomic.potato
// roc 2009-12 00402bf0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00402bf0

extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void*);

struct S {
    int f();
};

int S::f() {
    InitializeCriticalSection((char*)this + 4);
    return 0;
}
