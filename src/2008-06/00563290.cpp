// from server: 71% by atomic.potato
extern "C" void* __cdecl sub_501AE0();
extern "C" void __cdecl sub_5631C0(void*);

int sub_563290(void* arg)
{
    char buffer[128];
    void* p = sub_501AE0();
    int value = *(int*)((char*)p + 12);
    sub_5631C0(buffer);
    return value;
}
