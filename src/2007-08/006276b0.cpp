// from server: 64% by colin
// roc 2007-08 006276b0  unit: RBX::CollisionStage  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006276b0
//
// 006276b0  53                   push ebx
// 006276b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006276b5  56                   push esi
// 006276b6  57                   push edi
// 006276b7  8bf9                 mov edi, ecx
// 006276b9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006276bc  8b01                 mov eax, dword ptr [ecx]
// 006276be  8b5004               mov edx, dword ptr [eax + 4]
// 006276c1  ffd2                 call edx
// 006276c3  8bf0                 mov esi, eax
// 006276c5  8b07                 mov eax, dword ptr [edi]
// 006276c7  8b5004               mov edx, dword ptr [eax + 4]
// 006276ca  8bcf                 mov ecx, edi
// 006276cc  ffd2                 call edx
// 006276ce  3bf0                 cmp esi, eax
// 006276d0  7e0b                 jle 0x6276dd
// 006276d2  8b4f08               mov ecx, dword ptr [edi + 8]
// 006276d5  8b01                 mov eax, dword ptr [ecx]
// 006276d7  8b5014               mov edx, dword ptr [eax + 0x14]
// 006276da  53                   push ebx
// 006276db  ffd2                 call edx
// 006276dd  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 006276e0  85f6                 test esi, esi
// 006276e2  7c28                 jl 0x62770c
// 006276e4  8b4714               mov eax, dword ptr [edi + 0x14]
// 006276e7  8b5718               mov edx, dword ptr [edi + 0x18]
// 006276ea  8b5490fc             mov edx, dword ptr [eax + edx*4 - 4]
// 006276ee  8d4f14               lea ecx, [edi + 0x14]
// 006276f1  8914b0               mov dword ptr [eax + esi*4], edx
// 006276f4  89721c               mov dword ptr [edx + 0x1c], esi
// 006276f7  8b4104               mov eax, dword ptr [ecx + 4]
// 006276fa  6a00                 push 0
// 006276fc  83e801               sub eax, 1
// 006276ff  50                   push eax
// 00627700  e84b81fdff           call 0x5ff850
// 00627705  c7431cffffffff       mov dword ptr [ebx + 0x1c], 0xffffffff
// 0062770c  5f                   pop edi
// 0062770d  5e                   pop esi
// 0062770e  5b                   pop ebx
// 0062770f  c20400               ret 4

struct CollisionStage
{
    void* vtable0;
    void* field4;
    void* field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    void removeContact(void* contact);
};

struct Contact
{
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
};

extern "C" void __stdcall sub_005ff850(int a, int b);

void CollisionStage::removeContact(void* contact)
{
    Contact* c = (Contact*)contact;
    int a = ((int (__thiscall*)(void*))((*(void***)c->field4)[1]))((void*)c->field4);
    int b = ((int (__thiscall*)(void*))((*(void***)this)[1]))((void*)this);
    if (a > b)
    {
        ((void (__thiscall*)(void*, void*))((*(void***)this->field8)[5]))((void*)this->field8, contact);
    }
    int idx = c->field1C;
    if (idx >= 0)
    {
        int* arr = (int*)this->field14;
        int count = this->field18;
        int last = arr[count - 1];
        arr[idx] = last;
        *(int*)(last + 0x1C) = idx;
        sub_005ff850(count - 1, 0);
        c->field1C = -1;
    }
}
