// from server: 100% by king_originala
// roc 2008-06 005b72c0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b72c0
//
// 005b72c0  6aff                 push -1
// 005b72c2  683bf47b00           push 0x7bf43b
// 005b72c7  64a100000000         mov eax, dword ptr fs:[0]
// 005b72cd  50                   push eax
// 005b72ce  64892500000000       mov dword ptr fs:[0], esp
// 005b72d5  51                   push ecx
// 005b72d6  56                   push esi
// 005b72d7  6a24                 push 0x24
// 005b72d9  8bf1                 mov esi, ecx
// 005b72db  e840960e00           call 0x6a0920
// 005b72e0  83c404               add esp, 4
// 005b72e3  89442404             mov dword ptr [esp + 4], eax
// 005b72e7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005b72ef  85c0                 test eax, eax
// 005b72f1  740e                 je 0x5b7301
// 005b72f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005b72f7  51                   push ecx
// 005b72f8  8bc8                 mov ecx, eax
// 005b72fa  e851faffff           call 0x5b6d50
// 005b72ff  eb02                 jmp 0x5b7303
// 005b7301  33c0                 xor eax, eax
// 005b7303  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b7307  8906                 mov dword ptr [esi], eax
// 005b7309  8bc6                 mov eax, esi
// 005b730b  5e                   pop esi
// 005b730c  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7313  83c410               add esp, 0x10
// 005b7316  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Product
{
    char storage[36];
    Product(void* arg);
};

struct FactoryProduct
{
    Product* product;
    FactoryProduct(void* arg);
};

FactoryProduct::FactoryProduct(void* arg)
{
    product = new Product(arg);
}
