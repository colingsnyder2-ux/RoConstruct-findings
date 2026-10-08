// from server: 89% by colin
// roc 2007-08 0064b280  unit: CXTPImageManagerIcon  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064b280
//
// 0064b280  56                   push esi
// 0064b281  57                   push edi
// 0064b282  8bf1                 mov esi, ecx
// 0064b284  e8b7d3ffff           call 0x648640
// 0064b289  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064b28d  8b07                 mov eax, dword ptr [edi]
// 0064b28f  85c0                 test eax, eax
// 0064b291  7409                 je 0x64b29c
// 0064b293  50                   push eax
// 0064b294  ff1584ee7700         call dword ptr [0x77ee84]
// 0064b29a  8906                 mov dword ptr [esi], eax
// 0064b29c  8b4704               mov eax, dword ptr [edi + 4]
// 0064b29f  85c0                 test eax, eax
// 0064b2a1  740c                 je 0x64b2af
// 0064b2a3  50                   push eax
// 0064b2a4  e867e7ffff           call 0x649a10
// 0064b2a9  83c404               add esp, 4
// 0064b2ac  894604               mov dword ptr [esi + 4], eax
// 0064b2af  5f                   pop edi
// 0064b2b0  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 0064b2b7  5e                   pop esi
// 0064b2b8  c20400               ret 4

extern "C" void* __stdcall CopyIcon(void*);

void __stdcall sub_648640();
void* __stdcall sub_649a10(void*);

struct CXTPImageManagerIcon
{
    void* m_pIcon;
    void* m_pIcon2;
    int m_nUnknown8;
    int m_nUnknownC;

    void Assign(CXTPImageManagerIcon* other);
};

void CXTPImageManagerIcon::Assign(CXTPImageManagerIcon* other)
{
    void* p;
    void* q;

    sub_648640();

    p = other->m_pIcon;
    if (p != 0)
    {
        m_pIcon = CopyIcon(p);
    }

    q = other->m_pIcon2;
    if (q != 0)
    {
        m_pIcon2 = sub_649a10(q);
    }

    m_nUnknownC = 1;
}
