// from server: 27% by colin
struct FuncDesc;

struct Descriptor {
    void* vtable;
};

struct FunctionDescriptor {
    void* vtable;
    char pad[0x38];
    void* callback;
    void* context;
};

struct ArgList {
    void* vtable;
    void* data;
};

struct ArgHolder {
    void* first;
    void* second;
};

struct BoundFuncDesc : FunctionDescriptor {
    void* function;
    void declareSignature();
    void invoke(void* args, int count);
};

extern "C" void* __cdecl getTypeInfo();
extern "C" void* __cdecl getArgType();
extern "C" void* __cdecl getArgName();
extern "C" void* __cdecl getSignatureType();

extern "C" void* __stdcall sub_6a17c6(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_6a158c(void* a, void* b);
extern "C" void* __cdecl sub_5947f0(void* a);
extern "C" void __cdecl sub_5944e0(void* a, void* b);

extern void* __cdecl __RTDynamicCast(void*, int, void*, void*, int);
extern void __cdecl _CxxThrowException(void*, void*);
extern void __cdecl bad_cast_ctor(void*, const char*);

void BoundFuncDesc::declareSignature()
{
    ArgHolder holder;
    holder.first = this->callback;
    if (this->context) {
        void** vt = (void**)this->context;
        void* fn = vt[2];
        typedef void* (__thiscall *F)(void*);
        holder.second = ((F)fn)(this->context);
    } else {
        holder.second = 0;
    }

    void** argvt = (void**)this->function;
    void* fn = argvt[1];
    typedef void (__thiscall *G)(void*, ArgHolder*, int);
    ((G)fn)(this->function, &holder, 1);

    void* result = sub_6a17c6(holder.second, 0, (void*)0x9291fc, (void*)0x92c210, 0);
    void* esi = result;
    if (!esi) {
        bad_cast_ctor((char*)0x80ba34, "bad cast");
        _CxxThrowException((void*)0x8d362c, (void*)0x80ba34);
    }

    void* sig = sub_5947f0(&holder);
    sub_5944e0(sig, esi);

    void* cb = this->callback;
    void* ctx = this->context;
    typedef void (__thiscall *H)(void*, void*);
    ((H)cb)(ctx, esi);

    if (holder.first) {
        void** vt = (void**)holder.first;
        void* fn2 = vt[0];
        typedef void (__thiscall *I)(void*, int);
        ((I)fn2)(holder.first, 1);
    }
}
