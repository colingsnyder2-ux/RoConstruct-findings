// from server: 45% by atomic.potato
struct CXTPPropertyGridItemEnum
{
    void SetValue(int);
};

extern "C" int __stdcall sub_98de80();
extern "C" int __stdcall sub_98dec0();

extern "C" int __fastcall sub_865de0(void*, int, int);
extern "C" int __fastcall sub_8a2f30(void*, int, int);

void CXTPPropertyGridItemEnum::SetValue(int)
{
    int v;
    sub_98de80();
    int idx = sub_865de0(*(void**)((char*)this + 0xc4), 0, v);
    if (idx >= 0)
    {
        int r = sub_8a2f30(*(void**)((char*)this + 0xc4), 0, idx);
        (*(void (__thiscall**)(void*, int))(*(int*)this + 0xe4))(this, r);
    }
    sub_98dec0();
}
