// from server: 41% by colin
// roc 2008-06 00565960  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565960
//
// 00565960  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00565963  8b01                 mov eax, dword ptr [ecx]
// 00565965  8b5004               mov edx, dword ptr [eax + 4]
// 00565968  ffe2                 jmp edx

struct RefPropDescriptor {
    char pad0[696];
    void* m_getset;
    void f();
};

void RefPropDescriptor::f() {
    RefPropDescriptor* this_ = this;
    this_->m_getset = *(void**)((char*)this_ + 0x1c);
    void (*getset_func)() = (void (*)())*(void**)((char*)this_->m_getset + 4);
    getset_func();
}
