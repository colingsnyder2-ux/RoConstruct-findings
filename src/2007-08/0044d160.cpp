// from server: 66% by colin
// roc 2007-08 0044d160  unit: CRobloxDoc  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044d160
//
// 0044d160  51                   push ecx
// 0044d161  8b01                 mov eax, dword ptr [ecx]
// 0044d163  85c0                 test eax, eax
// 0044d165  7417                 je 0x44d17e
// 0044d167  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044d16a  51                   push ecx
// 0044d16b  50                   push eax
// 0044d16c  8d4c240b             lea ecx, [esp + 0xb]
// 0044d170  ff1514e67700         call dword ptr [0x77e614]
// 0044d176  8bc8                 mov ecx, eax
// 0044d178  ff1510e67700         call dword ptr [0x77e610]
// 0044d17e  59                   pop ecx
// 0044d17f  c3                   ret 

struct CRobloxDoc {
    void* field0;
    void* field4;
    void func();
};

extern "C" void* __stdcall alloc_ctor(void*);
extern "C" void __stdcall dealloc(void*, void*, int);

void CRobloxDoc::func()
{
    if (field0 != 0) {
        void* p = field0;
        void* q = field4;
        void* r = alloc_ctor(&p);
        dealloc(r, (void*)q, 0);
    }
}
