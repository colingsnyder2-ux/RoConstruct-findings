// from server: 70% by colin
// roc 2007-08 0055fd20  unit: seg_00550000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055fd20
//
// 0055fd20  8b442404             mov eax, dword ptr [esp + 4]
// 0055fd24  56                   push esi
// 0055fd25  50                   push eax
// 0055fd26  83ec1c               sub esp, 0x1c
// 0055fd29  8bf1                 mov esi, ecx
// 0055fd2b  8bcc                 mov ecx, esp
// 0055fd2d  89642428             mov dword ptr [esp + 0x28], esp
// 0055fd31  6840197900           push 0x791940
// 0055fd36  ff1598e67700         call dword ptr [0x77e698]
// 0055fd3c  8bce                 mov ecx, esi
// 0055fd3e  e8fdfeffff           call 0x55fc40
// 0055fd43  c706c4937a00         mov dword ptr [esi], 0x7a93c4
// 0055fd49  8bc6                 mov eax, esi
// 0055fd4b  5e                   pop esi
// 0055fd4c  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ??0?$FilteredSelection@VInstance@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp

struct FilteredSelection {
    void* vtable;
    void construct(void* arg);
};

extern "C" void __stdcall basic_string_ctor(void* self, const char* s);
extern "C" void __fastcall base_construct(void* self, void* arg);

void FilteredSelection::construct(void* arg)
{
    char buf[28];
    basic_string_ctor(buf, "FilteredSelection");
    base_construct(this, arg);
    this->vtable = (void*)0x7a93c4;
}
