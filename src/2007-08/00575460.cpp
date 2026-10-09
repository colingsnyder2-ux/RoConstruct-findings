// from server: 72% by colin
// roc 2007-08 00575460  unit: RBX::PartInstance  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00575460
//
// 00575460  51                   push ecx
// 00575461  56                   push esi
// 00575462  8d442404             lea eax, [esp + 4]
// 00575466  50                   push eax
// 00575467  81c128010000         add ecx, 0x128
// 0057546d  e89ef7ffff           call 0x574c10
// 00575472  8b30                 mov esi, dword ptr [eax]
// 00575474  8b442404             mov eax, dword ptr [esp + 4]
// 00575478  85c0                 test eax, eax
// 0057547a  7427                 je 0x5754a3
// 0057547c  83c004               add eax, 4
// 0057547f  50                   push eax
// 00575480  ff15e8d27700         call dword ptr [0x77d2e8]
// 00575486  85c0                 test eax, eax
// 00575488  7519                 jne 0x5754a3
// 0057548a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057548e  e83d29eeff           call 0x457dd0
// 00575493  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00575497  85c9                 test ecx, ecx
// 00575499  7408                 je 0x5754a3
// 0057549b  8b11                 mov edx, dword ptr [ecx]
// 0057549d  8b02                 mov eax, dword ptr [edx]
// 0057549f  6a01                 push 1
// 005754a1  ffd0                 call eax
// 005754a3  85f6                 test esi, esi
// 005754a5  7405                 je 0x5754ac
// 005754a7  8bc6                 mov eax, esi
// 005754a9  5e                   pop esi
// 005754aa  59                   pop ecx
// 005754ab  c3                   ret 
// 005754ac  5e                   pop esi
// 005754ad  83c404               add esp, 4
// 005754b0  e9fbf2ffff           jmp 0x5747b0

struct PartInstance {
    char pad[0x128];
    int field_128;
};

struct RefCounted {
    void* vtable;
    long refCount;
};

extern "C" long __stdcall InterlockedDecrement(long volatile*);
extern "C" void* __stdcall sub_574C10(void*, void*);
extern "C" void __cdecl sub_457DD0(void*);
extern "C" void __cdecl sub_5747B0();

struct PartInstanceHolder {
    PartInstance* get();
};

PartInstance* PartInstanceHolder::get()
{
    void* result;
    sub_574C10((char*)this + 0x128, &result);
    PartInstance* ret = (PartInstance*)result;
    if (result) {
        if (InterlockedDecrement((long*)((char*)result + 4)) == 0) {
            sub_457DD0(result);
            if (result) {
                void** vt = *(void***)result;
                void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                fn(result, 1);
            }
        }
    }
    if (ret) {
        return ret;
    }
    sub_5747B0();
    return 0;
}
