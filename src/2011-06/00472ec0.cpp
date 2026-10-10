// from server: 60% by atomic.potato
struct VerbBinder
{
};

void __cdecl f(int, void* result, int value)
{
    if (value != 4)
        return;
    *(int*)result = 0xc15960;
    ((unsigned char*)result)[4] = 0;
    ((unsigned char*)result)[5] = 0;
}
