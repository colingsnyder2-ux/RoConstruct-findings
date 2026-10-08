// from server: 100% by colin
// roc 2007-08 005f4980  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4980
//
// 005f4980  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005f4983  8b01                 mov eax, dword ptr [ecx]
// 005f4985  8b542404             mov edx, dword ptr [esp + 4]
// 005f4989  8b4004               mov eax, dword ptr [eax + 4]
// 005f498c  52                   push edx
// 005f498d  ffd0                 call eax
// 005f498f  85c0                 test eax, eax
// 005f4991  7406                 je 0x5f4999
// 005f4993  83c004               add eax, 4
// 005f4996  c20400               ret 4
// 005f4999  33c0                 xor eax, eax
// 005f499b  c20400               ret 4

struct RefPropDescriptor {
    void* getset;
    void* getValue(void* object);
};

void* RefPropDescriptor::getValue(void* object)
{
    void* p = *(void**)((char*)this + 0x1c);
    void** vtbl = *(void***)p;
    void* result = ((void* (__thiscall*)(void*, void*))vtbl[1])(p, object);
    if (result)
        return (char*)result + 4;
    return 0;
}
