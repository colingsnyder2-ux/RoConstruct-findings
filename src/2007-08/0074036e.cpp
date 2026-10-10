// from server: 65% by colin
struct S_0074036e {
    void m();
};

extern "C" void __cdecl func_00630a1e(int);
extern "C" void __cdecl func_00630a18();

void S_0074036e::m()
{
    int* p;
    func_00630a1e(*(int*)((char*)p - 4) ^ (int)p);
    func_00630a18();
}
