// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct VCLuaFunction {
    int unknown0;
    int unknown4;
    int unknown8;
    int unknownC;
    int unknown10;

    void* __cdecl QueryInterface(int iid, void** ppv);
};

void* VCLuaFunction::QueryInterface(int iid, void** ppv)
{
    if (iid == 0) {
        if (ppv) {
            *ppv = this;
            if (unknownC) {
                _InterlockedExchangeAdd((volatile long*)(unknownC + 4), 1);
            }
            return 0;
        }
        return 0;
    }
    if (iid == 1) {
        int p = unknownC;
        if (p) {
            if (_InterlockedExchangeAdd((volatile long*)(p + 4), -1) == 1) {
                (*(void (__thiscall**)(int))(*(int*)p + 4))(p);
                if (_InterlockedExchangeAdd((volatile long*)(p + 8), -1) == 1) {
                    (*(void (__thiscall**)(int))(*(int*)p + 8))(p);
                }
            }
        }
        return 0;
    }
    return 0;
}
