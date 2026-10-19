// from server: 76% by colin
// from server: 55% by colin
// roc 2008-06 00437d30  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437d30
//
// 00437d30  56                   push esi
// 00437d31  8bf1                 mov esi, ecx
// 00437d33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00437d37  ff1564248000         call dword ptr [0x802464]
// 00437d3d  51                   push ecx
struct Data {
    __declspec(dllimport) const char* c_str();
};
struct String {
    Data* data;
    __declspec(dllimport) String(const char*);
};
struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void take(String text);
    void f(String value);
};
void S::f(String value)
{
    take(String(value.data->c_str()));
}
