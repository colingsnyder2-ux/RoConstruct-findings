// from server: 50% by colin
// roc 2007-08 0040f320  unit: CutVerb  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f320
//
// 0040f320  51                   push ecx
// 0040f321  56                   push esi
// 0040f322  57                   push edi
// 0040f323  83ec1c               sub esp, 0x1c
// 0040f326  8bf1                 mov esi, ecx
// 0040f328  8bcc                 mov ecx, esp
// 0040f32a  89642424             mov dword ptr [esp + 0x24], esp
// 0040f32e  68106d7800           push 0x786d10
// 0040f333  ff1598e67700         call dword ptr [0x77e698]
// 0040f339  8b4e08               mov ecx, dword ptr [esi + 8]
// 0040f33c  e80f581500           call 0x564b50
// 0040f341  8b10                 mov edx, dword ptr [eax]
// 0040f343  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0040f347  8bc8                 mov ecx, eax
// 0040f349  8b4210               mov eax, dword ptr [edx + 0x10]
// 0040f34c  57                   push edi
// 0040f34d  ffd0                 call eax
// 0040f34f  57                   push edi
// 0040f350  8bce                 mov ecx, esi
// 0040f352  e8b94f1500           call 0x564310
// 0040f357  5f                   pop edi
// 0040f358  5e                   pop esi
// 0040f359  59                   pop ecx
// 0040f35a  c20400               ret 4

struct Verb {
    char pad0[8];
    void* container;
};

struct CutVerb : Verb {
    void doIt(void* dataState);
};

extern "C" void* __stdcall sub_77E698(void*, const char*);
extern "C" void* __stdcall sub_564B50(void*);
extern "C" void __stdcall sub_564310(void*, void*);

void CutVerb::doIt(void* dataState)
{
    char buf[0x1c];
    sub_77E698(buf, "Copy");
    void* p = sub_564B50(container);
    void* v = *(void**)p;
    void* fn = *(void**)((char*)v + 0x10);
    ((void (__stdcall*)(void*, void*))fn)(p, dataState);
    sub_564310(this, dataState);
}
