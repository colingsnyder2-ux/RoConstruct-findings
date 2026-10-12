// from server: 89% by king_originala
// roc 2008-06 00582b50  unit: RBX::UngroupSelectionVerb  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00582b50
//
// 00582b50  56                   push esi
// 00582b51  8bf1                 mov esi, ecx
// 00582b53  6a01                 push 1
// 00582b55  8d4e14               lea ecx, [esi + 0x14]
// 00582b58  e863f1ffff           call 0x581cc0
// 00582b5d  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00582b63  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00582b66  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00582b69  c1f903               sar ecx, 3
// 00582b6c  85c9                 test ecx, ecx
// 00582b6e  7704                 ja 0x582b74
// 00582b70  32c0                 xor al, al
// 00582b72  5e                   pop esi
// 00582b73  c3                   ret 
// 00582b74  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00582b77  85c9                 test ecx, ecx
// 00582b79  7419                 je 0x582b94
// 00582b7b  e840dbffff           call 0x5806c0
// 00582b80  6810e15700           push 0x57e110
// 00582b85  8bc8                 mov ecx, eax
// 00582b87  e824c2ffff           call 0x57edb0
// 00582b8c  f7d8                 neg eax
// 00582b8e  1bc0                 sbb eax, eax
// 00582b90  f7d8                 neg eax
// 00582b92  5e                   pop esi
// 00582b93  c3                   ret 
// 00582b94  33c0                 xor eax, eax
// 00582b96  6810e15700           push 0x57e110
// 00582b9b  8bc8                 mov ecx, eax
// 00582b9d  e80ec2ffff           call 0x57edb0
// 00582ba2  f7d8                 neg eax
// 00582ba4  1bc0                 sbb eax, eax
// 00582ba6  f7d8                 neg eax
// 00582ba8  5e                   pop esi
// 00582ba9  c3                   ret 

struct Item {
    unsigned int first;
    unsigned int second;
};

struct Selection {
    char padding[12];
    Item* begin;
    Item* end;
};

struct Root {
    char padding[0x154];
    Selection* selection;
};

struct Handle {
    char padding[12];
    Root* get(int);
};

extern bool __cdecl predicate(void*);

struct Target {
    int check(bool (__cdecl*)(void*));
};

struct Provider {
    Target* get();
};

struct S {
    char padding[0x14];
    Handle handle;
    Provider* provider;
    bool f();
};

bool S::f()
{
    Selection* selection = handle.get(1)->selection;
    if (static_cast<unsigned int>(selection->end - selection->begin) == 0)
        return false;

    Target* target = provider ? provider->get() : 0;
    return target->check(predicate) != 0;
}
