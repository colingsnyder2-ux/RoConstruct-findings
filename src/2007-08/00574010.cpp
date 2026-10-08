// from server: 100% by colin
// roc 2007-08 00574010  unit: RBX::PartInstance  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574010
//
// 00574010  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00574016  8b4060               mov eax, dword ptr [eax + 0x60]
// 00574019  83c004               add eax, 4
// 0057401c  c3                   ret 

struct Inner {
    char pad[0x60];
    int* p;
};

struct PartInstance {
    char pad[0x1d8];
    Inner* inner;
    int* getValue();
};

int* PartInstance::getValue() {
    return reinterpret_cast<int*>(reinterpret_cast<char*>(inner->p) + 4);
}
