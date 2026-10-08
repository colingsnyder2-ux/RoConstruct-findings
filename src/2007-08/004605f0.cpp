// from server: 72% by colin
// roc 2007-08 004605f0  unit: RBX::VRunService::?$Listener  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004605f0
//
// 004605f0  51                   push ecx
// 004605f1  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 004605f7  8b442408             mov eax, dword ptr [esp + 8]
// 004605fb  8910                 mov dword ptr [eax], edx
// 004605fd  8b89dc010000         mov ecx, dword ptr [ecx + 0x1dc]
// 00460603  85c9                 test ecx, ecx
// 00460605  c7042400000000       mov dword ptr [esp], 0
// 0046060c  894804               mov dword ptr [eax + 4], ecx
// 0046060f  740c                 je 0x46061d
// 00460611  83c104               add ecx, 4
// 00460614  ba01000000           mov edx, 1
// 00460619  f00fc111             lock xadd dword ptr [ecx], edx
// 0046061d  59                   pop ecx
// 0046061e  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Listener {
    char pad[0x1d8];
    int m_listener;
    int m_query;
    void get(int* out);
};

void Listener::get(int* out) {
    out[0] = this->m_listener;
    int q = this->m_query;
    out[1] = q;
    if (q == 0) {
        _InterlockedExchangeAdd((volatile long*)(q + 4), 1);
    }
}
