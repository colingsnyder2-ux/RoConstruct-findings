// from server: 71% by colin
// roc 2007-08 004a0df0  unit: RBX::Network::VServer  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0df0

extern "C" int __stdcall sub_4a41a0(int);
extern "C" void __stdcall sub_49fd90(void*, int, int);

struct BoundFuncDesc {
    int field0;
    int method(int, int);
};

int BoundFuncDesc::method(int a, int b)
{
    int r = sub_4a41a0(a);
    int tmp;
    sub_49fd90(&tmp, 0x20, 1);
    tmp = r;
    return tmp;
}
