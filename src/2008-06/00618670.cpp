// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    unsigned int data[112];
    int* table;
    void f();
    void finish();
};

struct Outer {
    unsigned int pad[0x6c / 4];
    Inner* inner;
    unsigned int pad2[(0x1c0 - 0x70) / 4];
    void f();
};

void Inner::f()
{
    int* t = table;
    data[0x00 / 4] = 0x843d4c;
    data[0x10 / 4] = 0x843d3c;
    data[0x14 / 4] = 0x843d34;
}

void Inner::finish()
{
}

void Outer::f()
{
    Inner* p = inner;
    *(int*)((char*)this + 0x00) = 0x843eb4;
    *(int*)((char*)this + 0x10) = 0x843ea4;
    *(int*)((char*)this + 0x14) = 0x843e9c;
    *(int*)((char*)this + 0x20) = 0x843e94;
    *(int*)((char*)this + 0x24) = 0x843e84;
    *(int*)((char*)this + 0x44) = 0x843e74;
    *(int*)((char*)this + 0x64) = 0x843e64;
    *(int*)((char*)this + 0x84) = 0x843e54;
    *(int*)((char*)this + 0xa4) = 0x843e44;
    *(int*)((char*)this + 0xc4) = 0x843e34;
    *(int*)((char*)this + 0x130) = 0x843e2c;
    *(int*)((char*)this + 0x1a0) = 0x843e24;
    *(int*)((char*)this + 0x1b0) = 0x843e0c;
    int* q = *(int**)((char*)p + 4);
    *(int*)((char*)q + (int)this + 0x1c0) = 0x843e04;
    int* r = *(int**)((char*)p + 4);
    *(int*)((char*)r + (int)this + 0x1bc) = (int)r - 0xd4;
    void* v = (char*)this + 0x274;
    (*(void(__thiscall**)(void*))0x5954b0)(v);
    Inner* old = *(Inner**)((char*)this + 0x26c);
    if (old != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            (*(void(__thiscall**)(Inner*))*(int*)old)(old);
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
            (*(void(__thiscall**)(Inner*))(*(int*)old + 8))(old);
        }
    }
    (*(void(__thiscall**)(Outer*))0x6183c0)(this);
}
