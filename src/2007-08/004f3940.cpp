// from server: 54% by colin
// roc 2007-08 004f3940  unit: boost::bad_lexical_cast  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f3940
//
// 004f3940  83ec14               sub esp, 0x14
// 004f3943  56                   push esi
// 004f3944  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004f3948  56                   push esi
// 004f3949  8d4c2408             lea ecx, [esp + 8]
// 004f394d  ff1518e77700         call dword ptr [0x77e718]
// 004f3953  8b460c               mov eax, dword ptr [esi + 0xc]
// 004f3956  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004f3959  68b8498500           push 0x8549b8
// 004f395e  8d542408             lea edx, [esp + 8]
// 004f3962  52                   push edx
// 004f3963  c744240c84f57900     mov dword ptr [esp + 0xc], 0x79f584
// 004f396b  89442418             mov dword ptr [esp + 0x18], eax
// 004f396f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004f3973  e826d21300           call 0x630b9e
// 004f3978  5e                   pop esi

struct bad_cast {
    bad_cast(const bad_cast&);
};

struct S {
    void f(const char*);
};

extern "C" void* __stdcall sub_77e718();
extern "C" void __cdecl sub_630b9e(void*, const char*);

void S::f(const char* s)
{
    char buf[8];
    sub_77e718();
    int a = *(int*)(s + 0xc);
    int b = *(int*)(s + 0x10);
    sub_630b9e(buf, (const char*)0x8549b8);
}
