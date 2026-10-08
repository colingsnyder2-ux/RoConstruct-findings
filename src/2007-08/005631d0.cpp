// from server: 73% by colin
// roc 2007-08 005631d0  unit: RBX::CameraVerb  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005631d0
//
// 005631d0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005631d3  56                   push esi
// 005631d4  6a0b                 push 0xb
// 005631d6  50                   push eax
// 005631d7  e834e9ffff           call 0x561b10
// 005631dc  83c404               add esp, 4
// 005631df  8bc8                 mov ecx, eax
// 005631e1  e82a960200           call 0x58c810
// 005631e6  8b742408             mov esi, dword ptr [esp + 8]
// 005631ea  6aff                 push -1
// 005631ec  8bce                 mov ecx, esi
// 005631ee  e8bdd6eaff           call 0x4108b0
// 005631f3  8b16                 mov edx, dword ptr [esi]
// 005631f5  8b4204               mov eax, dword ptr [edx + 4]
// 005631f8  6a01                 push 1
// 005631fa  8bce                 mov ecx, esi
// 005631fc  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 00563203  ffd0                 call eax
// 00563205  5e                   pop esi
// 00563206  c20400               ret 4

struct VerbContainer;

struct Verb {
    char pad0[0x8];
    VerbContainer* container;
    virtual ~Verb();
    virtual bool isEnabled() const;
    virtual bool isChecked() const;
    virtual bool isSelected() const;
    virtual void getText();
    virtual void doIt(void* dataState);
};

struct CameraVerb : Verb {
    void doIt(void* dataState);
};

extern "C" void* __stdcall sub_00561B10(void* container, int id);
extern "C" void __stdcall sub_0058C810(void* p);
extern "C" void __stdcall sub_004108B0(void* p, int val);

void CameraVerb::doIt(void* dataState)
{
    void* p = sub_00561B10(container, 0xb);
    sub_0058C810(p);
    sub_004108B0(dataState, -1);
    void** vtbl = *(void***)dataState;
    void (*fn)(void*) = (void (*)(void*))vtbl[1];
    *(int*)((char*)dataState + 4) = -1;
    fn(dataState);
}
