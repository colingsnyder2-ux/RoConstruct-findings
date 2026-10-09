// from server: 100% by colin
// roc 2007-08 00537bd0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537bd0
//
// 00537bd0  56                   push esi
// 00537bd1  8bf1                 mov esi, ecx
// 00537bd3  e8985e0300           call 0x56da70
// 00537bd8  6a10                 push 0x10
// 00537bda  8906                 mov dword ptr [esi], eax
// 00537bdc  e815830f00           call 0x62fef6
// 00537be1  83c404               add esp, 4
// 00537be4  85c0                 test eax, eax
// 00537be6  741d                 je 0x537c05
// 00537be8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537bec  d901                 fld dword ptr [ecx]
// 00537bee  c7005c577a00         mov dword ptr [eax], 0x7a575c
// 00537bf4  d95804               fstp dword ptr [eax + 4]
// 00537bf7  d94104               fld dword ptr [ecx + 4]
// 00537bfa  d95808               fstp dword ptr [eax + 8]
// 00537bfd  d94108               fld dword ptr [ecx + 8]
// 00537c00  d9580c               fstp dword ptr [eax + 0xc]
// 00537c03  eb02                 jmp 0x537c07
// 00537c05  33c0                 xor eax, eax
// 00537c07  8b4e04               mov ecx, dword ptr [esi + 4]
// 00537c0a  85c9                 test ecx, ecx
// 00537c0c  894604               mov dword ptr [esi + 4], eax
// 00537c0f  7408                 je 0x537c19
// 00537c11  8b01                 mov eax, dword ptr [ecx]
// 00537c13  8b10                 mov edx, dword ptr [eax]
// 00537c15  6a01                 push 1
// 00537c17  ffd2                 call edx
// 00537c19  8bc6                 mov eax, esi
// 00537c1b  5e                   pop esi
// 00537c1c  c20400               ret 4

struct VNode {
    int* field0;
    int* field4;
    VNode* construct(int* src);
};

extern "C" int* __cdecl sub_56da70();
extern "C" int* __cdecl sub_62fef6(unsigned int size);

VNode* VNode::construct(int* src) {
    int* p;
    field0 = sub_56da70();
    p = sub_62fef6(0x10);
    if (p) {
        *(float*)(p + 1) = *(float*)src;
        p[0] = 0x7a575c;
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
