// from server: 72% by colin
// roc 2007-08 00423600  unit: CSelectionTreeCtrl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00423600
//
// 00423600  51                   push ecx
// 00423601  8b91e4000000         mov edx, dword ptr [ecx + 0xe4]
// 00423607  8b442408             mov eax, dword ptr [esp + 8]
// 0042360b  8910                 mov dword ptr [eax], edx
// 0042360d  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 00423613  85c9                 test ecx, ecx
// 00423615  c7042400000000       mov dword ptr [esp], 0
// 0042361c  894804               mov dword ptr [eax + 4], ecx
// 0042361f  740c                 je 0x42362d
// 00423621  83c104               add ecx, 4
// 00423624  ba01000000           mov edx, 1
// 00423629  f00fc111             lock xadd dword ptr [ecx], edx
// 0042362d  59                   pop ecx
// 0042362e  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CSelectionTreeCtrl {
    char pad[0xe4];
    int m_fieldE4;
    int m_fieldE8;
    void getPair(int* out);
};

void CSelectionTreeCtrl::getPair(int* out) {
    out[0] = m_fieldE4;
    int* p = (int*)m_fieldE8;
    out[1] = (int)p;
    if (p == 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
}
