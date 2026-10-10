// from server: 42% by colin
struct CScriptEditor {
    void sub_460420(int);
};

extern "C" void* __cdecl sub_45D230();

struct Helper {
    void* sub_45BF60(int);
    void* sub_45CA50(void*, int);
    void* sub_45C790(void*, int);
};

extern "C" void* __stdcall sub_77DDAC();
extern "C" void* __stdcall sub_77DD98();
extern "C" void* __stdcall sub_77D5A4(void*, int, void*, void*, void*);
extern "C" void* __stdcall sub_77DDBC();

void CScriptEditor::sub_460420(int)
{
    Helper* p = (Helper*)sub_45D230();
    void* a = p->sub_45BF60(1);
    void* b = p->sub_45CA50(a, 1);
    void* c = p->sub_45C790(a, 1);
    sub_77DDAC();
    void* d = sub_77D5A4(0, 0xc7, 0, 0, 0);
    sub_77DD98();
    sub_77DDBC();
}
