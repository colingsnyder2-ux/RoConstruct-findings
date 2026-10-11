// from server: 53% by colin
// roc 2008-06 005ef3d0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef3d0
//
// 005ef3d0  56                   push esi
// 005ef3d1  8bf1                 mov esi, ecx
// 005ef3d3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef3d7  e814ffffff           call 0x5ef2f0
// 005ef3dc  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005ef3df  8d54240c             lea edx, [esp + 0xc]
// 005ef3e3  8944240c             mov dword ptr [esp + 0xc], eax
// 005ef3e7  8b01                 mov eax, dword ptr [ecx]
// 005ef3e9  8b400c               mov eax, dword ptr [eax + 0xc]
// 005ef3ec  52                   push edx
// 005ef3ed  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005ef3f1  52                   push edx
// 005ef3f2  ffd0                 call eax
// 005ef3f4  5e                   pop esi
// 005ef3f5  c20800               ret 8

struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    void* field1c;
    void getVariant(const void* instance, void* value) const;
};

void SurfaceEnumPropDescriptor::getVariant(const void* instance, void* value) const {
    int result = ((int (__thiscall*)(const void*))0x5ef2f0)(instance);
    void* p = field1c;
    *(int*)value = result;
    void* vtable = *(void**)p;
    void (*fn)(void*, int) = *(void (**)(void*, int))((char*)vtable + 0xc);
    fn(p, *(int*)value);
}
