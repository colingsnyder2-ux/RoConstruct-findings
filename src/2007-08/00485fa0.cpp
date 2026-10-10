// from server: 50% by colin
// roc 2007-08 00485fa0  unit: G3D::VertexAndPixelShader  size: 284 bytes

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl std_string_ctor(void*, const char*);
extern "C" void __cdecl std_string_dtor(void*);

struct StdString {
    void* rep;
    StdString(const char* s) { std_string_ctor(this, s); }
    ~StdString() { std_string_dtor(this); }
};

struct VertexAndPixelShader {
    void* field0;
    void construct(const StdString& a, const StdString& b, int c, int d, int e, int f, int g);
};

void VertexAndPixelShader::construct(const StdString& a, const StdString& b, int c, int d, int e, int f, int g) {
    void* p = operator_new(0x1b0);
    if (p) {
        StdString s1("hRht");
        StdString s2("t$\\P");
        int* q = (int*)p;
        *q = 0;
        ((void (__thiscall*)(void*, const StdString&, const StdString&, int, int, int, int, int))0x4856c0)(p, s1, s2, c, d, e, f, g);
        this->field0 = p;
    } else {
        this->field0 = 0;
    }
}
