// from server: 70% by colin
// roc 2007-08 0055fec0  unit: seg_00550000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055fec0
//
// 0055fec0  8b442404             mov eax, dword ptr [esp + 4]
// 0055fec4  56                   push esi
// 0055fec5  50                   push eax
// 0055fec6  83ec1c               sub esp, 0x1c
// 0055fec9  8bf1                 mov esi, ecx
// 0055fecb  8bcc                 mov ecx, esp
// 0055fecd  89642428             mov dword ptr [esp + 0x28], esp
// 0055fed1  680c2f7900           push 0x792f0c
// 0055fed6  ff1598e67700         call dword ptr [0x77e698]
// 0055fedc  8bce                 mov ecx, esi
// 0055fede  e85dfdffff           call 0x55fc40
// 0055fee3  c70678947a00         mov dword ptr [esi], 0x7a9478
// 0055fee9  8bc6                 mov eax, esi
// 0055feeb  5e                   pop esi
// 0055feec  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ??0FilteredSelection@RBX@@QAE@ABV?$shared_ptr@VSelection@RBX@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp

struct FilteredSelection {
    void* vftable;
    void construct(void* arg);
};

extern "C" void __stdcall string_ctor(void* self, const char* s);
extern "C" void __stdcall base_ctor(void* self, void* arg);

void FilteredSelection::construct(void* arg)
{
    char buf[0x1c];
    string_ctor(buf, "FollowCamera");
    base_ctor(this, arg);
    this->vftable = (void*)0x7a9478;
}
