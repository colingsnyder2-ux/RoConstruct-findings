// from server: 60% by colin
// roc 2007-08 00697e50  unit: CXTPPropertyGridItem  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697e50
//
// 00697e50  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 00697e56  56                   push esi
// 00697e57  e8d42c0000           call 0x69ab30
// 00697e5c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00697e60  8b30                 mov esi, dword ptr [eax]
// 00697e62  51                   push ecx
// 00697e63  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00697e67  83ec10               sub esp, 0x10
// 00697e6a  8bd4                 mov edx, esp
// 00697e6c  890a                 mov dword ptr [edx], ecx
// 00697e6e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00697e72  894a04               mov dword ptr [edx + 4], ecx
// 00697e75  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00697e79  894a08               mov dword ptr [edx + 8], ecx
// 00697e7c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00697e80  894a0c               mov dword ptr [edx + 0xc], ecx
// 00697e83  8b542420             mov edx, dword ptr [esp + 0x20]
// 00697e87  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00697e8b  52                   push edx
// 00697e8c  8b5620               mov edx, dword ptr [esi + 0x20]
// 00697e8f  51                   push ecx
// 00697e90  8bc8                 mov ecx, eax
// 00697e92  ffd2                 call edx
// 00697e94  5e                   pop esi
// 00697e95  c21c00               ret 0x1c

struct CXTPPropertyGridItem;

struct Inner {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8(int, int, int, int, int, int);
};

struct CXTPPropertyGridItem {
    char pad[0xb4];
    Inner* inner;
    void func(int, int, int, int, int, int, int);
};

extern "C" Inner* __stdcall sub_69ab30(int);

void CXTPPropertyGridItem::func(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    Inner* p = sub_69ab30(*(int*)((char*)this + 0xb4));
    p->f8(a1, a2, a3, a4, a5, a6);
}
