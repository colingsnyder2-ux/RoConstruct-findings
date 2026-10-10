// from server: 60% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct ChatOutput {
    char pad0[0x280];
    int field280;
    char pad284[0x14];
    unsigned char field298;
    unsigned char field299;
    char pad29a[2];
    void ProcessChat(int a, RefCounted* p);
};

void ChatOutput::ProcessChat(int a, RefCounted* p)
{
    if (field299 == 0) {
        if (p) {
            _InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 0) {
                (*(void (__thiscall**)(RefCounted*))(*(int*)p + 4))(p);
                if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 0) {
                    (*(void (__thiscall**)(RefCounted*))(*(int*)p + 8))(p);
                }
            }
        }
        return;
    }
    {
        RefCounted* q = *(RefCounted**)((char*)a + 0xbc);
        if (q) {
            if (((int (__thiscall*)(RefCounted*))0x5a0120)(q)) {
                RefCounted* r = ((RefCounted* (__cdecl*)(RefCounted*))0x495870)(q);
                if (r) {
                    ((void (__thiscall*)(RefCounted*, int))0x48f270)(r, field280);
                    ((void (__thiscall*)(RefCounted*, unsigned char))0x48f2a0)(r, field298);
                }
            }
        }
    }
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 0) {
            (*(void (__thiscall**)(RefCounted*))(*(int*)p + 4))(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 0) {
                (*(void (__thiscall**)(RefCounted*))(*(int*)p + 8))(p);
            }
        }
    }
}
