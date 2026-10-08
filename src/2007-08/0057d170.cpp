// from server: 50% by colin
// roc 2007-08 0057d170  unit: RBX::Workspace  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d170
//
// 0057d170  56                   push esi
// 0057d171  8bf1                 mov esi, ecx
// 0057d173  e858f6ffff           call 0x57c7d0
// 0057d178  f644240801           test byte ptr [esp + 8], 1
// 0057d17d  8b8678030000         mov eax, dword ptr [esi + 0x378]
// 0057d183  c78674030000ac4c7a00 mov dword ptr [esi + 0x374], 0x7a4cac
// 0057d18d  8b4804               mov ecx, dword ptr [eax + 4]
// 0057d190  c7843178030000a44c7a00 mov dword ptr [ecx + esi + 0x378], 0x7a4ca4
// 0057d19b  740a                 je 0x57d1a7
// 0057d19d  56                   push esi
// 0057d19e  ff15c4e67700         call dword ptr [0x77e6c4]
// 0057d1a4  83c404               add esp, 4
// 0057d1a7  8bc6                 mov eax, esi
// 0057d1a9  5e                   pop esi
// 0057d1aa  c20400               ret 4

struct Workspace {
    char pad[0x374];
    void* vtable_374;
    void* field_378;
    void destroy();
};

extern "C" void __stdcall free(void*);

void Workspace::destroy()
{
    this->vtable_374 = (void*)0x7a4cac;
    void* p = this->field_378;
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 0x378) = (void*)0x7a4ca4;
    if (0) {
        free(this);
    }
}
