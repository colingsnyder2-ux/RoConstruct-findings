// from server: 91% by colin
// roc 2007-08 00559800  unit: RBX::DataModel  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559800
//
// 00559800  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00559804  0fb65114             movzx edx, byte ptr [ecx + 0x14]
// 00559808  8d4104               lea eax, [ecx + 4]
// 0055980b  52                   push edx
// 0055980c  8b500c               mov edx, dword ptr [eax + 0xc]
// 0055980f  52                   push edx
// 00559810  50                   push eax
// 00559811  8b01                 mov eax, dword ptr [ecx]
// 00559813  ffd0                 call eax
// 00559815  83c40c               add esp, 0xc
// 00559818  c3                   ret 

struct DataModel {
    void* vtable;
    char pad[0x10];
    unsigned char flag;
    void method();
};

void DataModel::method() {
    void* p = (char*)this + 4;
    unsigned char f = *(unsigned char*)((char*)this + 0x14);
    void* q = *(void**)((char*)p + 0xc);
    void (*fn)(void*, void*, unsigned char) = *(void (**)(void*, void*, unsigned char))this;
    fn(p, q, f);
}
