// from server: 93% by colin
// roc 2007-08 00545cc0  unit: RBX::MD5HasherImpl  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545cc0
//
// 00545cc0  56                   push esi
// 00545cc1  57                   push edi
// 00545cc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00545cc6  57                   push edi
// 00545cc7  8bf1                 mov esi, ecx
// 00545cc9  ff159ce67700         call dword ptr [0x77e69c]
// 00545ccf  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00545cd2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00545cd6  89461c               mov dword ptr [esi + 0x1c], eax
// 00545cd9  8b11                 mov edx, dword ptr [ecx]
// 00545cdb  895620               mov dword ptr [esi + 0x20], edx
// 00545cde  8b4104               mov eax, dword ptr [ecx + 4]
// 00545ce1  85c0                 test eax, eax
// 00545ce3  894624               mov dword ptr [esi + 0x24], eax
// 00545ce6  740c                 je 0x545cf4
// 00545ce8  83c004               add eax, 4
// 00545ceb  ba01000000           mov edx, 1
// 00545cf0  f00fc110             lock xadd dword ptr [eax], edx
// 00545cf4  8b4108               mov eax, dword ptr [ecx + 8]
// 00545cf7  894628               mov dword ptr [esi + 0x28], eax
// 00545cfa  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00545cfd  85c9                 test ecx, ecx
// 00545cff  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00545d02  740c                 je 0x545d10
// 00545d04  83c104               add ecx, 4
// 00545d07  ba01000000           mov edx, 1
// 00545d0c  f00fc111             lock xadd dword ptr [ecx], edx
// 00545d10  5f                   pop edi
// 00545d11  8bc6                 mov eax, esi
// 00545d13  5e                   pop esi
// 00545d14  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct MD5HasherImpl {
    char pad0[0x1c];
    int field1c;
    int field20;
    int* field24;
    int field28;
    int* field2c;

    MD5HasherImpl* construct(int* a, int* b);
};

extern "C" void (__stdcall *sub_77e69c)(int*);

MD5HasherImpl* MD5HasherImpl::construct(int* a, int* b)
{
    sub_77e69c(a);
    this->field1c = a[7];
    this->field20 = b[0];
    int* p = (int*)b[1];
    this->field24 = p;
    if (p != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    this->field28 = b[2];
    int* q = (int*)b[3];
    this->field2c = q;
    if (q != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)q + 4), 1);
    }
    return this;
}
