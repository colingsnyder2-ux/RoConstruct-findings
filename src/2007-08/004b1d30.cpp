// from server: 38% by colin
struct FunctionDescriptor;

struct FuncDesc {
    FuncDesc(const char* name, int security, int attributes);
};

struct BoundFuncDesc : FuncDesc {
    void* function;
    BoundFuncDesc(void* fn, const char* name, int security, int attributes);
};

extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __cdecl sub_45AAC0(void* p);
extern "C" void __cdecl sub_4A8280(void* self, void* a, void* b);

BoundFuncDesc::BoundFuncDesc(void* fn, const char* name, int security, int attributes)
    : FuncDesc(name, security, attributes)
{
    void* mem = malloc(0x110);
    if (mem) {
        sub_45AAC0(mem);
    } else {
        mem = 0;
    }
    sub_4A8280(this, mem, 0);
    function = fn;
}
