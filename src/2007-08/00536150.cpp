// from server: 72% by colin
// roc 2007-08 00536150  unit: boost::any::placeholder  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536150
//
// 00536150  51                   push ecx
// 00536151  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 00536157  8b442408             mov eax, dword ptr [esp + 8]
// 0053615b  8910                 mov dword ptr [eax], edx
// 0053615d  8b89ec000000         mov ecx, dword ptr [ecx + 0xec]
// 00536163  85c9                 test ecx, ecx
// 00536165  c7042400000000       mov dword ptr [esp], 0
// 0053616c  894804               mov dword ptr [eax + 4], ecx
// 0053616f  740c                 je 0x53617d
// 00536171  83c104               add ecx, 4
// 00536174  ba01000000           mov edx, 1
// 00536179  f00fc111             lock xadd dword ptr [ecx], edx
// 0053617d  59                   pop ecx
// 0053617e  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct placeholder {
    char pad[0xe8];
    int field_e8;
    long* field_ec;
    void get(int* out);
};

void placeholder::get(int* out) {
    out[0] = this->field_e8;
    long* p = this->field_ec;
    out[1] = (int)p;
    if (p == 0) {
        _InterlockedExchangeAdd(p + 1, 1);
    }
}
