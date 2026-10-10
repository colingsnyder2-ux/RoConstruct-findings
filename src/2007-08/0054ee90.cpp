// from server: 34% by tester
extern "C" void __cdecl func_0040cc20();
extern "C" void* __cdecl func_0062fef6(unsigned int);

struct T {
    void func_0054bcf0(int, int);
    void func_0054cd90(void*);
};

struct S {
    void* field0;
    void* field4;
    void func_0054ee90(int, int);
};

void S::func_0054ee90(int a, int b)
{
    void* p = func_0062fef6(0x28);
    void* q = 0;
    if (p == 0) {
        ((T*)p)->func_0054bcf0(a, b);
        q = p;
    }
    this->field0 = q;
    ((T*)&this->field4)->func_0054cd90(q);
    func_0040cc20();
}
