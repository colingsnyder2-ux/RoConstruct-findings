// from server: 52% by colin
// roc 2007-08 0040d0f0  unit: CGdiObject  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d0f0
//
// 0040d0f0  83ec0c               sub esp, 0xc
// 0040d0f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040d0f7  50                   push eax
// 0040d0f8  8d4c2404             lea ecx, [esp + 4]
// 0040d0fc  ff1500e77700         call dword ptr [0x77e700]
// 0040d102  6890058400           push 0x840590
// 0040d107  8d4c2404             lea ecx, [esp + 4]
// 0040d10b  51                   push ecx
// 0040d10c  c7442408a8647800     mov dword ptr [esp + 8], 0x7864a8
// 0040d114  e8853a2200           call 0x630b9e

struct CGdiObject {
    void* m_hObject;
    CGdiObject(const CGdiObject& other);
};

extern "C" void __stdcall sub_77E700(const void*);
extern "C" void __stdcall sub_630B9E(void*, const char*);

void* g_7864A8 = (void*)0x7864A8;
const char g_840590[] = "boost::bad_weak_ptr";

CGdiObject::CGdiObject(const CGdiObject& other)
{
    char buf[12];
    sub_77E700(&other);
    *(void**)&buf[0] = (void*)0x7864A8;
    sub_630B9E(buf, g_840590);
}
