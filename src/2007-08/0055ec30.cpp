// from server: 65% by colin
// roc 2007-08 0055ec30  unit: RBX::TiltSelectionVerb  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055ec30
//
// 0055ec30  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055ec33  8b9128020000         mov edx, dword ptr [ecx + 0x228]
// 0055ec39  83ec30               sub esp, 0x30
// 0055ec3c  81c128020000         add ecx, 0x228
// 0055ec42  56                   push esi
// 0055ec43  8d442404             lea eax, [esp + 4]
// 0055ec47  50                   push eax
// 0055ec48  8b4208               mov eax, dword ptr [edx + 8]
// 0055ec4b  ffd0                 call eax
// 0055ec4d  8bc8                 mov ecx, eax
// 0055ec4f  e88c7efaff           call 0x506ae0
// 0055ec54  50                   push eax
// 0055ec55  e856cf0400           call 0x5abbb0
// 0055ec5a  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0055ec5e  50                   push eax
// 0055ec5f  56                   push esi
// 0055ec60  e87bce0400           call 0x5abae0
// 0055ec65  83c40c               add esp, 0xc
// 0055ec68  8bc6                 mov eax, esi
// 0055ec6a  5e                   pop esi
// 0055ec6b  83c430               add esp, 0x30
// 0055ec6e  c20400               ret 4

struct Inner {
    char pad[0x228];
    void* vtbl;
};

struct TiltSelectionVerb {
    char pad[0xc];
    Inner* inner;
    void* doIt(void* arg);
};

extern "C" void* __cdecl sub_506AE0(void*);
extern "C" void* __cdecl sub_5ABBB0(void*);
extern "C" void __cdecl sub_5ABAE0(void*, void*);

void* TiltSelectionVerb::doIt(void* arg) {
    Inner* p = inner;
    void* vt = p->vtbl;
    void* out;
    void* (*fn)(void*, void*) = *(void* (**)(void*, void*))((char*)vt + 8);
    fn((char*)p + 0x228, &out);
    void* r = sub_506AE0(out);
    void* r2 = sub_5ABBB0(r);
    sub_5ABAE0(arg, r2);
    return arg;
}
