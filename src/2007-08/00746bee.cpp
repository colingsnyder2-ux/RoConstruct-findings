// from server: 73% by colin
extern "C" void __fastcall helper_00630a1e(void*);
extern "C" void __cdecl helper_00630a18(void*);

extern char G_0084d078;

void __cdecl func_00746bee(int a, void* arg)
{
    char* p = (char*)arg;
    int cookie = *(int*)(p - 4);
    cookie ^= (int)p;
    helper_00630a1e((void*)cookie);
    helper_00630a18(&G_0084d078);
}
