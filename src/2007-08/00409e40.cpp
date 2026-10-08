// from server: 83% by colin
// roc 2007-08 00409e40  unit: VCApp::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409e40
//
// 00409e40  8b442404             mov eax, dword ptr [esp + 4]
// 00409e44  8b4028               mov eax, dword ptr [eax + 0x28]
// 00409e47  8b08                 mov ecx, dword ptr [eax]
// 00409e49  89442404             mov dword ptr [esp + 4], eax
// 00409e4d  8b5108               mov edx, dword ptr [ecx + 8]
// 00409e50  ffe2                 jmp edx

struct Inner {
    void* vtbl;
};

struct Outer {
    char pad[0x28];
    Inner* inner;
};

void func_00409e40(Outer* obj)
{
    Inner* p = obj->inner;
    void** vt = (void**)p->vtbl;
    void (*fn)(Inner*) = (void (*)(Inner*))vt[2];
    fn(p);
}
