// from server: 41% by colin
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

struct VColor3Value
{
    char gap0[4];
    char m_str[0xe4];
};

struct G3D_VColor3_Value_FactoryProduct
{
    char gap0[4];
    VColor3Value m_value;
    void construct(VColor3Value* arg);
};

extern "C" void __stdcall sub_77e69c(void*, void*);
extern "C" void __cdecl sub_42ce80(void*, void*);

void G3D_VColor3_Value_FactoryProduct::construct(VColor3Value* arg)
{
    VColor3Value* p;
    if (this != 0)
        p = &m_value;
    else
        p = 0;

    char buf[0x1c];
    sub_77e69c(buf, &m_value.m_str[0xe4 - 0xe4]);
    sub_42ce80((void*)0x8c7ebc, p);
}
