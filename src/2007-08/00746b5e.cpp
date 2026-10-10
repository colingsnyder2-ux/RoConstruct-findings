// from server: 72% by colin
extern "C" void __cdecl sub_00630A1E(void*);
extern "C" void __cdecl sub_00630A18(void*);

extern char g_84CFF4;

void __cdecl sub_00746B5E(void* arg1, void* arg2)
{
    char* edx = (char*)arg2;
    char* eax = edx;
    int ecx = *(int*)(edx - 4);
    ecx ^= (int)eax;
    sub_00630A1E((void*)ecx);
    sub_00630A18(&g_84CFF4);
}
