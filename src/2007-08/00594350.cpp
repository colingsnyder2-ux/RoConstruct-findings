// from server: 100% by colin
// roc 2007-08 00594350  unit: RBX::VArrowTool::?$TToolVerb  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594350
//
// 00594350  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594353  8b11                 mov edx, dword ptr [ecx]
// 00594355  56                   push esi
// 00594356  8bb088010000         mov esi, dword ptr [eax + 0x188]
// 0059435c  8b4214               mov eax, dword ptr [edx + 0x14]
// 0059435f  ffd0                 call eax
// 00594361  50                   push eax
// 00594362  8bce                 mov ecx, esi
// 00594364  e87780feff           call 0x57c3e0
// 00594369  5e                   pop esi
// 0059436a  c20400               ret 4

struct VerbContainer;

struct Verb {
    void* vtable;
    VerbContainer* container;
    int field_8;
    void* field_c;
};

extern "C" void __stdcall func_0057c3e0(void* p, void* result);

struct TToolVerb {
    void doIt(void* dataState);
};

void TToolVerb::doIt(void* dataState)
{
    Verb* verb = (Verb*)this;
    void* obj = verb->field_c;
    void* p = *(void**)((char*)obj + 0x188);
    void* fn = *(void**)((char*)verb->vtable + 0x14);
    typedef void* (__thiscall *Fn)(void*);
    void* result = ((Fn)fn)(verb);
    ((void (__thiscall*)(void*, void*))func_0057c3e0)(p, result);
}
