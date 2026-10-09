// from server: 85% by colin
// roc 2007-08 006278a0  unit: RBX::CollisionStage  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006278a0
//
// 006278a0  56                   push esi
// 006278a1  57                   push edi
// 006278a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006278a6  8b07                 mov eax, dword ptr [edi]
// 006278a8  8b500c               mov edx, dword ptr [eax + 0xc]
// 006278ab  8bf1                 mov esi, ecx
// 006278ad  8bcf                 mov ecx, edi
// 006278af  ffd2                 call edx
// 006278b1  83f801               cmp eax, 1
// 006278b4  57                   push edi
// 006278b5  8bce                 mov ecx, esi
// 006278b7  7516                 jne 0x6278cf
// 006278b9  834610ff             add dword ptr [esi + 0x10], -1
// 006278bd  e8eefdffff           call 0x6276b0
// 006278c2  56                   push esi
// 006278c3  8bcf                 mov ecx, edi
// 006278c5  e87618feff           call 0x609140
// 006278ca  5f                   pop edi
// 006278cb  5e                   pop esi
// 006278cc  c20400               ret 4
// 006278cf  e81cffffff           call 0x6277f0
// 006278d4  56                   push esi
// 006278d5  8bcf                 mov ecx, edi
// 006278d7  e86418feff           call 0x609140
// 006278dc  5f                   pop edi
// 006278dd  5e                   pop esi
// 006278de  c20400               ret 4

struct CollisionStage {
    char pad[0x10];
    int refCount;
    void removeContact(void*);
    void addContact(void*);
    void onContactRemoved(void*);
};

extern "C" void __stdcall sub_609140(void*, void*);

void CollisionStage::removeContact(void* contact)
{
    int* vtbl = *(int**)contact;
    int result = ((int (__thiscall*)(void*))vtbl[3])(contact);
    if (result == 1) {
        refCount--;
        addContact(contact);
        sub_609140(contact, this);
    } else {
        onContactRemoved(contact);
        sub_609140(contact, this);
    }
}
