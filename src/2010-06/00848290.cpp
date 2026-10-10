// from server: 81% by atomic.potato
struct S {
    int f(int);
};

extern "C" int __stdcall sub_7bb6c0(void *, int *, int);

int S::f(int value)
{
    return sub_7bb6c0((char *)this + 0x20, &value, value) ? value : 0;
}
