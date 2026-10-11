// from server: 53% by atomic.potato
// roc 2008-06 00657f90  unit: RBX::ArrowButton  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00657f90
//
// 00657f90  6aff                 push -1
// 00657f92  6888bd7d00           push 0x7dbd88
// 00657f97  64a100000000         mov eax, dword ptr fs:[0]
// 00657f9d  50                   push eax
// 00657f9e  64892500000000       mov dword ptr fs:[0], esp
// 00657fa5  51                   push ecx
// 00657fa6  56                   push esi
// 00657fa7  8b442418             mov eax, dword ptr [esp + 0x18]
// 00657fab  668b4c242c           mov cx, word ptr [esp + 0x2c]
// 00657fb0  50                   push eax
// 00657fb1  83ec08               sub esp, 8
// 00657fb4  8bc4                 mov eax, esp
// 00657fb6  668908               mov word ptr [eax], cx
// 00657fb9  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00657fbd  895004               mov dword ptr [eax + 4], edx
// 00657fc0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00657fc4  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00657fcc  89642410             mov dword ptr [esp + 0x10], esp
// 00657fd0  ff15a4258000         call dword ptr [0x8025a4]
// 00657fd6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00657fda  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00657fde  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00657fe2  8b742424             mov esi, dword ptr [esp + 0x24]
// 00657fe6  50                   push eax
// 00657fe7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00657feb  51                   push ecx
// 00657fec  52                   push edx
// 00657fed  50                   push eax
// 00657fee  56                   push esi
// 00657fef  e84cfeffff           call 0x657e40
// 00657ff4  83c420               add esp, 0x20
// 00657ff7  8d4c2430             lea ecx, [esp + 0x30]
// 00657ffb  ff1564258000         call dword ptr [0x802564]
// 00658001  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00658005  8bc6                 mov eax, esi
// 00658007  64890d00000000       mov dword ptr fs:[0], ecx
// 0065800e  5e                   pop esi
// 0065800f  83c410               add esp, 0x10
// 00658012  c3                   ret 

struct Locale {
    void Incref();
    ~Locale();
};

struct Facet {
    void Incref();
};

extern "C" {
    void __stdcall sub_8025A4();
    void __stdcall sub_802564();
}

void sub_657E40(int, int, int, int, int);

struct ArrowButton {
    int __cdecl f(int, short, int, int, int, int);
};

int ArrowButton::f(int a1, short a2, int a3, int a4, int a5, int a6)
{
    Locale loc;
    loc.Incref();
    sub_657E40(a1, a3, a4, a5, a6);
    sub_802564();
    return a1;
}
