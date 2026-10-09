// from server: 100% by colin
// roc 2007-08 00556560  unit: RBX::UnifiedWidget  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00556560
//
// 00556560  56                   push esi
// 00556561  8bf1                 mov esi, ecx
// 00556563  8b06                 mov eax, dword ptr [esi]
// 00556565  8b5058               mov edx, dword ptr [eax + 0x58]
// 00556568  ffd2                 call edx
// 0055656a  84c0                 test al, al
// 0055656c  7418                 je 0x556586
// 0055656e  8b06                 mov eax, dword ptr [esi]
// 00556570  8b5074               mov edx, dword ptr [eax + 0x74]
// 00556573  57                   push edi
// 00556574  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00556578  57                   push edi
// 00556579  8bce                 mov ecx, esi
// 0055657b  ffd2                 call edx
// 0055657d  57                   push edi
// 0055657e  8bce                 mov ecx, esi
// 00556580  e85bffffff           call 0x5564e0
// 00556585  5f                   pop edi
// 00556586  5e                   pop esi
// 00556587  c20400               ret 4

struct GuiItem {
    virtual void v000();
    virtual void v004();
    virtual void v008();
    virtual void v00c();
    virtual void v010();
    virtual void v014();
    virtual void v018();
    virtual void v01c();
    virtual void v020();
    virtual void v024();
    virtual void v028();
    virtual void v02c();
    virtual void v030();
    virtual void v034();
    virtual void v038();
    virtual void v03c();
    virtual void v040();
    virtual void v044();
    virtual void v048();
    virtual void v04c();
    virtual void v050();
    virtual void v054();
    virtual bool v058();
    virtual void v05c();
    virtual void v060();
    virtual void v064();
    virtual void v068();
    virtual void v06c();
    virtual void v070();
    virtual void v074(void*);
};

struct UnifiedWidget : GuiItem {
    void func_00556560(void*);
    void func_005564e0(void*);
};

void UnifiedWidget::func_00556560(void* arg)
{
    if (v058()) {
        v074(arg);
        func_005564e0(arg);
    }
}
