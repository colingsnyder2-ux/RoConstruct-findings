// from server: 41% by atomic.potato
struct S {
    char pad0[0x1c];
    int field1c;
    int field20;
};

struct T {
    char pad0[0x10];
    int field10;
    int __thiscall helper(int a, int b, int c);
    int __thiscall assign(T* other);
};

extern "C" void* __stdcall sub_98B534();

int T::assign(T* other) {
    S* s = (S*)this;
    int v1 = s->field1c;
    int v2 = s->field20;
    int tmp = 0;
    sub_98B534();
    helper(v1, v2, tmp);
    return (int)other;
}
