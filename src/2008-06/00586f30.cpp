// from server: 41% by colin
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
struct LocalScript {
    char pad[0x130];
    void* field130;
    void setEmbeddedCode(const void* value);
};

extern "C" int __stdcall sub_6a0920(unsigned int size);
extern "C" void __stdcall sub_80245c(void* p, const void* value);
extern "C" void __stdcall sub_55e1d0(void* p, void* value);
extern "C" void __stdcall sub_40db00(void* p, const void* value);
extern "C" bool __stdcall sub_8023d8(const void* a, const void* b);

void LocalScript::setEmbeddedCode(const void* value)
{
    if (sub_8023d8(field130, value)) {
        void* p = (void*)sub_6a0920(0x1c);
        void* obj;
        if (p) {
            sub_80245c(p, value);
            obj = p;
        } else {
            obj = 0;
        }
        sub_55e1d0(&field130, obj);
        sub_40db00(this, (const void*)0x975770);
    }
}
