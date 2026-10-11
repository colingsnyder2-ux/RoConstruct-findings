// from server: 23% by atomic.potato
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl construct_array(void*, unsigned int, void*, void*);

struct S_func_005206f0 {
    void* __cdecl f(unsigned int count);
};

void* S_func_005206f0::f(unsigned int count)
{
    if (count != 0)
        return 0;
    unsigned int size = count * 4;
    if (size < count)
        return 0;
    size += 4;
    if (size < 4)
        return 0;
    void* p = operator_new(size);
    if (p == 0)
        return 0;
    *(unsigned int*)p = count;
    void* result = (char*)p + 4;
    construct_array(result, 4, (void*)0x516430, (void*)0x516940);
    return result;
}
