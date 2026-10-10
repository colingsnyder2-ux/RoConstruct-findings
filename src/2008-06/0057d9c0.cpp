// from server: 84% by atomic.potato
struct FirstPersonCommand
{
    void f();
};

void FirstPersonCommand::f()
{
    int* a = *(int**)((char*)this + 0x0c);
    a = *(int**)((char*)a + 0x204);
    int* b = *(int**)((char*)a + 0x288);
    int (__thiscall *fn)(int*) = *(int (__thiscall **)(int*))((char*)b + 4);
    fn((int*)((char*)a + 0x288));
}
