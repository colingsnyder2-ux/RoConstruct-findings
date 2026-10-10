// from server: 84% by colin
struct TextureProxy {
    int field0;
    int field4;
    int field8;
    int fieldC;
    void construct(int* src);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl memset(void* dest, int value, unsigned int count);
extern "C" int __fastcall sub_4D19F0(int* p);

void TextureProxy::construct(int* src)
{
    field4 = src[1];
    fieldC = src[3];
    field8 = (int)operator_new(fieldC * 4);
    memset((void*)field8, 0, fieldC * 4);
    for (int i = 0; i < fieldC; ++i) {
        int* p = (int*)(i + src[2] * 4);
        if (*p != 0) {
            ((int*)field8)[i] = sub_4D19F0(p);
        }
    }
}
