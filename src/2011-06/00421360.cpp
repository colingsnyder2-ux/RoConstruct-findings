// from server: 42% by atomic.potato
struct Stream {
    void* vtable;
};

extern "C" {
    bool __stdcall uncaught_exception();
    void* __stdcall rdbuf(void*);
    void __stdcall unlock(void*);
    void __stdcall osfx(void*);
}

struct S {
    Stream* stream;
    void dtor();
};

void S::dtor() {
    if (!uncaught_exception()) {
        osfx(stream);
    }
    char* base = (char*)stream;
    void* buf = rdbuf((char*)(*(void**)(*(char**)stream + 4)) + (int)base);
    if (buf) {
        unlock(rdbuf((char*)(*(void**)(*(char**)stream + 4)) + (int)base));
    }
}
