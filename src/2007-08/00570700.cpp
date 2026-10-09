// from server: 63% by colin
// roc 2007-08 00570700  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570700
//
// 00570700  83ec08               sub esp, 8
// 00570703  56                   push esi
// 00570704  8b7104               mov esi, dword ptr [ecx + 4]
// 00570707  85f6                 test esi, esi
// 00570709  c701bcdc7900         mov dword ptr [ecx], 0x79dcbc
// 0057070f  7435                 je 0x570746
// 00570711  8b4604               mov eax, dword ptr [esi + 4]
// 00570714  8b08                 mov ecx, dword ptr [eax]
// 00570716  50                   push eax
// 00570717  56                   push esi
// 00570718  51                   push ecx
// 00570719  56                   push esi
// 0057071a  8d442414             lea eax, [esp + 0x14]
// 0057071e  50                   push eax
// 0057071f  8bce                 mov ecx, esi
// 00570721  e85acdf3ff           call 0x4ad480
// 00570726  8b4e04               mov ecx, dword ptr [esi + 4]
// 00570729  51                   push ecx
// 0057072a  e833f50b00           call 0x62fc62
// 0057072f  56                   push esi
// 00570730  c7460400000000       mov dword ptr [esi + 4], 0
// 00570737  c7460800000000       mov dword ptr [esi + 8], 0
// 0057073e  e81ff50b00           call 0x62fc62
// 00570743  83c408               add esp, 8
// 00570746  5e                   pop esi
// 00570747  83c408               add esp, 8
// 0057074a  c3                   ret 

struct RefCounted {
    void* vtable;
    int* refcount;
    int* weakcount;
};

extern "C" void __stdcall sub_62FC62(void* p);
extern "C" void __fastcall sub_4AD480(void* self, void* dummy, void* a, void* b, void* c, void* d);

struct VGenericSlotWrapper {
    void* vtable;
    RefCounted* counted;
    void destroy();
};

void VGenericSlotWrapper::destroy()
{
    RefCounted* rc = counted;
    vtable = (void*)0x79dcbc;
    if (rc) {
        int* inner = rc->refcount;
        void* v = *(void**)inner;
        sub_4AD480(rc, 0, v, rc, inner, 0);
        sub_62FC62(rc->refcount);
        rc->refcount = 0;
        rc->weakcount = 0;
        sub_62FC62(rc);
    }
}
