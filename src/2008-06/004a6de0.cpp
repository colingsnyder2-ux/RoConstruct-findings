// from server: 100% by king_originala
// roc 2008-06 004a6de0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6de0
//
// 004a6de0  8b442408             mov eax, dword ptr [esp + 8]
// 004a6de4  85c0                 test eax, eax
// 004a6de6  7405                 je 0x4a6ded
// 004a6de8  8d5014               lea edx, [eax + 0x14]
// 004a6deb  eb02                 jmp 0x4a6def
// 004a6ded  33d2                 xor edx, edx
// 004a6def  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a6df3  8b4104               mov eax, dword ptr [ecx + 4]
// 004a6df6  85c0                 test eax, eax
// 004a6df8  7411                 je 0x4a6e0b
// 004a6dfa  8b09                 mov ecx, dword ptr [ecx]
// 004a6dfc  56                   push esi
// 004a6dfd  8b31                 mov esi, dword ptr [ecx]
// 004a6dff  83c014               add eax, 0x14
// 004a6e02  52                   push edx
// 004a6e03  50                   push eax
// 004a6e04  8b4634               mov eax, dword ptr [esi + 0x34]
// 004a6e07  ffd0                 call eax
// 004a6e09  5e                   pop esi
// 004a6e0a  c3                   ret 
// 004a6e0b  8b09                 mov ecx, dword ptr [ecx]
// 004a6e0d  56                   push esi
// 004a6e0e  8b31                 mov esi, dword ptr [ecx]
// 004a6e10  33c0                 xor eax, eax
// 004a6e12  52                   push edx
// 004a6e13  50                   push eax
// 004a6e14  8b4634               mov eax, dword ptr [esi + 0x34]
// 004a6e17  ffd0                 call eax
// 004a6e19  5e                   pop esi
// 004a6e1a  c3                   ret 

struct Interface {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void apply(void*, void*);
};

struct Context {
    Interface* object;
    char* value;
};

void __cdecl invoke(Context* context, char* value)
{
    void* adjusted = value ? value + 20 : 0;
    context->object->apply(context->value ? context->value + 20 : 0, adjusted);
}
