// from server: 88% by colin
// roc 2007-08 004a1b50  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1b50
//
// 004a1b50  56                   push esi
// 004a1b51  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a1b55  85f6                 test esi, esi
// 004a1b57  7638                 jbe 0x4a1b91
// 004a1b59  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a1b5d  8b442408             mov eax, dword ptr [esp + 8]
// 004a1b61  57                   push edi
// 004a1b62  85c0                 test eax, eax
// 004a1b64  7420                 je 0x4a1b86
// 004a1b66  8b0a                 mov ecx, dword ptr [edx]
// 004a1b68  8908                 mov dword ptr [eax], ecx
// 004a1b6a  8b4a04               mov ecx, dword ptr [edx + 4]
// 004a1b6d  894804               mov dword ptr [eax + 4], ecx
// 004a1b70  8b4a08               mov ecx, dword ptr [edx + 8]
// 004a1b73  85c9                 test ecx, ecx
// 004a1b75  894808               mov dword ptr [eax + 8], ecx
// 004a1b78  740c                 je 0x4a1b86
// 004a1b7a  83c104               add ecx, 4
// 004a1b7d  bf01000000           mov edi, 1
// 004a1b82  f00fc139             lock xadd dword ptr [ecx], edi
// 004a1b86  83ee01               sub esi, 1
// 004a1b89  83c00c               add eax, 0xc
// 004a1b8c  85f6                 test esi, esi
// 004a1b8e  77d2                 ja 0x4a1b62
// 004a1b90  5f                   pop edi
// 004a1b91  5e                   pop esi
// 004a1b92  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
};

struct Element {
    int a;
    int b;
    RefCounted* ptr;
};

void copyElements(Element* dst, const Element* src, unsigned int count)
{
    while (count > 0) {
        if (dst) {
            dst->a = src->a;
            dst->b = src->b;
            RefCounted* p = src->ptr;
            dst->ptr = p;
            if (p) {
                _InterlockedExchangeAdd(&p->refCount, 1);
            }
        }
        --count;
        ++dst;
    }
}
