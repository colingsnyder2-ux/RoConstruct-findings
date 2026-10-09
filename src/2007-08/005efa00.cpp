// from server: 54% by colin
// roc 2007-08 005efa00  unit: RBX::P8Script::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005efa00

extern "C" {
    typedef unsigned int DWORD;
}

struct String {
    DWORD _pad[2];
    void* _ptr;
    DWORD _len;
    DWORD _cap;
};

extern "C" void __stdcall String_ctor(String* self, const String* other);

struct GetSetImpl {
    void* get;
    void* set;
    DWORD offset;
    String* operator()(String* result, void* arg);
};

String* GetSetImpl::operator()(String* result, void* arg) {
    void* p = arg;
    if (p) {
        p = (char*)p - 4;
    } else {
        p = 0;
    }
    void* base = (char*)this->set + (DWORD)p;
    void* fn = this->get;
    void* r = ((void* (__thiscall*)(void*))fn)(base);
    String_ctor(result, (const String*)r);
    return result;
}
