// from server: 70% by colin
// roc 2007-08 0055fe60  unit: seg_00550000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055fe60
//
// 0055fe60  8b442404             mov eax, dword ptr [esp + 4]
// 0055fe64  56                   push esi
// 0055fe65  50                   push eax
// 0055fe66  83ec1c               sub esp, 0x1c
// 0055fe69  8bf1                 mov esi, ecx
// 0055fe6b  8bcc                 mov ecx, esp
// 0055fe6d  89642428             mov dword ptr [esp + 0x28], esp
// 0055fe71  68282f7900           push 0x792f28
// 0055fe76  ff1598e67700         call dword ptr [0x77e698]
// 0055fe7c  8bce                 mov ecx, esi
// 0055fe7e  e8bdfdffff           call 0x55fc40
// 0055fe83  c70648947a00         mov dword ptr [esi], 0x7a9448
// 0055fe89  8bc6                 mov eax, esi
// 0055fe8b  5e                   pop esi
// 0055fe8c  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ??0?$FilteredSelection@VInstance@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp

struct std_string_ctor_helper;

extern "C" void __stdcall std_string_ctor(void* self, const char* s);

struct Instance {
    Instance();
    Instance(const Instance&);
};

struct FilteredSelection : Instance {
    FilteredSelection(const FilteredSelection&);
    FilteredSelection();
};

FilteredSelection::FilteredSelection() {
    std_string_ctor_helper* dummy;
    char buf[28];
    (void)dummy;
    (void)buf;
    std_string_ctor(buf, "FilteredSelection");
    Instance::Instance();
    *(void**)this = (void*)0x7a9448;
}
