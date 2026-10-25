// from server: 100% by king_originala
// roc 2008-06 0048d5b0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048d5b0
//
// 0048d5b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048d5b4  85c0                 test eax, eax
// 0048d5b6  7513                 jne 0x48d5cb
// 0048d5b8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048d5bc  85c9                 test ecx, ecx
// 0048d5be  743c                 je 0x48d5fc
// 0048d5c0  8b442404             mov eax, dword ptr [esp + 4]
// 0048d5c4  50                   push eax
// 0048d5c5  e846f7ffff           call 0x48cd10
// 0048d5ca  c3                   ret 
// 0048d5cb  83f801               cmp eax, 1
// 0048d5ce  750c                 jne 0x48d5dc
// 0048d5d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048d5d4  83c104               add ecx, 4
// 0048d5d7  e98456f9ff           jmp 0x422c60
// 0048d5dc  56                   push esi
// 0048d5dd  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048d5e1  8b0e                 mov ecx, dword ptr [esi]
// 0048d5e3  68a8549300           push 0x9354a8
// 0048d5e8  ff1578288000         call dword ptr [0x802878]
// 0048d5ee  0fb6c8               movzx ecx, al
// 0048d5f1  f7d9                 neg ecx
// 0048d5f3  1bc9                 sbb ecx, ecx
// 0048d5f5  234c2408             and ecx, dword ptr [esp + 8]
// 0048d5f9  890e                 mov dword ptr [esi], ecx
// 0048d5fb  5e                   pop esi
// 0048d5fc  c3                   ret 

struct Control
{
    long reserved;
    volatile long references;
};

struct Shared
{
    long object;
    Control* control;
    void destroy();
};

struct S
{
    long a;
    long b;
    Control* c;
    void copy(const S* source);
};

typedef bool (__thiscall *TypeEqual)(const void*, const void*);
extern TypeEqual typeEqual;
extern const char targetType;

void __cdecl reconstruct(S* source, S* destination, int operation)
{
    if (operation == 0)
    {
        if (destination)
            destination->copy(source);
    }
    else if (operation == 1)
    {
        reinterpret_cast<Shared*>(
            reinterpret_cast<char*>(destination) + 4)->destroy();
    }
    else
    {
        const void** slot = reinterpret_cast<const void**>(destination);
        *slot = typeEqual(*slot, &targetType) ? source : 0;
    }
}
