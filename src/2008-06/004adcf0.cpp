// from server: 63% by colin
// roc 2008-06 004adcf0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004adcf0
//
// 004adcf0  83ec0c               sub esp, 0xc
// 004adcf3  56                   push esi
// 004adcf4  6a00                 push 0
// 004adcf6  6884ad9300           push 0x93ad84
// 004adcfb  8bf1                 mov esi, ecx
// 004adcfd  8b06                 mov eax, dword ptr [esi]
// 004adcff  68b4959200           push 0x9295b4
// 004add04  6a00                 push 0
// 004add06  50                   push eax
// 004add07  e8ba3a1f00           call 0x6a17c6
// 004add0c  83c414               add esp, 0x14
// 004add0f  85c0                 test eax, eax
// 004add11  751e                 jne 0x4add31
// 004add13  6834ba8000           push 0x80ba34
// 004add18  8d4c2408             lea ecx, [esp + 8]
// 004add1c  ff1564288000         call dword ptr [0x802864]
// 004add22  682c368d00           push 0x8d362c
// 004add27  8d442408             lea eax, [esp + 8]
// 004add2b  50                   push eax
// 004add2c  e85b381f00           call 0x6a158c
// 004add31  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004add35  8b4018               mov eax, dword ptr [eax + 0x18]
// 004add38  8b10                 mov edx, dword ptr [eax]
// 004add3a  8b520c               mov edx, dword ptr [edx + 0xc]
// 004add3d  51                   push ecx
// 004add3e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004add41  51                   push ecx
// 004add42  8bc8                 mov ecx, eax
// 004add44  ffd2                 call edx
// 004add46  5e                   pop esi
// 004add47  83c40c               add esp, 0xc
// 004add4a  c20400               ret 4

struct ChangePropertyItem {
    void* vfptr;
    void* field4;
    void ChangePropertyItem_ctor(void*);
};

extern "C" int __cdecl sub_6A17C6(int, int, int, int, int);
extern "C" void __cdecl sub_6A158C(void*, void*);
extern "C" void* __cdecl sub_802864(void*);
extern "C" void __cdecl sub_80BA34();
extern "C" void __cdecl sub_8D362C();

void ChangePropertyItem::ChangePropertyItem_ctor(void* arg)
{
    int result;
    result = sub_6A17C6(*(int*)this, 0, 0x9295B4, 0x93AD84, 0);
    if (result == 0) {
        sub_802864(&result);
        sub_6A158C(&result, (void*)0x8D362C);
    }
    void* p = *(void**)(result + 0x18);
    void* vt = *(void**)p;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vt + 0xC);
    fn(p, *(void**)((char*)this + 4), arg);
}
