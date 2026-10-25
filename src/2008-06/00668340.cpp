// from server: 100% by king_originala
// roc 2008-06 00668340  unit: RBX::HUMAN::GettingUp  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668340
//
// 00668340  83ec18               sub esp, 0x18
// 00668343  56                   push esi
// 00668344  8b742420             mov esi, dword ptr [esp + 0x20]
// 00668348  57                   push edi
// 00668349  8bf9                 mov edi, ecx
// 0066834b  8d442424             lea eax, [esp + 0x24]
// 0066834f  50                   push eax
// 00668350  8d4c240c             lea ecx, [esp + 0xc]
// 00668354  51                   push ecx
// 00668355  8d4f10               lea ecx, [edi + 0x10]
// 00668358  8974242c             mov dword ptr [esp + 0x2c], esi
// 0066835c  e8df08f8ff           call 0x5e8c40
// 00668361  8b460c               mov eax, dword ptr [esi + 0xc]
// 00668364  85c0                 test eax, eax
// 00668366  741a                 je 0x668382
// 00668368  8d542408             lea edx, [esp + 8]
// 0066836c  89442408             mov dword ptr [esp + 8], eax
// 00668370  52                   push edx
// 00668371  8d442418             lea eax, [esp + 0x18]
// 00668375  50                   push eax
// 00668376  8d4f30               lea ecx, [edi + 0x30]
// 00668379  89742414             mov dword ptr [esp + 0x14], esi
// 0066837d  e88efeffff           call 0x668210
// 00668382  8b4610               mov eax, dword ptr [esi + 0x10]
// 00668385  85c0                 test eax, eax
// 00668387  741a                 je 0x6683a3
// 00668389  8d4c2408             lea ecx, [esp + 8]
// 0066838d  51                   push ecx
// 0066838e  8d542418             lea edx, [esp + 0x18]
// 00668392  52                   push edx
// 00668393  8d4f30               lea ecx, [edi + 0x30]
// 00668396  89442410             mov dword ptr [esp + 0x10], eax
// 0066839a  89742414             mov dword ptr [esp + 0x14], esi
// 0066839e  e86dfeffff           call 0x668210
// 006683a3  5f                   pop edi
// 006683a4  5e                   pop esi
// 006683a5  83c418               add esp, 0x18
// 006683a8  c20400               ret 4

struct Item
{
    char reserved[12];
    void* first;
    void* second;
};

struct Result
{
    unsigned long data[3];
};

struct Entry
{
    void* key;
    Item* value;
};

struct FirstContainer
{
    char reserved[32];
    Result insert(Item* const&);
};

struct SecondContainer
{
    Result insert(const Entry&);
};

struct S
{
    char reserved[16];
    FirstContainer first;
    SecondContainer second;

    void f(Item*);
};

void S::f(Item* item)
{
    Item* value = item;
    first.insert(value);

    void* key = item->first;
    if (key)
    {
        Entry entry;
        entry.key = key;
        entry.value = item;
        second.insert(entry);
    }

    key = item->second;
    if (key)
    {
        Entry entry;
        entry.key = key;
        entry.value = item;
        second.insert(entry);
    }
}
