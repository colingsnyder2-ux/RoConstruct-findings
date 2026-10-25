// from server: 100% by colin
// roc 2008-06 004c8cf0  unit: RBX::Network::DirectPhysicsReceiver  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c8cf0
//
// 004c8cf0  83ec08               sub esp, 8
// 004c8cf3  56                   push esi
// 004c8cf4  57                   push edi
// 004c8cf5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c8cf9  8b5708               mov edx, dword ptr [edi + 8]
// 004c8cfc  c644240800           mov byte ptr [esp + 8], 0
// 004c8d01  8b442408             mov eax, dword ptr [esp + 8]
// 004c8d05  8bf1                 mov esi, ecx
// 004c8d07  50                   push eax
// 004c8d08  8d4c240c             lea ecx, [esp + 0xc]
// 004c8d0c  51                   push ecx
// 004c8d0d  52                   push edx
// 004c8d0e  8bce                 mov ecx, esi
// 004c8d10  e8fbe3ffff           call 0x4c7110
// 004c8d15  84c0                 test al, al
// 004c8d17  751f                 jne 0x4c8d38
// 004c8d19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c8d1d  85c0                 test eax, eax
// 004c8d1f  740d                 je 0x4c8d2e
// 004c8d21  5f                   pop edi
// 004c8d22  0580fdffff           add eax, 0xfffffd80
// 004c8d27  5e                   pop esi
// 004c8d28  83c408               add esp, 8
// 004c8d2b  c20800               ret 8
// 004c8d2e  5f                   pop edi
// 004c8d2f  33c0                 xor eax, eax
// 004c8d31  5e                   pop esi
// 004c8d32  83c408               add esp, 8
// 004c8d35  c20800               ret 8
// 004c8d38  53                   push ebx
// 004c8d39  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004c8d3d  53                   push ebx
// 004c8d3e  57                   push edi
// 004c8d3f  8bce                 mov ecx, esi
// 004c8d41  e8dafdffff           call 0x4c8b20
// 004c8d46  8bf8                 mov edi, eax
// 004c8d48  3bfb                 cmp edi, ebx
// 004c8d4a  753e                 jne 0x4c8d8a
// 004c8d4c  85f6                 test esi, esi
// 004c8d4e  7405                 je 0x4c8d55
// 004c8d50  8d46f4               lea eax, [esi - 0xc]
// 004c8d53  eb02                 jmp 0x4c8d57
// 004c8d55  33c0                 xor eax, eax
// 004c8d57  8b4004               mov eax, dword ptr [eax + 4]
// 004c8d5a  85c0                 test eax, eax
// 004c8d5c  7408                 je 0x4c8d66
// 004c8d5e  8d8880020000         lea ecx, [eax + 0x280]
// 004c8d64  eb02                 jmp 0x4c8d68
// 004c8d66  33c9                 xor ecx, ecx
// 004c8d68  85db                 test ebx, ebx
// 004c8d6a  7408                 je 0x4c8d74
// 004c8d6c  8d8380020000         lea eax, [ebx + 0x280]
// 004c8d72  eb02                 jmp 0x4c8d76
// 004c8d74  33c0                 xor eax, eax
// 004c8d76  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004c8d7a  51                   push ecx
// 004c8d7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c8d7f  51                   push ecx
// 004c8d80  52                   push edx
// 004c8d81  50                   push eax
// 004c8d82  e8f9dbffff           call 0x4c6980
// 004c8d87  83c410               add esp, 0x10
// 004c8d8a  5b                   pop ebx
// 004c8d8b  8bc7                 mov eax, edi
// 004c8d8d  5f                   pop edi
// 004c8d8e  5e                   pop esi
// 004c8d8f  83c408               add esp, 8
// 004c8d92  c20800               ret 8

//

struct Link;

struct Tag {
    bool value;
};

struct Position {
    Tag tag;
    Link *link;
};

struct Object {
    char reserved[0x8];
    void *key;
};

struct Product;

extern "C" void __cdecl insert(Link *node, Position position, Link *owner);

struct Factory {
    bool find(void *key, Position *position, Tag tag);
    Product *construct(void *argument, void *storage);
    Product *create(Object *argument, Product *storage);
};

Product *Factory::create(Object *argument, Product *storage)
{
    Position position;
    position.tag.value = false;

    if (!find(argument->key, &position, position.tag)) {
        if (position.link)
            return reinterpret_cast<Product *>(
                reinterpret_cast<char *>(position.link) - 0x280);
        return 0;
    }

    Product *result = construct(argument, storage);
    if (result == storage) {
        char *base = this ? reinterpret_cast<char *>(this) - 0x0C : 0;
        Product *owner = *reinterpret_cast<Product **>(base + 4);
        Link *ownerLink = owner
            ? reinterpret_cast<Link *>(reinterpret_cast<char *>(owner) + 0x280)
            : 0;
        Link *storageLink = storage
            ? reinterpret_cast<Link *>(reinterpret_cast<char *>(storage) + 0x280)
            : 0;
        insert(storageLink, position, ownerLink);
    }

    return result;
}
