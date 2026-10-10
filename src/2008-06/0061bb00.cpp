// from server: 73% by atomic.potato
extern "C" void __cdecl invalid_parameter_noinfo();

struct S
{
    void f(void* result);
};

void S::f(void* result)
{
    unsigned char* base = *(unsigned char**)((char*)this + 8);
    unsigned int value = *(unsigned int*)(base + 0x4c);
    unsigned char* range = base + 0x3c;

    if (*(unsigned int*)(range + 0xc) > value)
        invalid_parameter_noinfo();

    *(void**)result = this;
    *(void**)((char*)result + 4) = *(void**)range;
    *(unsigned int*)((char*)result + 8) = value;
}
