// from server: 48% by colin
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(long volatile*);

struct S {
    void* field0;
    void construct(void* a, void* b);
};

extern "C" void __stdcall sub_474f70(void* a, int b, int c, void* d);
extern "C" void __stdcall sub_486480(void* a, void* b, void* c);
extern "C" void __stdcall sub_457dd0(void* a);

void S::construct(void* a, void* b)
{
    field0 = 0;
    void* local = 0;
    sub_474f70(&local, 0x1406, 8, b);
    sub_486480(this, *(void**)a, *((void**)a + 1));
    if (b != 0) {
        if (InterlockedDecrement((long*)((char*)b + 4)) == 0) {
            sub_457dd0(b);
            (*(void(__thiscall**)(void*, int))*(void**)b)(b, 1);
        }
    }
}
