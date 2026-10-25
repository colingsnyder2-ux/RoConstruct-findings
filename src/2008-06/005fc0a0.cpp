// from server: 100% by king_originala
// roc 2008-06 005fc0a0  unit: RBX::LocalBackpackItem  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fc0a0
//
// 005fc0a0  53                   push ebx
// 005fc0a1  8bd9                 mov ebx, ecx
// 005fc0a3  56                   push esi
// 005fc0a4  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 005fc0aa  85f6                 test esi, esi
// 005fc0ac  740b                 je 0x5fc0b9
// 005fc0ae  8b4610               mov eax, dword ptr [esi + 0x10]
// 005fc0b1  2b460c               sub eax, dword ptr [esi + 0xc]
// 005fc0b4  c1f803               sar eax, 3
// 005fc0b7  eb02                 jmp 0x5fc0bb
// 005fc0b9  33c0                 xor eax, eax
// 005fc0bb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fc0bf  3bc8                 cmp ecx, eax
// 005fc0c1  772d                 ja 0x5fc0f0
// 005fc0c3  8b4610               mov eax, dword ptr [esi + 0x10]
// 005fc0c6  2b460c               sub eax, dword ptr [esi + 0xc]
// 005fc0c9  57                   push edi
// 005fc0ca  8d79ff               lea edi, [ecx - 1]
// 005fc0cd  c1f803               sar eax, 3
// 005fc0d0  3bf8                 cmp edi, eax
// 005fc0d2  7206                 jb 0x5fc0da
// 005fc0d4  ff1590288000         call dword ptr [0x802890]
// 005fc0da  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005fc0dd  8b14f9               mov edx, dword ptr [ecx + edi*8]
// 005fc0e0  52                   push edx
// 005fc0e1  8bcb                 mov ecx, ebx
// 005fc0e3  e808ffffff           call 0x5fbff0
// 005fc0e8  5f                   pop edi
// 005fc0e9  5e                   pop esi
// 005fc0ea  b001                 mov al, 1
// 005fc0ec  5b                   pop ebx
// 005fc0ed  c20400               ret 4
// 005fc0f0  5e                   pop esi
// 005fc0f1  32c0                 xor al, al
// 005fc0f3  5b                   pop ebx
// 005fc0f4  c20400               ret 4

extern "C" void (__cdecl * const invalid_parameter_noinfo)();

struct Entry {
    void* value;
    void* owner;
};

struct Container {
    char padding[12];
    Entry* begin;
    Entry* end;
};

struct S {
    char padding[0x108];
    Container* items;

    void select(void* value);
    bool f(unsigned int index);
};

bool S::f(unsigned int index)
{
    Container* p = items;
    unsigned int count = p ? static_cast<unsigned int>(p->end - p->begin) : 0;
    if (index <= count) {
        unsigned int position = index - 1;
        if (position >= static_cast<unsigned int>(p->end - p->begin))
            invalid_parameter_noinfo();
        select(p->begin[position].value);
        return true;
    }
    return false;
}
