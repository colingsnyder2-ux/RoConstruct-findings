// from server: 63% by colin
// roc 2007-08 00560ae0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00560ae0
//
// 00560ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00560ae4  56                   push esi
// 00560ae5  50                   push eax
// 00560ae6  83ec1c               sub esp, 0x1c
// 00560ae9  8bf1                 mov esi, ecx
// 00560aeb  8bcc                 mov ecx, esp
// 00560aed  89642428             mov dword ptr [esp + 0x28], esp
// 00560af1  6858957a00           push 0x7a9558
// 00560af6  ff1598e67700         call dword ptr [0x77e698]
// 00560afc  8bce                 mov ecx, esi
// 00560afe  e8fdfaffff           call 0x560600
// 00560b03  c70644957a00         mov dword ptr [esi], 0x7a9544
// 00560b09  8bc6                 mov eax, esi
// 00560b0b  5e                   pop esi
// 00560b0c  c20400               ret 4

struct FilteredSelection {
    void construct(char*);
    FilteredSelection* init(char*);
};

extern "C" void __stdcall string_ctor(void*, const char*);

FilteredSelection* FilteredSelection::init(char* name)
{
    string_ctor(this, "Controller1");
    construct(name);
    *(void**)this = (void*)0x7a9544;
    return this;
}
