// from server: 83% by colin
// roc 2007-08 00537d40  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537d40
//
// 00537d40  8b442408             mov eax, dword ptr [esp + 8]
// 00537d44  83f802               cmp eax, 2
// 00537d47  7519                 jne 0x537d62
// 00537d49  56                   push esi
// 00537d4a  8b742408             mov esi, dword ptr [esp + 8]
// 00537d4e  56                   push esi
// 00537d4f  b9809c8900           mov ecx, 0x899c80
// 00537d54  ff1508e77700         call dword ptr [0x77e708]
// 00537d5a  f6d8                 neg al
// 00537d5c  1bc0                 sbb eax, eax
// 00537d5e  23c6                 and eax, esi
// 00537d60  5e                   pop esi
// 00537d61  c3                   ret 
// 00537d62  85c0                 test eax, eax
// 00537d64  751d                 jne 0x537d83
// 00537d66  6a08                 push 8
// 00537d68  e889810f00           call 0x62fef6
// 00537d6d  83c404               add esp, 4
// 00537d70  85c0                 test eax, eax
// 00537d72  741e                 je 0x537d92
// 00537d74  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537d78  8b11                 mov edx, dword ptr [ecx]
// 00537d7a  8910                 mov dword ptr [eax], edx
// 00537d7c  8b4904               mov ecx, dword ptr [ecx + 4]
// 00537d7f  894804               mov dword ptr [eax + 4], ecx
// 00537d82  c3                   ret 
// 00537d83  8b542404             mov edx, dword ptr [esp + 4]
// 00537d87  52                   push edx
// 00537d88  e8d57e0f00           call 0x62fc62
// 00537d8d  83c404               add esp, 4
// 00537d90  33c0                 xor eax, eax
// 00537d92  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);

struct S_func_00537d40 {
};

void* __cdecl f(int a1, int a2)
{
    if (a2 == 2) {
        void* p = (void*)a1;
        type_info* ti = (type_info*)0x899c80;
        bool eq = ti->operator==(*(type_info*)a1);
        return eq ? p : 0;
    }
    if (a2 == 0) {
        void* p = malloc(8);
        if (p) {
            *(int*)p = *(int*)a1;
            *(int*)((char*)p + 4) = *(int*)((char*)a1 + 4);
        }
        return p;
    }
    free((void*)a1);
    return 0;
}
