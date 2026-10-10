// from server: 43% by colin
struct CScriptEditor {
    void sub_4602c0(int);
};

extern "C" void* __cdecl sub_45D230();
extern "C" int __stdcall sub_45BF60(int);
extern "C" int __stdcall sub_45BF90(int, int);

extern "C" void __stdcall sub_77DDAC(void*);
extern "C" void __stdcall sub_77D5A4(void*, int, void*);
extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void __stdcall sub_77DDBC(void*);

void CScriptEditor::sub_4602c0(int)
{
    CScriptEditor* p = (CScriptEditor*)sub_45D230();
    int a = sub_45BF60(1);
    int b = sub_45BF90(a, 1);

    char buf[200];
    sub_77DDAC(buf);
    sub_77D5A4(buf, 200, (void*)b);

    void* v = sub_77DD98(buf);
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, void*);
    ((Fn)vtbl[3])(p, v);

    sub_77DDBC(buf);
}
