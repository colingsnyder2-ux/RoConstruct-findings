// from server: 100% by king_originala
// roc 2008-06 00403da0  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403da0
//
// 00403da0  85c9                 test ecx, ecx
// 00403da2  7416                 je 0x403dba
// 00403da4  8b542404             mov edx, dword ptr [esp + 4]
// 00403da8  8d4104               lea eax, [ecx + 4]
// 00403dab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00403daf  51                   push ecx
// 00403db0  52                   push edx
// 00403db1  50                   push eax
// 00403db2  e839fbffff           call 0x4038f0
// 00403db7  c20800               ret 8
// 00403dba  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00403dbe  8b542404             mov edx, dword ptr [esp + 4]
// 00403dc2  51                   push ecx
// 00403dc3  33c0                 xor eax, eax
// 00403dc5  52                   push edx
// 00403dc6  50                   push eax
// 00403dc7  e824fbffff           call 0x4038f0
// 00403dcc  c20800               ret 8

struct A {
    unsigned long value;
};

struct B {
    unsigned long value;
};

extern "C" long __stdcall query(B *, const void *, void **);

struct S : A, B {
    long f(const void *, void **);
};

long S::f(const void *id, void **result)
{
    return query(static_cast<B *>(this), id, result);
}
