// from server: 78% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl sub_5e5200(DWORD, DWORD*);

struct SimJob
{
    DWORD* value;
    void f();
};

void SimJob::f()
{
    if (*value != 0)
    {
        DWORD local;
        sub_5e5200((DWORD)value + 4, &local);
        *value = 0;
    }
}
