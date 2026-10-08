// from server: 68% by colin
// roc 2007-08 004562a0  unit: RBX::Network::VPlayers::?$Listener  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004562a0
//
// 004562a0  51                   push ecx
// 004562a1  8b9130010000         mov edx, dword ptr [ecx + 0x130]
// 004562a7  8b442408             mov eax, dword ptr [esp + 8]
// 004562ab  8910                 mov dword ptr [eax], edx
// 004562ad  8b8934010000         mov ecx, dword ptr [ecx + 0x134]
// 004562b3  85c9                 test ecx, ecx
// 004562b5  c7042400000000       mov dword ptr [esp], 0
// 004562bc  894804               mov dword ptr [eax + 4], ecx
// 004562bf  740c                 je 0x4562cd
// 004562c1  83c104               add ecx, 4
// 004562c4  ba01000000           mov edx, 1
// 004562c9  f00fc111             lock xadd dword ptr [ecx], edx
// 004562cd  59                   pop ecx
// 004562ce  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VPlayersListener {
    char pad[0x130];
    int m_refCounted;
    long* m_refCount;
    void getRefCounted(int* out);
};

void VPlayersListener::getRefCounted(int* out) {
    volatile long local = 0;
    out[0] = m_refCounted;
    long* rc = m_refCount;
    out[1] = (int)rc;
    if (rc) {
        _InterlockedExchangeAdd(rc + 1, 1);
    }
    (void)local;
}
