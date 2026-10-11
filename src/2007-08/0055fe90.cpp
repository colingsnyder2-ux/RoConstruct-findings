// from server: 70% by colin
// roc 2007-08 0055fe90  unit: seg_00550000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055fe90
//
// 0055fe90  8b442404             mov eax, dword ptr [esp + 4]
// 0055fe94  56                   push esi
// 0055fe95  50                   push eax
// 0055fe96  83ec1c               sub esp, 0x1c
// 0055fe99  8bf1                 mov esi, ecx
// 0055fe9b  8bcc                 mov ecx, esp
// 0055fe9d  89642428             mov dword ptr [esp + 0x28], esp
// 0055fea1  681c2f7900           push 0x792f1c
// 0055fea6  ff1598e67700         call dword ptr [0x77e698]
// 0055feac  8bce                 mov ecx, esi
// 0055feae  e88dfdffff           call 0x55fc40
// 0055feb3  c70660947a00         mov dword ptr [esi], 0x7a9460
// 0055feb9  8bc6                 mov eax, esi
// 0055febb  5e                   pop esi
// 0055febc  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ??0?$FilteredSelection@VC@@@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp

struct FilteredSelection {
    void construct(char *name);
    FilteredSelection(char *name);
};

extern "C" void __stdcall basic_string_ctor(void *self, const char *str);

void FilteredSelection::construct(char *name) {
    char buf[0x1c];
    basic_string_ctor(buf, "FilteredSelection");
    *(void **)this = (void *)0x7a9460;
}

FilteredSelection::FilteredSelection(char *name) {
    construct(name);
}
