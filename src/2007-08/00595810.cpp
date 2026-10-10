// from server: 54% by tester
struct RBX_RocketTool {
    RBX_RocketTool* construct(void* a, char b, int c);
};

struct VerbContainer;

struct TToolVerb {
    char pad[0xc];
    void* fieldc;
    void* method();
};

extern "C" void* __cdecl func_0062fef6(unsigned int size);

void* TToolVerb::method()
{
    void* mem = func_0062fef6(0x34);
    void* result = 0;
    if (mem != 0) {
        void* p = *(void**)((char*)this->fieldc + 0x188);
        ((RBX_RocketTool*)mem)->construct(p, 0x5a, 0);
        *(int*)((char*)mem + 0) = 0x7b0e44;
        *(int*)((char*)mem + 4) = 0x7b0e2c;
        result = mem;
    }
    return result;
}
