// from server: 46% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VCRenderSettingsItem {
    void* construct(int, int, int, int, void*);
};

void* VCRenderSettingsItem::construct(int a, int b, int c, int d, void* e) {
    int* self = reinterpret_cast<int*>(this);
    *self = 0;
    int local[4];
    local[0] = a;
    local[1] = b;
    local[2] = c;
    local[3] = d;
    if (e) {
        _InterlockedExchangeAdd(reinterpret_cast<volatile long*>(reinterpret_cast<char*>(e) + 4), 1);
    }
    reinterpret_cast<void(__thiscall*)(VCRenderSettingsItem*, int*)>(0x4ba620)(this, local);
    if (e) {
        if (_InterlockedExchangeAdd(reinterpret_cast<volatile long*>(reinterpret_cast<char*>(e) + 4), -1) == 1) {
            int* vtable = *reinterpret_cast<int**>(e);
            reinterpret_cast<void(__thiscall*)(void*)>(vtable[1])(e);
        }
        if (_InterlockedExchangeAdd(reinterpret_cast<volatile long*>(reinterpret_cast<char*>(e) + 8), -1) == 1) {
            int* vtable = *reinterpret_cast<int**>(e);
            reinterpret_cast<void(__thiscall*)(void*)>(vtable[2])(e);
        }
    }

    return this;
}
