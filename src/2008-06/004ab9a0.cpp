// from server: 100% by tester
// roc 2008-06 004ab9a0  unit: RBX::Network::Replicator  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab9a0
//
// 004ab9a0  8b81702c0000         mov eax, dword ptr [ecx + 0x2c70]
// 004ab9a6  85c0                 test eax, eax
// 004ab9a8  7407                 je 0x4ab9b1
// 004ab9aa  8b80a0010000         mov eax, dword ptr [eax + 0x1a0]
// 004ab9b0  c3                   ret 
// 004ab9b1  33c0                 xor eax, eax
// 004ab9b3  c3                   ret 

struct Replicator {
    char pad[0x2c70];
    void* field_2bcc;
    void* get();
};

void* Replicator::get()
{
    void* p = field_2bcc;
    if (p)
        return *(void**)((char*)p + 0x1a0);
    return 0;
}
