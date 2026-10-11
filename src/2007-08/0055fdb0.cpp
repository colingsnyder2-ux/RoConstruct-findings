// from server: 70% by colin
// roc 2007-08 0055fdb0  unit: seg_00550000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055fdb0
//
// 0055fdb0  8b442404             mov eax, dword ptr [esp + 4]
// 0055fdb4  56                   push esi
// 0055fdb5  50                   push eax
// 0055fdb6  83ec1c               sub esp, 0x1c
// 0055fdb9  8bf1                 mov esi, ecx
// 0055fdbb  8bcc                 mov ecx, esp
// 0055fdbd  89642428             mov dword ptr [esp + 0x28], esp
// 0055fdc1  6820947a00           push 0x7a9420
// 0055fdc6  ff1598e67700         call dword ptr [0x77e698]
// 0055fdcc  8bce                 mov ecx, esi
// 0055fdce  e86dfeffff           call 0x55fc40
// 0055fdd3  c7060c947a00         mov dword ptr [esi], 0x7a940c
// 0055fdd9  8bc6                 mov eax, esi
// 0055fddb  5e                   pop esi
// 0055fddc  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ??0FilteredSelection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp

struct FilteredSelection {
    void* vftable;
    void construct(const char* name);
    FilteredSelection(const char* name);
};

extern "C" void* __stdcall basic_string_ctor(void* self, const char* s);
extern "C" void __cdecl construct_helper(FilteredSelection* self, const char* name);

FilteredSelection::FilteredSelection(const char* name) {
    basic_string_ctor(this, "Duplicate");
    construct_helper(this, name);
    this->vftable = (void*)0x7a940c;
}
