// from server: 94% by colin
// roc 2007-08 00565920  unit: RBX::Verb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00565920
//
// 00565920  56                   push esi
// 00565921  8bf1                 mov esi, ecx
// 00565923  8b4e04               mov ecx, dword ptr [esi + 4]
// 00565926  85c9                 test ecx, ecx
// 00565928  7413                 je 0x56593d
// 0056592a  ff15c0e47700         call dword ptr [0x77e4c0]
// 00565930  83f8ff               cmp eax, -1
// 00565933  7408                 je 0x56593d
// 00565935  c6460800             mov byte ptr [esi + 8], 0
// 00565939  8bc6                 mov eax, esi
// 0056593b  5e                   pop esi
// 0056593c  c3                   ret 
// 0056593d  c7460400000000       mov dword ptr [esi + 4], 0
// 00565944  c6460801             mov byte ptr [esi + 8], 1
// 00565948  8bc6                 mov eax, esi
// 0056594a  5e                   pop esi
// 0056594b  c3                   ret 

struct S {
    char pad[4];
    void* field_0x4;
    bool field_0x8;
    S* m();
};

struct StreamBuf {
    int sbumpc();
};

S* S::m()
{
    StreamBuf* p = (StreamBuf*)field_0x4;
    if (p != 0) {
        int r = p->sbumpc();
        if (r != -1) {
            field_0x8 = false;
            return this;
        }
    }
    field_0x4 = 0;
    field_0x8 = true;
    return this;
}
