// from server: 25% by colin
struct CRbxDocTemplate {
    int* field0;
    void (__stdcall *fn)(int, int);
    int field8;
    void f(int);
};

extern "C" void* __stdcall sub_413C00(void*);
extern "C" void __stdcall sub_414170(void*);

void CRbxDocTemplate::f(int arg)
{
    if (this->field0 == 0) {
        void* p = sub_413C00((char*)this + 4);
        sub_414170(p);
    }
    this->fn(arg, this->field8);
}
