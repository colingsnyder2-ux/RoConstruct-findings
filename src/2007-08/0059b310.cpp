// from server: 72% by colin
// roc 2007-08 0059b310  unit: RBX::VInstance::?$RefPropDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b310
//
// 0059b310  8b442408             mov eax, dword ptr [esp + 8]
// 0059b314  85c0                 test eax, eax
// 0059b316  56                   push esi
// 0059b317  8bf1                 mov esi, ecx
// 0059b319  740b                 je 0x59b326
// 0059b31b  50                   push eax
// 0059b31c  e80f57faff           call 0x540a30
// 0059b321  83c404               add esp, 4
// 0059b324  eb02                 jmp 0x59b328
// 0059b326  33c0                 xor eax, eax
// 0059b328  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059b32b  8d54240c             lea edx, [esp + 0xc]
// 0059b32f  8944240c             mov dword ptr [esp + 0xc], eax
// 0059b333  8b01                 mov eax, dword ptr [ecx]
// 0059b335  8b4008               mov eax, dword ptr [eax + 8]
// 0059b338  52                   push edx
// 0059b339  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059b33d  52                   push edx
// 0059b33e  ffd0                 call eax
// 0059b340  5e                   pop esi
// 0059b341  c20800               ret 8

struct RefPropDescriptor {
    void construct(void*, void*);
};

extern "C" void* __cdecl sub_540A30(void*);

void RefPropDescriptor::construct(void* a, void* b)
{
    void* v;
    if (b) {
        v = sub_540A30(b);
    } else {
        v = 0;
    }
    void** p = (void**)((char*)this + 0x1c);
    void* q = *p;
    void* tmp = v;
    void* fn = *(void**)(*(char**)q + 8);
    typedef void (__stdcall *Fn)(void*, void*);
    ((Fn)fn)(a, tmp);
}
