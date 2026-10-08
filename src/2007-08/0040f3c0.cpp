// from server: 42% by colin
// roc 2007-08 0040f3c0  unit: CutVerb  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f3c0
//
// 0040f3c0  8b442404             mov eax, dword ptr [esp + 4]
// 0040f3c4  56                   push esi
// 0040f3c5  50                   push eax
// 0040f3c6  83ec1c               sub esp, 0x1c
// 0040f3c9  8bf1                 mov esi, ecx
// 0040f3cb  8bcc                 mov ecx, esp
// 0040f3cd  89642428             mov dword ptr [esp + 0x28], esp
// 0040f3d1  68106d7800           push 0x786d10
// 0040f3d6  ff1598e67700         call dword ptr [0x77e698]
// 0040f3dc  8bce                 mov ecx, esi
// 0040f3de  e85d081500           call 0x55fc40
// 0040f3e3  c706486d7800         mov dword ptr [esi], 0x786d48
// 0040f3e9  8bc6                 mov eax, esi
// 0040f3eb  5e                   pop esi
// 0040f3ec  c20400               ret 4

struct Verb {
    void* name;
    void* container;
    Verb(void* container, const char* name);
};

struct CutVerb : Verb {
    CutVerb(void* container);
};

extern "C" void* __stdcall sub_77e698(void*, const char*);

void* sub_55fc40(void*);

CutVerb::CutVerb(void* container) : Verb(container, (const char*)0)
{
    char buf[0x1c];
    sub_77e698(buf, (const char*)0x786d10);
    sub_55fc40(this);
    *(void**)this = (void*)0x786d48;
}
