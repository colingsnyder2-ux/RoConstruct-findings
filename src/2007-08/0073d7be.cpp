// from server: 72% by colin
extern "C" void __cdecl helper_00630a1e(void*);
extern "C" void __cdecl helper_00630a18(void*);

extern char G_008447e4;

void __cdecl func_0073d7be(void* arg1, void* arg2)
{
    char* p = (char*)arg2;
    int v = *(int*)(p - 4);
    helper_00630a1e((void*)(v ^ (int)p));
    helper_00630a18(&G_008447e4);
}
