// from server: 51% by colin
struct S {
    int f(unsigned int index);
};

extern "C" int __stdcall sub_546320();

extern "C" void __stdcall sub_802890();

int S::f(unsigned int index)
{
    int count = sub_546320();
    if (index >= (unsigned int)count) {
        sub_802890();
        if (index >= (unsigned int)count) {
            sub_802890();
        }
    }
    return *(int*)((char*)this + 0xc) + index * 4;
}
