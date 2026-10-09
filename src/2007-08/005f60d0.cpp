// from server: 74% by colin
// roc 2007-08 005f60d0  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f60d0
//
// 005f60d0  83ec08               sub esp, 8
// 005f60d3  85c9                 test ecx, ecx
// 005f60d5  7405                 je 0x5f60dc
// 005f60d7  8d4104               lea eax, [ecx + 4]
// 005f60da  eb02                 jmp 0x5f60de
// 005f60dc  33c0                 xor eax, eax
// 005f60de  8a89e8000000         mov cl, byte ptr [ecx + 0xe8]
// 005f60e4  884c2404             mov byte ptr [esp + 4], cl
// 005f60e8  50                   push eax
// 005f60e9  b9d87c8c00           mov ecx, 0x8c7cd8
// 005f60ee  e87da1f7ff           call 0x570270
// 005f60f3  85c0                 test eax, eax
// 005f60f5  7412                 je 0x5f6109
// 005f60f7  8b542404             mov edx, dword ptr [esp + 4]
// 005f60fb  52                   push edx
// 005f60fc  8d4c2407             lea ecx, [esp + 7]
// 005f6100  51                   push ecx
// 005f6101  8d4810               lea ecx, [eax + 0x10]
// 005f6104  e85788fbff           call 0x5ae960
// 005f6109  83c408               add esp, 8
// 005f610c  c20400               ret 4

struct VColor3Value {
    char pad[0xE8];
    unsigned char fieldE8;
    void* findCreator(void*);
    void setValue(unsigned char*, unsigned char*);
};

extern "C" void* __cdecl sub_570270(void*);
extern "C" void __cdecl sub_5AE960(void*, unsigned char*, unsigned char*);

void VColor3Value::setValue(unsigned char* a, unsigned char* b) {
    void* p;
    if (this != 0) {
        p = (char*)this + 4;
    } else {
        p = 0;
    }
    unsigned char c = fieldE8;
    unsigned char local = c;
    void* r = sub_570270(p);
    if (r != 0) {
        sub_5AE960((char*)r + 0x10, &local, a);
    }
}
