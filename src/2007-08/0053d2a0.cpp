// from server: 53% by colin
// roc 2007-08 0053d2a0  unit: seg_00500000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d2a0

extern "C" void* __stdcall sub_77E69C(void*, const void*);

struct String {
    char pad[0x1c];
    void* data;
};

struct GetSetImpl {
    char pad0[8];
    void* get;
    char pad1[4];
    void* set;
    String* operator()(String* result, String* arg);
};

String* GetSetImpl::operator()(String* result, String* arg) {
    String* tmp = 0;
    if (arg != 0) {
        tmp = (String*)((char*)arg - 4);
    }
    void* fn = this->get;
    void* ctx = (char*)this->set + (int)tmp;
    String* r = (String*)((int(__thiscall*)(void*, void*))fn)(ctx, arg);
    sub_77E69C(result, r);
    result->data = r->data;
    return result;
}
