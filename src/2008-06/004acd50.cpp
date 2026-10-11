// from server: 65% by colin
// roc 2008-06 004acd50  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004acd50
//
// 004acd50  83ec0c               sub esp, 0xc
// 004acd53  56                   push esi
// 004acd54  6a00                 push 0
// 004acd56  68d8fe9200           push 0x92fed8
// 004acd5b  8bf1                 mov esi, ecx
// 004acd5d  8b06                 mov eax, dword ptr [esi]
// 004acd5f  68b4959200           push 0x9295b4
// 004acd64  6a00                 push 0
// 004acd66  50                   push eax
// 004acd67  e85a4a1f00           call 0x6a17c6
// 004acd6c  83c414               add esp, 0x14
// 004acd6f  85c0                 test eax, eax
// 004acd71  751e                 jne 0x4acd91
// 004acd73  6834ba8000           push 0x80ba34
// 004acd78  8d4c2408             lea ecx, [esp + 8]
// 004acd7c  ff1564288000         call dword ptr [0x802864]
// 004acd82  682c368d00           push 0x8d362c
// 004acd87  8d442408             lea eax, [esp + 8]
// 004acd8b  50                   push eax
// 004acd8c  e8fb471f00           call 0x6a158c
// 004acd91  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004acd95  8b4018               mov eax, dword ptr [eax + 0x18]
// 004acd98  8b10                 mov edx, dword ptr [eax]
// 004acd9a  8b520c               mov edx, dword ptr [edx + 0xc]
// 004acd9d  51                   push ecx
// 004acd9e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004acda1  51                   push ecx
// 004acda2  8bc8                 mov ecx, eax
// 004acda4  ffd2                 call edx
// 004acda6  5e                   pop esi
// 004acda7  83c40c               add esp, 0xc
// 004acdaa  c20400               ret 4

struct ChangePropertyItem {
    int f(int);
};

extern "C" int __cdecl sub_6A17C6(int, int, int, int, int);
extern "C" int __cdecl sub_6A158C(int, int);
extern "C" void __stdcall sub_802864(int);

struct bad_cast {
    bad_cast(const char*);
};

int ChangePropertyItem::f(int a)
{
    int v = sub_6A17C6(*(int*)this, 0, 0x9295b4, 0x92fed8, 0);
    if (v == 0) {
        char buf[8];
        sub_802864(0x80ba34);
        sub_6A158C(0x8d362c, (int)buf);
    }
    int* p = (int*)v;
    int* q = (int*)p[6];
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))q[3];
    return fn(q, *(int*)((char*)this + 4), a);
}
