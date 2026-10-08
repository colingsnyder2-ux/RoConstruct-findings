// from server: 43% by colin
// roc 2007-08 004a8d70  unit: RBX::Network::VClient::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8d70
//
// 004a8d70  83ec30               sub esp, 0x30
// 004a8d73  8d0c24               lea ecx, [esp]
// 004a8d76  e8d5c2fcff           call 0x475050
// 004a8d7b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004a8d7f  8d0424               lea eax, [esp]
// 004a8d82  50                   push eax
// 004a8d83  51                   push ecx
// 004a8d84  e8e77cffff           call 0x4a0a70
// 004a8d89  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004a8d8d  83c408               add esp, 8
// 004a8d90  8d1424               lea edx, [esp]
// 004a8d93  52                   push edx
// 004a8d94  e887f4ffff           call 0x4a8220
// 004a8d99  83c430               add esp, 0x30
// 004a8d9c  c3                   ret 

struct S {
    void f();
};

extern "C" void __cdecl sub_475050(void*);
extern "C" void __cdecl sub_4a0a70(void*, void*);
extern "C" void __cdecl sub_4a8220(void*, void*);

void S::f()
{
    char buf[0x30];
    sub_475050(buf);
    sub_4a0a70(*(void**)((char*)&buf + 0x38), buf);
    sub_4a8220(buf, *(void**)((char*)&buf + 0x3c));
}
