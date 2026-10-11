// from server: 84% by atomic.potato
struct Inner {
    char pad0[4];
    int* data;
    int count;
};

struct Outer {
    char pad0[0x20];
    Inner inner;
    void RemoveAt(int index);
};

extern "C" void __fastcall sub_7f3ddc(int);
extern "C" void __fastcall sub_7f3b0c();
extern "C" void __fastcall sub_82d280(Inner*, int, int);

void Outer::RemoveAt(int index)
{
    Inner* inner = (Inner*)((char*)this + 0x20);
    if (index < 0 || index >= inner->count)
    {
        sub_7f3b0c();
        return;
    }
    sub_7f3ddc(inner->data[index]);
    sub_82d280(inner, index, 1);
}
