// from server: 82% by colin
struct TextureProxyBase {
    int field0;
    int field4;
    int field8;
    int fieldC;
};

struct TextureProxy : TextureProxyBase {
    void construct(int* src);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl memset(void* dest, int value, unsigned int count);
extern "C" int __fastcall sub_4D1A90(int* p);

void TextureProxy::construct(int* src)
{
    this->field4 = src[1];
    this->fieldC = src[3];
    int count = this->fieldC;
    this->field8 = (int)operator_new(count * 4);
    memset((void*)this->field8, 0, this->fieldC * 4);
    int i = 0;
    if (this->fieldC > 0) {
        int* arr = (int*)src[2];
        do {
            if (arr[i] == 0) {
                int r = sub_4D1A90((int*)arr[i]);
                ((int*)this->field8)[i] = r;
            }
            i++;
        } while (i < this->fieldC);
    }
}
