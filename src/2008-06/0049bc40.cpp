// from server: 100% by king_originala
// roc 2008-06 0049bc40  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049bc40
//
// 0049bc40  64a100000000         mov eax, dword ptr fs:[0]
// 0049bc46  6aff                 push -1
// 0049bc48  6881757d00           push 0x7d7581
// 0049bc4d  50                   push eax
// 0049bc4e  64892500000000       mov dword ptr fs:[0], esp
// 0049bc55  83ec08               sub esp, 8
// 0049bc58  56                   push esi
// 0049bc59  8bf1                 mov esi, ecx
// 0049bc5b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0049bc5e  40                   inc eax
// 0049bc5f  394614               cmp dword ptr [esi + 0x14], eax
// 0049bc62  7707                 ja 0x49bc6b
// 0049bc64  6a01                 push 1
// 0049bc66  e895ccffff           call 0x498900
// 0049bc6b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0049bc6e  57                   push edi
// 0049bc6f  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0049bc72  037e1c               add edi, dword ptr [esi + 0x1c]
// 0049bc75  3bc7                 cmp eax, edi
// 0049bc77  7702                 ja 0x49bc7b
// 0049bc79  2bf8                 sub edi, eax
// 0049bc7b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0049bc7e  833cb900             cmp dword ptr [ecx + edi*4], 0
// 0049bc82  7510                 jne 0x49bc94
// 0049bc84  6a40                 push 0x40
// 0049bc86  e8954c2000           call 0x6a0920
// 0049bc8b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0049bc8e  83c404               add esp, 4
// 0049bc91  8904ba               mov dword ptr [edx + edi*4], eax
// 0049bc94  8b4610               mov eax, dword ptr [esi + 0x10]
// 0049bc97  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0049bc9a  894c2408             mov dword ptr [esp + 8], ecx
// 0049bc9e  894c240c             mov dword ptr [esp + 0xc], ecx
// 0049bca2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049bcaa  5f                   pop edi
// 0049bcab  85c9                 test ecx, ecx
// 0049bcad  740a                 je 0x49bcb9
// 0049bcaf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0049bcb3  52                   push edx
// 0049bcb4  e807e1ffff           call 0x499dc0
// 0049bcb9  ff461c               inc dword ptr [esi + 0x1c]
// 0049bcbc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049bcc0  5e                   pop esi
// 0049bcc1  64890d00000000       mov dword ptr fs:[0], ecx
// 0049bcc8  83c414               add esp, 0x14
// 0049bccb  c20400               ret 4

void* __cdecl operator new(unsigned int);
inline void* __cdecl operator new(unsigned int, void* p) { return p; }
inline void __cdecl operator delete(void*, void*) {}

struct Element {
    unsigned char storage[64];
    Element(const Element&);
};

inline void construct(Element* p, const Element& value)
{
    new (p) Element(value);
}

struct S {
    unsigned char padding[16];
    Element** map;
    unsigned int capacity;
    unsigned int first;
    unsigned int count;

    void grow(unsigned int);
    void push_back(const Element&);
};

void S::push_back(const Element& value)
{
    if (capacity <= count + 1)
        grow(1);

    unsigned int slot = first + count;
    if (capacity <= slot)
        slot -= capacity;

    if (map[slot] == 0)
        map[slot] = static_cast<Element*>(operator new(64));

    construct(map[slot], value);
    ++count;
}
