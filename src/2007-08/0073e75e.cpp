// from server: 72% by colin
extern "C" void __cdecl sub_00630a1e(void*);
extern "C" void __cdecl sub_00630a18(void*);

extern char G_00845614;

void __cdecl sub_0073e75e(void* arg1, void* arg2)
{
    char* p = (char*)arg2;
    int v = *(int*)(p - 4);
    v ^= (int)p;
    sub_00630a1e((void*)v);
    sub_00630a18(&G_00845614);
}
