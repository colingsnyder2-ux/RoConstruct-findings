// from server: 89% by colin
// roc 2007-08 00545f30  unit: RBX::MD5HasherImpl  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545f30
//
// 00545f30  56                   push esi
// 00545f31  57                   push edi
// 00545f32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00545f36  57                   push edi
// 00545f37  8bf1                 mov esi, ecx
// 00545f39  ff159ce67700         call dword ptr [0x77e69c]
// 00545f3f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00545f42  89461c               mov dword ptr [esi + 0x1c], eax
// 00545f45  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00545f48  894e20               mov dword ptr [esi + 0x20], ecx
// 00545f4b  8b4724               mov eax, dword ptr [edi + 0x24]
// 00545f4e  85c0                 test eax, eax
// 00545f50  894624               mov dword ptr [esi + 0x24], eax
// 00545f53  740c                 je 0x545f61
// 00545f55  83c004               add eax, 4
// 00545f58  ba01000000           mov edx, 1
// 00545f5d  f00fc110             lock xadd dword ptr [eax], edx
// 00545f61  8b4728               mov eax, dword ptr [edi + 0x28]
// 00545f64  894628               mov dword ptr [esi + 0x28], eax
// 00545f67  8b7f2c               mov edi, dword ptr [edi + 0x2c]
// 00545f6a  85ff                 test edi, edi
// 00545f6c  897e2c               mov dword ptr [esi + 0x2c], edi
// 00545f6f  740c                 je 0x545f7d
// 00545f71  83c704               add edi, 4
// 00545f74  b901000000           mov ecx, 1
// 00545f79  f00fc10f             lock xadd dword ptr [edi], ecx
// 00545f7d  5f                   pop edi
// 00545f7e  8bc6                 mov eax, esi
// 00545f80  5e                   pop esi
// 00545f81  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct MD5Hasher {
    void* vptr;
    char pad[0x18];
    int field1c;
    int field20;
    void* field24;
    int field28;
    void* field2c;
};

struct MD5HasherImpl : MD5Hasher {
    MD5HasherImpl(const MD5HasherImpl& other);
};

extern "C" void __stdcall basic_string_copy_ctor(void*, const void*);

MD5HasherImpl::MD5HasherImpl(const MD5HasherImpl& other)
{
    basic_string_copy_ctor(this, &other);
    this->field1c = other.field1c;
    this->field20 = other.field20;
    this->field24 = other.field24;
    if (this->field24) {
        _InterlockedExchangeAdd((volatile long*)((char*)this->field24 + 4), 1);
    }
    this->field28 = other.field28;
    this->field2c = other.field2c;
    if (this->field2c) {
        _InterlockedExchangeAdd((volatile long*)((char*)this->field2c + 4), 1);
    }
}
