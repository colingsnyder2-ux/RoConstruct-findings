// from server: 40% by colin
struct CXTPPropertyGridItemColor {
    void SetValue(void*);
};

extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void* __cdecl sub_69A2B0(void*);

void CXTPPropertyGridItemColor::SetValue(void* p)
{
    void* vtable = *(void**)this;
    void* tmp = 0;
    sub_77DD98(&tmp);
    void* arg = sub_69A2B0(&tmp);
    ((void (__thiscall*)(void*, void*))*(void**)((char*)vtable + 0xe4))(this, arg);
    sub_77DDBC(&tmp);
}
