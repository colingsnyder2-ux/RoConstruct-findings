// from server: 45% by colin
struct FunctionDescriptor {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;
    int field38;
    int field3C;
};

struct BoundFuncDesc : FunctionDescriptor {
    void construct(int a, int b, int c, int d, int e, int f, int g);
};

extern "C" int __stdcall sub_499230(int a, int b);
extern "C" void __stdcall sub_570DB0();
extern "C" void __stdcall sub_56D3C0();
extern "C" int __stdcall sub_56D7D0();
extern "C" void* __stdcall sub_62FEF6(int size);
extern "C" void __stdcall sub_413840(int a, int b);

void BoundFuncDesc::construct(int a, int b, int c, int d, int e, int f, int g)
{
    int r = sub_499230(a, b);
    sub_570DB0();
    this->field28 = c;
    this->field2C = d;
    this->vtable = (void*)0x79cbd8;
    sub_56D3C0();
    int x = sub_56D7D0();
    this->field38 = x;
    void* p = sub_62FEF6(8);
    if (p) {
        *(int*)p = 0x787198;
        *(int*)((char*)p + 4) = e;
    } else {
        p = 0;
    }
    this->field3C = (int)p;
    sub_413840(f, g);
}
