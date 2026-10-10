// from server: 69% by colin
extern "C" void __cdecl sub_00630a1e(void*);
extern "C" void __cdecl sub_00630a18(void*);

void __cdecl sub_00746ace(void* a, int b)
{
    int* p = (int*)b;
    int v = *((int*)((char*)p - 4)) ^ (int)p;
    sub_00630a1e((void*)v);
    sub_00630a18((void*)0x84cf70);
}
