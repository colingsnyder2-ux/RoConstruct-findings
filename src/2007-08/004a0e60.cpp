// from server: 80% by colin
struct BoundFuncDesc {
    void* function;
    void construct(void* a, void* b, void* c);
};

extern "C" void __stdcall sub_49F9A0(void* self, void* a, int b, int c);
extern "C" void __stdcall sub_4A3A10(void* self, void* a, void* b);

void BoundFuncDesc::construct(void* a, void* b, void* c)
{
    sub_49F9A0(this, c, 0x20, 1);
    sub_4A3A10(*(void**)this, *(void**)c, b);
}
