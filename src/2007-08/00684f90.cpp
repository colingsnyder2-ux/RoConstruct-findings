// from server: 86% by colin
// roc 2007-08 00684f90  unit: CXTPPropExchange  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684f90
//
// 00684f90  8b01                 mov eax, dword ptr [ecx]
// 00684f92  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00684f95  8d54240c             lea edx, [esp + 0xc]
// 00684f99  52                   push edx
// 00684f9a  8d54240c             lea edx, [esp + 0xc]
// 00684f9e  52                   push edx
// 00684f9f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00684fa3  52                   push edx
// 00684fa4  ffd0                 call eax
// 00684fa6  f7d8                 neg eax
// 00684fa8  1bc0                 sbb eax, eax
// 00684faa  2344240c             and eax, dword ptr [esp + 0xc]
// 00684fae  c20c00               ret 0xc

struct CXTPPropExchange
{
    virtual int GetPropExchange(int, int*, int*);
};

int CXTPPropExchange::GetPropExchange(int a, int* b, int* c)
{
    int v1;
    int v2;
    int result = ((int (__thiscall*)(CXTPPropExchange*, int, int*, int*))*(void**)(*(int*)this + 0x5c))(this, a, &v1, &v2);
    return (result == 0) ? 0 : v1;
}
