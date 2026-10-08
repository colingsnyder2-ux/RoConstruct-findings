// from server: 97% by colin
// roc 2007-08 00495840  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00495840
//
// 00495840  8b442404             mov eax, dword ptr [esp + 4]
// 00495844  50                   push eax
// 00495845  e86687ffff           call 0x48dfb0
// 0049584a  83c404               add esp, 4
// 0049584d  85c0                 test eax, eax
// 0049584f  7411                 je 0x495862
// 00495851  8b8038010000         mov eax, dword ptr [eax + 0x138]
// 00495857  85c0                 test eax, eax
// 00495859  7407                 je 0x495862
// 0049585b  8b8018010000         mov eax, dword ptr [eax + 0x118]
// 00495861  c3                   ret 
// 00495862  33c0                 xor eax, eax
// 00495864  c3                   ret 

struct DescribedBase;

struct PropDescriptor {
    void* getValue(const DescribedBase* object) const;
};

struct RefPropDescriptor {
    void* getValue(const DescribedBase* object) const;
};

void* getPropValue(const DescribedBase* object);

void* RefPropDescriptor_getValue(const RefPropDescriptor* self, const DescribedBase* object)
{
    void* result = getPropValue(object);
    if (result != 0) {
        void* p = *(void**)((char*)result + 0x138);
        if (p != 0) {
            return *(void**)((char*)p + 0x118);
        }
    }
    return 0;
}
