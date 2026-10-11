// from server: 54% by atomic.potato
struct S {
    char pad0[0x18];
    char s18[0x1c];
    char s34[0x1c];
    int f50;
    int f54;
    S(const S&);
};

extern "C" void* __stdcall string_copy(void*, const void*);

S::S(const S& other)
{
    *(int*)((char*)this + 0x00) = *(int*)((char*)&other + 0x00);
    *(int*)((char*)this + 0x04) = *(int*)((char*)&other + 0x04);
    *(int*)((char*)this + 0x08) = *(int*)((char*)&other + 0x08);
    *(int*)((char*)this + 0x0c) = *(int*)((char*)&other + 0x0c);
    *(int*)((char*)this + 0x10) = *(int*)((char*)&other + 0x10);
    *(int*)((char*)this + 0x14) = *(int*)((char*)&other + 0x14);
    string_copy((char*)this + 0x18, (char*)&other + 0x18);
    string_copy((char*)this + 0x34, (char*)&other + 0x34);
    *(int*)((char*)this + 0x50) = *(int*)((char*)&other + 0x50);
    *(int*)((char*)this + 0x54) = *(int*)((char*)&other + 0x54);
}
