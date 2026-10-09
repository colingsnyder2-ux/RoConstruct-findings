// from server: 39% by colin
// roc 2007-08 0041dba0  unit: CInstanceRecord::CNameItem  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041dba0
//
// 0041dba0  51                   push ecx
// 0041dba1  83ec08               sub esp, 8
// 0041dba4  8bc4                 mov eax, esp
// 0041dba6  c70000000000         mov dword ptr [eax], 0
// 0041dbac  c7400400000000       mov dword ptr [eax + 4], 0
// 0041dbb3  8b153cae8b00         mov edx, dword ptr [0x8bae3c]
// 0041dbb9  89642408             mov dword ptr [esp + 8], esp
// 0041dbbd  83ec08               sub esp, 8
// 0041dbc0  8bc4                 mov eax, esp
// 0041dbc2  8910                 mov dword ptr [eax], edx
// 0041dbc4  8b1540ae8b00         mov edx, dword ptr [0x8bae40]
// 0041dbca  895004               mov dword ptr [eax + 4], edx
// 0041dbcd  8bc2                 mov eax, edx
// 0041dbcf  85c0                 test eax, eax
// 0041dbd1  89642410             mov dword ptr [esp + 0x10], esp
// 0041dbd5  740c                 je 0x41dbe3
// 0041dbd7  83c004               add eax, 4
// 0041dbda  ba01000000           mov edx, 1
// 0041dbdf  f00fc110             lock xadd dword ptr [eax], edx
// 0041dbe3  8b01                 mov eax, dword ptr [ecx]
// 0041dbe5  8b10                 mov edx, dword ptr [eax]
// 0041dbe7  ffd2                 call edx
// 0041dbe9  59                   pop ecx
// 0041dbea  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CNameItem {
    void func();
};

struct RefCounted {
    long refcount;
};

struct GlobalPair {
    void* ptr;
    RefCounted* ref;
};

extern GlobalPair g_pair1;
extern GlobalPair g_pair2;

void CNameItem::func()
{
    GlobalPair local1;
    local1.ptr = 0;
    local1.ref = 0;

    GlobalPair local2;
    local2.ptr = g_pair1.ptr;
    local2.ref = g_pair1.ref;

    if (local2.ref != 0) {
        _InterlockedExchangeAdd(&local2.ref->refcount, 1);
    }

    void** vtbl = *(void***)this;
    void (*fn)(void*) = (void (*)(void*))vtbl[0];
    fn(this);
}
