// from server: 43% by colin
struct CXTCaption {
    void func_0069f740();
};

extern "C" {
    int __stdcall GetClientRect(void*, void*);
    int __stdcall IsWindow(void*);
    int __stdcall IsWindowVisible(void*);
}

extern void __cdecl sub_00630490(void*);
extern void __cdecl sub_0063048a(void*);
extern void __cdecl sub_006309f4();
extern void __cdecl sub_00630a1e();
extern void* __cdecl sub_00668f70();
extern void __cdecl sub_00668770(void*, int);
extern void __cdecl sub_006692b0(void*, void*);
extern void __cdecl sub_0067ffa0(void*, void*);
extern void __cdecl sub_006d7100(void*, void*, void*);
extern void __cdecl sub_006d7280(void*);
extern void __cdecl sub_00738a18(void*, void*);

void CXTCaption::func_0069f740()
{
    char buf[0x60];
    char rect[0x20];
    char tmp[0x20];
    int flag;

    sub_00630490(buf);
    flag = 0;
    GetClientRect(*(void**)((char*)this + 0x20), rect);
    void* p = sub_00668f70();
    sub_00668770(p, 0xf);
    sub_006692b0(tmp, p);
    sub_006d7100(buf, tmp, rect);
    flag = 1;
    if (IsWindow(*(void**)((char*)this + 0xfc)) && IsWindowVisible(*(void**)((char*)this + 0xfc))) {
        sub_0067ffa0((char*)this + 0xdc, tmp);
        sub_006309f4();
        sub_00738a18(tmp, rect);
    }
    (*(void(__thiscall**)(CXTCaption*, void*, void*))(*(int*)this + 0x164))(this, rect, tmp);
    (*(void(__thiscall**)(CXTCaption*, void*))(*(int*)this + 0x168))(this, tmp);
    (*(void(__thiscall**)(CXTCaption*, void*, void*))(*(int*)this + 0x16c))(this, rect, tmp);
    sub_006d7280(tmp);
    sub_0063048a(buf);
}
