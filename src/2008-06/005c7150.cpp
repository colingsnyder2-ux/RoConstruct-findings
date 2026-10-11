// from server: 50% by atomic.potato
struct Inner {
    char pad[0x204];
    void* field;
};

struct Outer {
    char pad[0xc];
    Inner* p;
};

struct VModelSetPrimaryPartTool {
    char pad[0xc];
    Outer* p;
    void* method();
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __fastcall init_obj(void*, void*);

void* VModelSetPrimaryPartTool::method() {
    void* mem = operator_new(0x24);
    void* result = 0;
    if (mem) {
        void* arg = p->p->field;
        init_obj(mem, arg);
        *(void**)mem = (void*)0x839704;
        *(void**)((char*)mem + 4) = (void*)0x8396e8;
        result = mem;
    }
    return result;
}
