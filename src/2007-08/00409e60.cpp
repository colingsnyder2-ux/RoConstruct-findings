// from server: 54% by colin
// roc 2007-08 00409e60  unit: VCApp::?$CComContainedObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409e60
//
// 00409e60  8b442404             mov eax, dword ptr [esp + 4]
// 00409e64  8b4028               mov eax, dword ptr [eax + 0x28]
// 00409e67  8b08                 mov ecx, dword ptr [eax]
// 00409e69  89442404             mov dword ptr [esp + 4], eax
// 00409e6d  8b01                 mov eax, dword ptr [ecx]
// 00409e6f  ffe0                 jmp eax

struct Inner {
    void* vtbl;
};

struct Outer {
    char pad[0x28];
    Inner* inner;
};

struct Target {
    void* method(Outer* obj);
};

void* Target::method(Outer* obj)
{
    Inner* p = obj->inner;
    void** vt = (void**)p->vtbl;
    void* fn = vt[0];
    void* (*f)(Inner*) = (void* (*)(Inner*))fn;
    return f(p);
}
