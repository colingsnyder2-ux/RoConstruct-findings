// from server: 100% by colin
// roc 2007-08 0066ff70  unit: CXTPDockingPaneManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ff70
//
// 0066ff70  56                   push esi
// 0066ff71  8bf1                 mov esi, ecx
// 0066ff73  e828abffff           call 0x66aaa0
// 0066ff78  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0066ff7e  8b01                 mov eax, dword ptr [ecx]
// 0066ff80  8b5068               mov edx, dword ptr [eax + 0x68]
// 0066ff83  ffd2                 call edx
// 0066ff85  8bce                 mov ecx, esi
// 0066ff87  5e                   pop esi
// 0066ff88  e933f7ffff           jmp 0x66f6c0

struct CXTPDockingPaneManager
{
    void func_0066aaa0();
    void func_0066f6c0();
    void func_0066ff70();
    char pad[0xd4];
    struct Inner {
        virtual void vfunc0();
        virtual void vfunc1();
        virtual void vfunc2();
        virtual void vfunc3();
        virtual void vfunc4();
        virtual void vfunc5();
        virtual void vfunc6();
        virtual void vfunc7();
        virtual void vfunc8();
        virtual void vfunc9();
        virtual void vfunc10();
        virtual void vfunc11();
        virtual void vfunc12();
        virtual void vfunc13();
        virtual void vfunc14();
        virtual void vfunc15();
        virtual void vfunc16();
        virtual void vfunc17();
        virtual void vfunc18();
        virtual void vfunc19();
        virtual void vfunc20();
        virtual void vfunc21();
        virtual void vfunc22();
        virtual void vfunc23();
        virtual void vfunc24();
        virtual void vfunc25();
        virtual void vfunc26();
    };
    Inner* field_0xd4;
};

void CXTPDockingPaneManager::func_0066ff70()
{
    func_0066aaa0();
    field_0xd4->vfunc26();
    func_0066f6c0();
}
