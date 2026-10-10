// from server: 88% by why2
extern "C" void __cdecl free(void*);

void __cdecl sub_56B290(void* p)
{
    if (p != 0)
    {
        free(*(void**)((char*)p - 4));
    }
}
