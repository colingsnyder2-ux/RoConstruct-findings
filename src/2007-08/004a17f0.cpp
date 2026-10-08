// from server: 67% by colin
// roc 2007-08 004a17f0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a17f0
//
// 004a17f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a17f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a17f8  56                   push esi
// 004a17f9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a17fd  3bce                 cmp ecx, esi
// 004a17ff  7430                 je 0x4a1831
// 004a1801  57                   push edi
// 004a1802  85c0                 test eax, eax
// 004a1804  7420                 je 0x4a1826
// 004a1806  8b11                 mov edx, dword ptr [ecx]
// 004a1808  8910                 mov dword ptr [eax], edx
// 004a180a  8b5104               mov edx, dword ptr [ecx + 4]
// 004a180d  895004               mov dword ptr [eax + 4], edx
// 004a1810  8b5108               mov edx, dword ptr [ecx + 8]
// 004a1813  85d2                 test edx, edx
// 004a1815  895008               mov dword ptr [eax + 8], edx
// 004a1818  740c                 je 0x4a1826
// 004a181a  83c204               add edx, 4
// 004a181d  bf01000000           mov edi, 1
// 004a1822  f00fc13a             lock xadd dword ptr [edx], edi
// 004a1826  83c10c               add ecx, 0xc
// 004a1829  83c00c               add eax, 0xc
// 004a182c  3bce                 cmp ecx, esi
// 004a182e  75d2                 jne 0x4a1802
// 004a1830  5f                   pop edi
// 004a1831  5e                   pop esi
// 004a1832  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct BoundFuncDesc
{
    int field0;
    int field4;
    volatile long* field8;
};

void copyRange(BoundFuncDesc* first, BoundFuncDesc* last, BoundFuncDesc* dst)
{
    while (first != last)
    {
        if (dst)
        {
            dst->field0 = first->field0;
            dst->field4 = first->field4;
            volatile long* p = first->field8;
            dst->field8 = p;
            if (p)
            {
                _InterlockedExchangeAdd(p + 1, 1);
            }
        }
        first++;
        dst++;
    }
}
