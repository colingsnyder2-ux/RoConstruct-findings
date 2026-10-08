// from server: 44% by colin
// roc 2007-08 00414170  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00414170
//
// 00414170  83ec28               sub esp, 0x28
// 00414173  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00414177  50                   push eax
// 00414178  8d4c2404             lea ecx, [esp + 4]
// 0041417c  e82ff5ffff           call 0x4136b0
// 00414181  686c128400           push 0x84126c
// 00414186  8d4c2404             lea ecx, [esp + 4]
// 0041418a  51                   push ecx
// 0041418b  c74424088c717800     mov dword ptr [esp + 8], 0x78718c
// 00414193  e806ca2100           call 0x630b9e

struct S {
    char pad[0x28];
    void f(const char* s);
};

extern "C" void __cdecl sub_4136B0(void*, const char*);
extern "C" void __cdecl sub_630B9E(void*, const char*);

void S::f(const char* s)
{
    char buf[0x28];
    sub_4136B0(buf, s);
    *(int*)(buf + 4) = 0x78718c;
    sub_630B9E(buf, (const char*)0x84126c);
}
