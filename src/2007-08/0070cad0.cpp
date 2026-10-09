// from server: 79% by colin
// roc 2007-08 0070cad0  unit: CXTColorBase  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070cad0
//
// 0070cad0  56                   push esi
// 0070cad1  8bf1                 mov esi, ecx
// 0070cad3  e86637f2ff           call 0x63023e
// 0070cad8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070cadc  8b06                 mov eax, dword ptr [esi]
// 0070cade  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070cae2  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0070cae8  6a01                 push 1
// 0070caea  51                   push ecx
// 0070caeb  52                   push edx
// 0070caec  8bce                 mov ecx, esi
// 0070caee  ffd0                 call eax
// 0070caf0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0070caf3  8b35f8eb7700         mov esi, dword ptr [0x77ebf8]
// 0070caf9  51                   push ecx
// 0070cafa  ffd6                 call esi
// 0070cafc  50                   push eax
// 0070cafd  e8be36f2ff           call 0x6301c0
// 0070cb02  8b5020               mov edx, dword ptr [eax + 0x20]
// 0070cb05  52                   push edx
// 0070cb06  ffd6                 call esi
// 0070cb08  50                   push eax
// 0070cb09  e8b236f2ff           call 0x6301c0
// 0070cb0e  6a01                 push 1
// 0070cb10  8bc8                 mov ecx, eax
// 0070cb12  e8d1c10200           call 0x738ce8
// 0070cb17  5e                   pop esi
// 0070cb18  c20c00               ret 0xc

struct CXTColorBase {
    void sub_70CAD0(int, int, int);
};

extern "C" void __stdcall sub_63023E();
extern "C" void* __stdcall sub_6301C0(void*);
extern "C" void __stdcall sub_738CE8(void*, int);
extern "C" void* __stdcall GetParent(void*);

void CXTColorBase::sub_70CAD0(int a, int b, int c) {
    sub_63023E();
    void** vtbl = *(void***)this;
    void (__stdcall *fn)(void*, int, int, int) = (void (__stdcall *)(void*, int, int, int))vtbl[0x14c / 4];
    fn(this, b, a, 1);
    void* p = GetParent(*(void**)((char*)this + 0x20));
    void* q = sub_6301C0(p);
    void* r = *(void**)((char*)q + 0x20);
    void* s = GetParent(r);
    void* t = sub_6301C0(s);
    sub_738CE8(t, 1);
}
