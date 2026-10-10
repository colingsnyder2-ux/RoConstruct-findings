// from server: 71% by colin
extern "C" void __cdecl sub_00630a1e(void*, void*);
extern "C" void __cdecl sub_00630a18(void*);

extern char G_008465ac;

void __cdecl sub_0073f5de(void* a, void* b)
{
    unsigned int v = *(unsigned int*)((char*)b - 4);
    sub_00630a1e((void*)(v ^ (unsigned int)b), b);
    sub_00630a18(&G_008465ac);
}
