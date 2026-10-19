// from server: 60% by TrollStein
struct CGdiObject {
    void __cdecl construct(const CGdiObject& other);
};

extern "C" void __stdcall sub_77E700(void*);
extern "C" void __stdcall sub_630B9E(void*, const char*);

extern void* dword_7864A8;
extern const char byte_840590[];

void CGdiObject::construct(const CGdiObject& other)
{
    char buf[12];
    sub_77E700(&buf[0]);
    *(void**)&buf[0] = &dword_7864A8;
    sub_630B9E(&buf[0], byte_840590);
}
