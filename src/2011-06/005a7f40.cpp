// from server: 56% by atomic.potato
// roc 2011-06 005a7f40  unit: RBX::VFriendService::?$FactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a7f40
//
// 005a7f40  51                   push ecx
// 005a7f41  56                   push esi
// 005a7f42  57                   push edi
// 005a7f43  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005a7f47  57                   push edi
// 005a7f48  8bf1                 mov esi, ecx
// 005a7f4a  e861fcffff           call 0x5a7bb0
// 005a7f4f  8b7604               mov esi, dword ptr [esi + 4]
// 005a7f52  89442414             mov dword ptr [esp + 0x14], eax
// 005a7f56  3bc6                 cmp eax, esi
// 005a7f58  7425                 je 0x5a7f7f
// 005a7f5a  8b0f                 mov ecx, dword ptr [edi]
// 005a7f5c  8b500c               mov edx, dword ptr [eax + 0xc]
// 005a7f5f  3bd1                 cmp edx, ecx
// 005a7f61  7f1c                 jg 0x5a7f7f
// 005a7f63  7c08                 jl 0x5a7f6d
// 005a7f65  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a7f68  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 005a7f6b  7c12                 jl 0x5a7f7f
// 005a7f6d  8d442414             lea eax, [esp + 0x14]
// 005a7f71  8b10                 mov edx, dword ptr [eax]
// 005a7f73  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a7f77  5f                   pop edi
// 005a7f78  8910                 mov dword ptr [eax], edx
// 005a7f7a  5e                   pop esi
// 005a7f7b  59                   pop ecx
// 005a7f7c  c20800               ret 8
// 005a7f7f  8d442408             lea eax, [esp + 8]
// 005a7f83  89742408             mov dword ptr [esp + 8], esi
// 005a7f87  8b10                 mov edx, dword ptr [eax]
// 005a7f89  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a7f8d  5f                   pop edi
// 005a7f8e  8910                 mov dword ptr [eax], edx
// 005a7f90  5e                   pop esi
// 005a7f91  59                   pop ecx
// 005a7f92  c20800               ret 8

struct Node {
    char pad0[0xc];
    int key_lo;
    int key_hi;
};

struct Container {
    char pad0[4];
    Node* end;
};

struct Result {
    Node* ptr;
};

struct VFriendService {
    Result* lower_bound(int* key, Result* out);
};

extern "C" Node* __stdcall find_node(Container* self, int* key);

Result* VFriendService::lower_bound(int* key, Result* out) {
    Node* it = find_node((Container*)this, key);
    Node* end = ((Container*)this)->end;
    if (it != end) {
        if (it->key_lo > key[0]) {
            goto done;
        }
        if (it->key_lo == key[0]) {
            if (key[1] < it->key_hi) {
                goto done;
            }
        }
        out->ptr = it;
        return out;
    }
done:
    out->ptr = end;
    return out;
}
