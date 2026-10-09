// from server: 100% by colin
// roc 2007-08 00537c20  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537c20
//
// 00537c20  56                   push esi
// 00537c21  8bf1                 mov esi, ecx
// 00537c23  e8285f0300           call 0x56db50
// 00537c28  6a10                 push 0x10
// 00537c2a  8906                 mov dword ptr [esi], eax
// 00537c2c  e8c5820f00           call 0x62fef6
// 00537c31  83c404               add esp, 4
// 00537c34  85c0                 test eax, eax
// 00537c36  741d                 je 0x537c55
// 00537c38  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537c3c  d901                 fld dword ptr [ecx]
// 00537c3e  c7006c577a00         mov dword ptr [eax], 0x7a576c
// 00537c44  d95804               fstp dword ptr [eax + 4]
// 00537c47  d94104               fld dword ptr [ecx + 4]
// 00537c4a  d95808               fstp dword ptr [eax + 8]
// 00537c4d  d94108               fld dword ptr [ecx + 8]
// 00537c50  d9580c               fstp dword ptr [eax + 0xc]
// 00537c53  eb02                 jmp 0x537c57
// 00537c55  33c0                 xor eax, eax
// 00537c57  8b4e04               mov ecx, dword ptr [esi + 4]
// 00537c5a  85c9                 test ecx, ecx
// 00537c5c  894604               mov dword ptr [esi + 4], eax
// 00537c5f  7408                 je 0x537c69
// 00537c61  8b01                 mov eax, dword ptr [ecx]
// 00537c63  8b10                 mov edx, dword ptr [eax]
// 00537c65  6a01                 push 1
// 00537c67  ffd2                 call edx
// 00537c69  8bc6                 mov eax, esi
// 00537c6b  5e                   pop esi
// 00537c6c  c20400               ret 4

struct VNode {
    int* field0;
    int* field4;
    VNode* construct(int* src);
};

extern "C" int* __cdecl sub_56db50();
extern "C" int* __cdecl sub_62fef6(unsigned int size);

VNode* VNode::construct(int* src) {
    int* p;
    field0 = sub_56db50();
    p = sub_62fef6(0x10);
    if (p) {
        *(float*)(p + 1) = *(float*)src;
        p[0] = 0x7a576c;
        *(float*)(p + 2) = *(float*)(src + 1);
        *(float*)(p + 3) = *(float*)(src + 2);
    } else {
        p = 0;
    }
    {
        int* old = field4;
        field4 = p;
        if (old) {
            (*(void(__thiscall**)(int*, int))(*old))(old, 1);
        }
    }
    return this;
}
