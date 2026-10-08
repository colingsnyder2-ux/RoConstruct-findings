// from server: 80% by colin
// roc 2007-08 00684f70  unit: CXTPPropExchange  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684f70
//
// 00684f70  8b01                 mov eax, dword ptr [ecx]
// 00684f72  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00684f75  8d54240c             lea edx, [esp + 0xc]
// 00684f79  52                   push edx
// 00684f7a  8d54240c             lea edx, [esp + 0xc]
// 00684f7e  52                   push edx
// 00684f7f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00684f83  52                   push edx
// 00684f84  ffd0                 call eax
// 00684f86  c20c00               ret 0xc

struct CXTPPropExchange {
    virtual int f(int, int, int);
};

int CXTPPropExchange::f(int a, int b, int c) {
    return ((int (__thiscall *)(CXTPPropExchange *, int *, int *, int))*(void **)(*(int *)this + 0x5c))(this, &a, &b, c);
}
