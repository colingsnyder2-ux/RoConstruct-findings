// from server: 88% by atomic.potato
struct S
{
    void Get();
};

void S::Get()
{
    int* a = *(int**)((char*)this + 0xb8);
    a = *(int**)((char*)a + 0x58);
    if (a != 0)
    {
        *(int*)((char*)a + 0x14c) = 0;
        int* b = *(int**)((char*)a + 0x100);
        int** v = (int**)b;
        ((void (__thiscall *)(int*))((char*)*v + 0x184))(b);
    }
}
