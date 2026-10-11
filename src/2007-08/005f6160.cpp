// from server: 62% by colin
// roc 2007-08 005f6160  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f6160
//
// 005f6160  51                   push ecx
// 005f6161  85c9                 test ecx, ecx
// 005f6163  56                   push esi
// 005f6164  7405                 je 0x5f616b
// 005f6166  8d7104               lea esi, [ecx + 4]
// 005f6169  eb02                 jmp 0x5f616d
// 005f616b  33f6                 xor esi, esi
// 005f616d  83ec1c               sub esp, 0x1c
// 005f6170  8d81e8000000         lea eax, [ecx + 0xe8]
// 005f6176  8bcc                 mov ecx, esp
// 005f6178  89642420             mov dword ptr [esp + 0x20], esp
// 005f617c  50                   push eax
// 005f617d  ff159ce67700         call dword ptr [0x77e69c]
// 005f6183  56                   push esi
// 005f6184  b9bc7e8c00           mov ecx, 0x8c7ebc
// 005f6189  e8f26ce3ff           call 0x42ce80
// 005f618e  5e                   pop esi
// 005f618f  59                   pop ecx
// 005f6190  c20400               ret 4

struct VColor3 {
    char pad[0xe8];
    void* field_e8;
    void construct(void* arg);
};

extern "C" void* __stdcall sub_77e69c(void*);
extern "C" void __cdecl sub_42ce80(void*, void*);

void VColor3::construct(void* arg) {
    void* p;
    if (this) {
        p = (char*)this + 4;
    } else {
        p = 0;
    }
    void* tmp;
    sub_77e69c(&tmp);
    sub_42ce80((void*)0x8c7ebc, p);
}
