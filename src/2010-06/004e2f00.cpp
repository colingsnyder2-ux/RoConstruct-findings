// from server: 66% by atomic.potato
// roc 2010-06 004e2f00  unit: RBX::Network::IdSerializer  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e2f00
//
// 004e2f00  51                   push ecx
// 004e2f01  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e2f05  8d0424               lea eax, [esp]
// 004e2f08  50                   push eax
// 004e2f09  e882fbffff           call 0x4e2a90
// 004e2f0e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e2f12  50                   push eax
// 004e2f13  51                   push ecx
// 004e2f14  e867e7ffff           call 0x4e1680
// 004e2f19  83c40c               add esp, 0xc
// 004e2f1c  c3                   ret 

struct SomeClass {
    int method(int* out);
};

int __cdecl func2(SomeClass* p, int res);

int func(SomeClass* p) {
    int local;
    int res = p->method(&local);
    return func2(p, res);
}
