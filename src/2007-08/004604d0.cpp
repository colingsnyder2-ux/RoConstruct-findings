// from server: 56% by colin
extern "C" int __stdcall _stricmp(const char*, const char*);

struct CScriptEditor {
    void sub_4604D0(int);
};

struct Helper {
    int sub_45C7D0(int);
    int sub_45C800(int);
    void sub_45C950(int*, int);
    void sub_45C700(int, const char*);
};

extern "C" void* __cdecl sub_45D230();

void CScriptEditor::sub_4604D0(int arg) {
    int a;
    int b;
    void* p = sub_45D230();
    Helper* h = (Helper*)p;
    int v1 = h->sub_45C7D0(1);
    int v2 = h->sub_45C800(1);
    if (v1 == v2 && v1 > 12) {
        b = v2 - 1;
        a = v1 - 13;
        h->sub_45C950(&a, 1);
        if (_stricmp((const char*)&b, (const char*)0x794a70) == 0) {
            h->sub_45C700(1, (const char*)0x794a4c);
        }
    }
}
