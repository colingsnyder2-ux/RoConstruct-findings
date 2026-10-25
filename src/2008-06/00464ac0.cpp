// from server: 100% by atomic.potato
// roc 2008-06 00464ac0  unit: RBX::VRunService::?$MarshaledListener  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464ac0
//
// 00464ac0  56                   push esi
// 00464ac1  57                   push edi
// 00464ac2  8bf9                 mov edi, ecx
// 00464ac4  8b7720               mov esi, dword ptr [edi + 0x20]
// 00464ac7  83c62c               add esi, 0x2c
// 00464aca  56                   push esi
// 00464acb  ff15d4228000         call dword ptr [0x8022d4]
// 00464ad1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00464ad5  8b07                 mov eax, dword ptr [edi]
// 00464ad7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00464adb  8b400c               mov eax, dword ptr [eax + 0xc]
// 00464ade  51                   push ecx
// 00464adf  52                   push edx
// 00464ae0  8bcf                 mov ecx, edi
// 00464ae2  ffd0                 call eax
// 00464ae4  56                   push esi
// 00464ae5  ff15f4218000         call dword ptr [0x8021f4]
// 00464aeb  5f                   pop edi
// 00464aec  5e                   pop esi
// 00464aed  c20800               ret 8

typedef unsigned long DWORD;

struct CRITICAL_SECTION
{
    DWORD data[6];
};

extern "C" void __declspec(dllimport) __stdcall EnterCriticalSection(CRITICAL_SECTION *);
extern "C" void __declspec(dllimport) __stdcall LeaveCriticalSection(CRITICAL_SECTION *);

struct MarshaledListener
{
    void *vtable;
    char padding[0x1c];
    CRITICAL_SECTION *section;
    void f(void *, void *);
};

void MarshaledListener::f(void *b, void *a)
{
    CRITICAL_SECTION *lock = (CRITICAL_SECTION *)((char *)section + 0x2c);
    EnterCriticalSection(lock);
    ((void (__thiscall *)(MarshaledListener *, void *, void *))(*(void **)(*(char **)this + 0x0c)))(this, b, a);
    LeaveCriticalSection(lock);
}
