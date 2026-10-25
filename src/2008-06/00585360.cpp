// from server: 100% by tester
// roc 2008-06 00585360  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585360
//
// 00585360  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00585363  8b01                 mov eax, dword ptr [ecx]
// 00585365  8b542404             mov edx, dword ptr [esp + 4]
// 00585369  8b4008               mov eax, dword ptr [eax + 8]
// 0058536c  52                   push edx
// 0058536d  ffd0                 call eax
// 0058536f  85c0                 test eax, eax
// 00585371  7406                 je 0x585379
// 00585373  83c014               add eax, 0x14
// 00585376  c20400               ret 4
// 00585379  33c0                 xor eax, eax
// 0058537b  c20400               ret 4

struct RefPropDescriptor {
    void* getset;
    void* getValue(void* object);
};

void* RefPropDescriptor::getValue(void* object) {
    void* gs = *(void**)((char*)this + 0x1c);
    void** vtbl = *(void***)gs;
    void* fn = vtbl[2];
    void* result = ((void* (__thiscall*)(void*, void*))fn)(gs, object);
    if (result) {
        return (char*)result + 0x14;
    }
    return 0;
}
